#pragma once
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
#include "SYMBOLS/SYMBOLS.h"
import std;
#define USL_NODISCARD [[nodiscard]]
namespace llvm {
	class Type;
	class Function;
}
namespace USL_COMPILER {

	class SymbolTable {
		//thread safety

		static	std::atomic_bool is_reading;
		static	std::atomic_bool is_writing;



		static	std::unordered_map<std::string, std::shared_ptr<Scope>> scopes;
		static SymbolPtr rootSymbol;
		/// <summary>
		/// the top element is  allways the current scope
		/// </summary>
		static	std::stack<ScopePtr> scopeStack;
		/// <summary>
		/// equal to the topmost element of ScopeStack;
		/// </summary>
		static	ScopePtr currentScope;
		/// <summary>
		/// pushes scope to the internal Stack
		/// </summary>
		/// <param name=""></param>
		/// <returns>the element pushed to the stack</returns>
		static	ScopePtr PushStack(ScopePtr scope);
		/// <summary>
		/// pops the topmost element from the internal stack and returns it
		/// </summary>
		/// <returns>the popend element</returns>
		static	ScopePtr PopStack();
	public:
		/// <summary>
		/// adds symbol to the current scope
		/// </summary>
		/// <param name=""></param>
		/// <returns>the element added</returns>
		static	SymbolPtr AddSymbolToCurrentScope(SymbolPtr symbol);
		/// <summary>
		/// setts the current scope to be this.
		/// sets the internal scope stack to be the scoope list of the parameter
		/// eg
		/// ::Namespaace1::Namespace2
		/// adds both to the stack with Namespace2 being made the current scope
		/// </summary>
		/// <param name="Scope"></param>
		/// <returns></returns>
		static	ScopePtr SetScope(ScopePtr Scope);
		static ScopePtr PushScopeStack(ScopePtr Scope);
		/// <summary>
		/// Resolves the provided symbol by searching each scope in the current scope stack from the top down.
		/// returns false if the symbol was not found
		/// </summary>
		/// <param name="Symbol"></param>
		/// <returns></returns>
		static	SymbolPtr ResolveSymbol(const std::string& Symbol, const std::vector<std::string>& scopeResolution = {});
		/// <summary>
		/// Resolves the provided sybol within the provided scope
		/// first it searches relative to the current scope and the n from the global scope
		/// returns false if the symbol is not found
		/// </summary>
		/// <param name="Scope"></param>
		/// <param name="Symbol"></param>
		/// <returns></returns>
		static	bool ResolveSymbol(ScopePtr Scope, SymbolPtr Symbol);
		/// <summary>
		/// Adds the specified symbol as a root symbol and returns a pointer to it.
		/// </summary>
		/// <param name="symbol">A pointer to the symbol to be added as a root.</param>
		/// <returns>A pointer to the root symbol that was added.</returns>
		static SymbolPtr AddRoot(SymbolPtr symbol);
		/// <summary>
		/// Removes and returns the top scope from the scope stack.
		/// </summary>
		/// <returns>A pointer to the scope that was removed from the top of the stack.</returns>
		static ScopePtr PopScopeStack();
		static std::string SymbolTableToString();
		static ScopePtr GetCurrentScope() { return currentScope; }
		static SymbolPtr GetRootSymbol() { return rootSymbol; }
		static ScopePtr GetScopeByName(const std::string& name);
		static SymbolPtr GetSymbolByName(const std::string& name, const std::vector<std::string> scopeResolution = {});
	};
	//the format of the mangled names is as follows:
	//Prefix @ Scope1 @ Scope2 @ ... @ ScopeN @ Name 
	// where name is thhe following:
	//for functions:
	// ~DecoratedNameOfFunctionReturnType ~ FunctionName ~§FunctionModifyers§~ DecoratedNameOfFunctionParameter1 ~ DecoratedNameOfFunctionParameter2 ~ ... ~ DecoratedNameOfFunctionParameterN
	// where DecoratedNameOfFunctionParameterN is the mangled name of the parameter type and the clear text name of the parameter
	// where FunctionModifyers is a string of characters that modify the function, such as 'c' for const, 'v' for volatile, etc.
	//for variables:
	//~§VariableModifyers§~VariableName~DecoratedNameOfVariableType
	// where VariableModifyers is a string of characters that modify the variable, such as 'c' for const, 'v' for volatile, etc.
	//for Types:
	//~§TypeModifyers§~TypeName
	//where TypeModifyers is a string of characters that modify the type, such as if its a class or struct, if its default on the heap, if polymorphic, etc.
	enum DecorateorSeperators : char {
		CONSTRUCTOR_PREFIX = '?',
		DESTRUCTOR_PREFIX = '!',
		ATTRIBUTE_PREFIX = '$',
		SCOPE_SEPERATOR = '@',
		SEPERATOR = '~',
		SPECIAL_SEPERATOR = '§',
		STRUCT_SIGNAL = 'E',
		CLASS_SIGNAL = 'R'
	};
	enum class DecoratedNameType {
		FUNCTION,
		VARIABLE,
		TYPE,
		ATTRIBUTE
	};
	class DecoratedName;

