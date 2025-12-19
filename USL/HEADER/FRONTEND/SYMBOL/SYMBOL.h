#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include <unordered_map>;
#include <memory>
#include <atomic>
#include <variant>
#include "MACROS.h"
#include "HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h"

#else

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
		SymbolPtr ownSymbol;
		std::string SimpleName;
		friend class SymbolTable;
	public:
		std::unordered_map<std::string, SymbolPtr>& GetSymbols() noexcept {
			return symbols;
		}
		std::unordered_map<std::string, ScopePtr>& GetChildScopes() noexcept {
			return child_scopes;
		}
		WeakScopePtr GetParentScope() const noexcept {
			return parent_scope;
		}
		void SetParentScope(WeakScopePtr parent) noexcept {
			parent_scope = parent;
		}
		SymbolPtr GetOwnSymbol() const noexcept {
			return ownSymbol;
		}
		void SetOwnSymbol(SymbolPtr symbol) noexcept {
			ownSymbol = symbol;
		}
		void SetSimpleName(const std::string& name) noexcept {
			SimpleName = name;
		}
		std::string GetSimpleName() const noexcept {
			return SimpleName;
		}


	};
	class Symbol {
	private:
		WeakScopePtr ParentScope = DEFAULTINIT;
	};
	class VariableSymbol :public Symbol {
		std::weak_ptr<TypeSymbol> type = DEFAULTINIT;
		DecoratedName decoratedName = DEFAULTINIT;
		
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
		std::weak_ptr<TypeSymbol> returnType = DEFAULTINIT;
		std::vector<std::weak_ptr<VariableSymbol>> parameterList = DEFAULTINIT;


	};
	class EnumSymbol :public Symbol {

	};
	class TypeSymbol:public Symbol{

	};
	class AttribueSymbol :public Symbol {

	};
}

