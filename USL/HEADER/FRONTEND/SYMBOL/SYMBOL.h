#pragma once
#include "MACROS.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include <utility>
#include <unordered_map>
#include <memory>
#include <atomic>
#include <variant>
#include "HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#include <string>
#include <vector>

#else
import <utility>;
import <string>;
import <vector>;
import <memory>;
import <unordered_map>;
import <atomic>;
import <variant>;
import <HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
#endif //  __clang__ || __INTELLISENSE__
namespace USL::FRONTEND {

	/// theorder of ownership iss
	/// scopes are owned by their parrents. the globbal scope is owned by the symbol table.
	/// symbols are owned by the scopes theyre in. if a symbol is also a scope (like a class or function. from now on called "scopeSymbol) the symbol is owned by the scope. 
	/// each symbol has a weak pointer to the scope theire in.
	/// each a scopeSymbol contains a weak pointer to its associated scope.
	/// 
	/// 

	class Symbol;
	class Scope;
	class FunctionSymbol;
	class TypeSymbol;
	class AttribueSymbol;
	class VariableSymbol;
	class EnumSymbol;
	using ScopePtr = std::shared_ptr<Scope>;
	using SymbolPtr = std::shared_ptr<Symbol>;
	using WeakSymbolPtr = std::weak_ptr<Symbol>;
	using WeakScopePtr = std::weak_ptr<Scope>;
	class Scope {
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::unordered_map<std::string, ScopePtr> child_scopes;
		WeakScopePtr parent_scope;
		std::pair<SymbolPtr, std::string> ownSymbol;
		std::string SimpleName;
		friend class SymbolTable;
	public:
		std::unordered_map<std::string, SymbolPtr>& GetSymbols() noexcept {
			return symbols;
		}
		std::unordered_map<std::string, ScopePtr>& GetChildScopes() noexcept {
			return child_scopes;
		}
		[[nodiscard]] WeakScopePtr GetParentScope() const noexcept {
			return parent_scope;
		}
		void SetParentScope(WeakScopePtr parent) noexcept {
			parent_scope = std::move(parent);
		}
		[[nodiscard]] std::pair<WeakSymbolPtr, std::string> GetOwnSymbol() const noexcept {
			return ownSymbol;
		}
		void SetOwnSymbol(std::pair<SymbolPtr,std::string> symbol) noexcept {
			ownSymbol = std::move(symbol);
		}
		void SetSimpleName(const std::string& name) noexcept {
			SimpleName = name;
		}
		[[nodiscard]]  std::string GetSimpleName() const noexcept {
			return SimpleName;
		}




	};
	class Symbol {
	private:
		WeakScopePtr ParentScope ;
		public:
			Symbol(WeakScopePtr parentScope) :ParentScope(std::move(parentScope)) {}
		[[nodiscard]] WeakScopePtr GetParentScope() const noexcept {
			return ParentScope;
		}
	};
	class VariableSymbol :public Symbol {
		std::weak_ptr<TypeSymbol> type ;
		DecoratedName decoratedName ;
		
		/// <summary>
		/// stores the aligment of the var. a value of 0 means it uses the default aligment for the type
		/// </summary>
		size_t aligment = 0;
		bool isConst= false;
		bool isVolatile = false;
		bool isUnsafe = false;
		bool StackAllocated = false;
		/// <summary>
		/// stores if a variable gets assigned a value directly in the declaration statement
		/// </summary>
		bool DeclareInitialized = false;
		bool functionParameter = false;
		

	};
	class FunctionSymbol :public Symbol {
		std::weak_ptr<TypeSymbol> returnType ;
		std::vector<std::weak_ptr<VariableSymbol>> parameterList ;


	};
	class EnumSymbol :public Symbol {
	public:
		explicit [[nodiscard]] EnumSymbol(WeakScopePtr parentScope) :Symbol(std::move(parentScope)) {}

	};
	class TypeSymbol:public Symbol{
	public:
		explicit [[nodiscard]]TypeSymbol(WeakScopePtr parentScope) :Symbol(std::move(parentScope)) {}
	};
	class AttribueSymbol :public Symbol {

	};
}