	class DecoratedFunction {
		std::string m_modifiers = ""; // function modifiers like const, volatile, etc.
		std::weak_ptr<DecoratedName> m_returnType = {}; // weak pointer to avoid circular references
		std::vector<std::weak_ptr<DecoratedName>> m_parameters; // weak pointers to avoid circular references
		std::string m_ClearName; // clear text name of the function without modifiers or return type (eg int main(int argc, char** argv) is main)
	public:
		bool operator==(const DecoratedFunction& other) const {
			if (m_parameters.size() != other.m_parameters.size()) return false;//short circuit if the number of parameters is different
			for (size_t i = 0; i != m_parameters.size(); i++) {
				if (m_parameters[i].lock() != other.m_parameters[i].lock()) return false;
			}
			return m_modifiers == other.m_modifiers &&
				m_returnType.lock() == other.m_returnType.lock() &&
				m_ClearName == other.m_ClearName;
		}
		bool operator!=(const DecoratedFunction& other) const {
			return !(*this == other);
		}
		size_t Hash() const noexcept;
		std::string& GetSetClearName(const std::string& NewName = {});
		std::string toString()const noexcept;
	};
	class DecoratedVariable {
		std::string m_modifiers = ""; // variable modifiers like const, volatile, etc.
		std::weak_ptr<DecoratedName> m_type = {}; // weak pointer to avoid circular references
		std::string m_ClearName; // clear text name of the variable without modifiers or type (eg int x is x)
	public:
		bool operator==(const DecoratedVariable& other) const {
			return m_modifiers == other.m_modifiers &&
				m_type.lock() == other.m_type.lock() &&
				m_ClearName == other.m_ClearName;
		}
		bool operator!=(const DecoratedVariable& other) const {
			return !(*this == other);
		}
		size_t Hash()const  noexcept;
	};
	class DecoratedType {
		std::string m_clearName = "";

	public:
		bool operator== (const DecoratedType& other)const noexcept {
			return m_clearName == other.m_clearName;
		}
		bool operator!=(const DecoratedType& other)const noexcept {
			return!(*this == other);
		}
		size_t Hash()const  noexcept;
	};
	class DecoratedAttribute {
		std::string m_clearName = "";
	public:
		bool operator==(const DecoratedAttribute& other)const noexcept {
			return m_clearName == other.m_clearName;
		}
		bool operator!=(const DecoratedAttribute& other)const noexcept {
			return!(*this == other);
		}
		size_t Hash()const  noexcept;
	};
	class DecoratedName {
		friend class DecoratorHasher;
		std::variant< DecoratedFunction, DecoratedVariable, DecoratedType, DecoratedAttribute> m_decorated; // the name of the symbol, can be a string or a decorated function/variable/type/attribute


		DecoratedNameType type;
		std::vector<std::string> scopeResolution;
		std::string Prefixes;
	private:
	public:

