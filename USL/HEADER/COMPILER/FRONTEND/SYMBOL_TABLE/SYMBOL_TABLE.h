#pragma once
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
import std;

namespace llvm {
	class Type;
	class Function;
}
namespace USL_COMPILER {
	class Scope;
	enum class  ScopeType {
		ST_NAMESPACE,
		ST_CLASS,
		ST_FUNCTION,
		ST_ATTRIBUTE
	};
	enum class SymbolType {
		VARIABLE,
		FUNCTION,
		TYPE,
		ENUM,
		NAMESPACE,
		ATTRIBUTE
	};
	extern std::string ScopeTypeToString(ScopeType type);
	extern std::string SymbolTypeToString(SymbolType type);

	/// <summary>
	/// base class or symbols.
	///
	/// </summary>
	class Symbol {
		SymbolType type;
		std::string name;
	protected:
		std::atomic_bool isResolved = false;
		std::atomic_bool is_reading = false;
		std::atomic_bool is_writing = false;
	public:
		explicit constexpr  Symbol(SymbolType type) : type(type) {}
		explicit Symbol(SymbolType type, const std::string& name) : type(type), name(name) {}
		const std::string& Name() const { return name; }
		SymbolType SymbolType() const { return type; }
		Symbol(const Symbol& other);
		Symbol& operator=(const Symbol& other);
		virtual bool HasChildSymbols()const = 0;
		virtual std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() = 0;
		virtual void SetParent(std::shared_ptr<Symbol> parent) = 0;
		virtual void addSymbol(std::shared_ptr<Symbol> symbol) {
			throw std::runtime_error("This symbol does not support adding child symbols.");
		}
		virtual ~Symbol() = default;
		virtual bool IsScope() const = 0;
		virtual std::shared_ptr<Scope> GetScope() const = 0;
	};

	using SymbolPtr = std::shared_ptr<Symbol>;

	class VariableSymbol : public Symbol {
	private:
		SymbolPtr parent = nullptr;
		SymbolPtr type = nullptr;
	public:
		VariableSymbol() :Symbol(SymbolType::VARIABLE) {}
		VariableSymbol(const std::string& name, SymbolPtr parent = nullptr) : Symbol(SymbolType::VARIABLE, name), parent(parent) {}
		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;

		// Inherited via Symbol
		void SetParent(std::shared_ptr<Symbol> parent) override;

		// Inherited via Symbol
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
		void SetType(SymbolPtr variableType) { this->type = variableType; }
		SymbolPtr GetVariableType() const { return type; }
	};

	class FunctionSymbol : public Symbol {
	private:
		SymbolPtr parent = nullptr;
		llvm::Function* llvmFunction = nullptr;
	private:
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::shared_ptr<Scope> ownScope = nullptr;
		std::vector<SymbolPtr> parameters = {};
		SymbolPtr returnType;
	public:
		FunctionSymbol() :Symbol(SymbolType::FUNCTION) {}
	explicit	FunctionSymbol(const std::string& name, SymbolPtr parent = nullptr);
		void AddScope(std::shared_ptr<Scope> scope);
		std::shared_ptr<Scope> getScope() const { return ownScope; }
		void SetReturnType(SymbolPtr  ptr);
		void AddParameter(SymbolPtr parameter);
		const std::vector<SymbolPtr>& GetParameters() const { return parameters; }



		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;
		void SetParent(std::shared_ptr<Symbol> parent) override;
		void addSymbol(SymbolPtr symbol)override;
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
		SymbolPtr GetReturnType();

	};

	class TypeSymbol : public Symbol {
	private:
		SymbolPtr parent = nullptr;
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::shared_ptr<Scope> ownScope = nullptr;
		llvm::Type* llvmType = nullptr;

	public:
		TypeSymbol() :Symbol(SymbolType::TYPE) {}
		explicit TypeSymbol(const std::string& name, SymbolPtr parrent = nullptr);
		void AddScope(std::shared_ptr<Scope> scope);
		std::shared_ptr<Scope> getScope() const { return ownScope; }
		std::shared_ptr<TypeSymbol> getParent() const { return std::dynamic_pointer_cast<TypeSymbol>(parent); }
		const std::unordered_map<std::string, SymbolPtr>& getSymbols() { return symbols; }
		void addSymbol(SymbolPtr symbol);

		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;

		// Inherited via Symbol
		void SetParent(std::shared_ptr<Symbol> parent) override;

		// Inherited via Symbol
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
	};


	class NamespaceSymbol :public Symbol {
	private:

		std::shared_ptr<NamespaceSymbol> parent = nullptr;
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::shared_ptr<Scope> ownScope = nullptr;
	public:
		NamespaceSymbol() :Symbol(SymbolType::NAMESPACE) {};
		explicit NamespaceSymbol(const std::string& name, SymbolPtr parrent = nullptr);
		void addScope(std::shared_ptr<Scope> scope);
		std::shared_ptr<Scope> getScope() const { return ownScope; }
		std::shared_ptr<NamespaceSymbol> getParent() const { return parent; }
		const std::unordered_map<std::string,SymbolPtr>& getSymbols();
		void addSymbol(SymbolPtr symbol);
		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;

		// Inherited via Symbol
		void SetParent(std::shared_ptr<Symbol> parent) override;

		// Inherited via Symbol
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
	};
	class AttributeSymbol : public Symbol {
		SymbolPtr parent = nullptr;
		std::unordered_map<std::string, SymbolPtr> symbols = {};
		std::shared_ptr<Scope> ownScope = nullptr;
	public:
		explicit AttributeSymbol(const std::string& name, SymbolPtr parent = nullptr) : Symbol(SymbolType::ATTRIBUTE, name), parent(parent) {}
		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;
		void SetParent(std::shared_ptr<Symbol> parent_) override;
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
	};


	class Scope {
	private:
		std::shared_ptr<Scope> parent = nullptr;
		SymbolPtr ownSymbol = nullptr;
		ScopeType type;

	public:
		Scope() = default;
		explicit Scope(ScopeType type) : type(type) {}
		explicit Scope(ScopeType type, SymbolPtr ownSymbol) : ownSymbol(ownSymbol), type(type) {}
		explicit Scope(ScopeType type, SymbolPtr ownSymbol, std::shared_ptr<Scope> parent = nullptr) : parent(parent), ownSymbol(ownSymbol), type(type) {}
		SymbolPtr getOwnSymbol() const { return ownSymbol; }
		ScopeType getType() const { return type; }
		std::shared_ptr<Scope> getParent() const { return parent; }
	};
	using ScopePtr = std::shared_ptr<Scope>;
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
		static SymbolPtr GetSymbolByName(const std::string& name, const std::vector<std::string> scopeResolution= {}) {
			if (scopeResolution.empty()) {
				return ResolveSymbol(name);
			}
			else {
				return ResolveSymbol(name, scopeResolution);
			}
		}
	};
}

//
// Globla root
// |
// |
// |
// |
// |
// |
// |
//
//
//
//
#endif // !SYMBOL_TABLE_H