		std::string ToString() ;
		bool operator==(const DecoratedName& other) const noexcept;
		bool operator!=(const DecoratedName& other)const noexcept { 
			return !(*this == other);
		}
		/// <summary>
		/// returns if the decorated name is valid
		/// might be unreliable 
		/// </summary>
		/// <returns></returns>
		USL_NODISCARD bool isValid()const noexcept;
	};
	class DecoratorHasher {
	public:
		size_t operator()(const DecoratedName& decoratedName) const;
	};
	/// <summary>
	/// thread safe SymbolTable
	/// stores in a hashmap to reduce compleity
	/// Decorated names are keys
	/// 
	/// 
	/// static funcs naming reading guides
	///		*_CN	searches by clear name
	///		*_N		searches by
	/// </summary>
	class SimplifyedSymbolTable {
		std::stack<std::string> ScopeStack{};

		std::unordered_map<DecoratedName, SymbolPtr, DecoratorHasher> symbols;// with the new Decorated names all symbols ae unique


		USL_NODISCARD SimplifyedSymbolTable()noexcept;
		~SimplifyedSymbolTable()noexcept;

		/// <summary>
		/// constructs a decoratedName from the prvided name and the current scope
		/// </summary>
		/// <param name="type">			= the type of the symbol to be added</param>
		/// <param name="specialData">	= optional, contains special data(like attributes or cv qualifiers)</param>
		/// <param name="ClearName">	= the name of the symbol</param>
		/// <returns></returns>
		DecoratedName m_ConstructNameFromCurrentScope(const std::string_view& ClearName, SymbolType type, std::string_view specialData = {})const noexcept;
		/// <summary>
		/// searches the table for the prvided Key ( name)
		/// returns the itterator to the element or end() on error or if not found
		/// </summary>
		/// <param name="name">key to be searched for</param>
		/// <returns> itterator to symbol or end()</returns>
		USL_NODISCARD auto m_findInTable(const DecoratedName& name)noexcept;




		//statics

		static SimplifyedSymbolTable GlobalInst;

		using table = decltype(GlobalInst.symbols);
		using TableIterator = table::iterator;

	public:
		static void CreateTable()noexcept;
		/// <summary>
		/// searches for the symbol in the table
		/// returns an optional containing the itterator on succses
		/// </summary>
		/// <param name="name">the decorated name to search </param>
		/// <returns>an itterator to the symbol or an emppty optional found</returns>
		USL_NODISCARD static std::optional<TableIterator> DoEsSymExist(const DecoratedName& name)noexcept;
		/// <summary>
		/// searches for the symbol in the table
		///	searches only in current and parrent scopes
		/// constructs a decoratedname for searching internaly (might be costly bc it can involve heap alloc)
		/// returns end() if not found or on error
		/// </summary>
		/// <param name="name">the clear name to search</param>
		/// <param name="type"> the type of the symbol to be added</param>
		/// <param name="specialData">optional, contains special data(like attributes or cv qualifiers)</param>
		/// <returns>an itterator the the symbol or end() if not found</returns>
		USL_NODISCARD static auto DoesSymExist(const std::string_view& name,SymbolType type, std::string_view specialData = {})noexcept;
		/// <summary>
		/// adds a symbol to the current scope
		/// will construct a Decorated name internaly and insert it into the table
		/// returns an itterator to the symbol or end() on error
		/// </summary>
		/// <param name="Symbol">the symbol to be added</param>
		/// <returns>itterator to the symbol or end()</returns>
		USL_NODISCARD static auto AddSymbol(const SymbolPtr Symbol) noexcept;
		/// <summary>
		/// adds a symbol at the specified scope
		/// more performant as it can directly insert into the table.
		/// returns an itterator to the symbol or end() on error
		/// </summary>
		/// <param name="name">decorated name of the object</param>
		/// <param name="Symbol">the symbol to be added</param>
		/// <returns>ittertor to the symbol or end()</returns>
		USL_NODISCARD static auto AddSymbol(const DecoratedName& name, const SymbolPtr Symbol)noexcept;
		/// <summary>
		/// locks the internal mutex of the table
		/// </summary>
		/// <returns></returns>
		USL_NODISCARD static auto Lock()noexcept;
		/// <summary>
		/// unlocks the internal mutex
		/// </summary>
		/// <returns></returns>
		USL_NODISCARD static auto UnLock()noexcept;

	};

}
#endif // !SYMBOL_TABLE_H
