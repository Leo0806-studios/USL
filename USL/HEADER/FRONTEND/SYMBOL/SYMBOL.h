
//################################################################
//						SYMBOL.h
//	Author: Leo0806
//	Date created: 22.11.2025
//	Last modified: 08.01.2026
//	Purpose: defins types that represent symbols in the compilers symbol table
//################################################################
#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include "HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#include <GET_SET_WRAPPER.h>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include <variant>

#else
#import <variant>;
import <utility>;
import <string>;
import <vector>;
import <memory>;
import <unordered_map>;
import <HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
import <GET_SET_WRAPPER.h>;
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
	public:

	private:
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::unordered_map<std::string, ScopePtr> childScopes;
		WeakScopePtr parentScope;
		std::pair<SymbolPtr, std::string> ownSymbol;
		std::string simpleName;
		friend class SymbolTable;
	public:

		std::unordered_map<std::string, SymbolPtr>& GetSymbols() noexcept {
			return symbols;
		} 
		std::unordered_map<std::string, ScopePtr>& GetChildScopes() noexcept {
			return childScopes;  
		}
		GetSet(parentScope)
			void Set_ownSymbol(decltype(ownSymbol) val) noexcept {
			this->ownSymbol = std::move(val);
		}
		[[nodiscard]]  std::pair<WeakSymbolPtr,std::string> Get_ownSymbol()const noexcept {
			return this->ownSymbol;
		}
		GetSet(simpleName) 
	};
	class Symbol {
	private:
		WeakScopePtr ParentScope ;
		public:
			[[nodiscard]]explicit Symbol(WeakScopePtr parentScope) :ParentScope(std::move(parentScope)) {}
		[[nodiscard]] WeakScopePtr GetParentScope() const noexcept {
			return ParentScope;
		}
		[[nodiscard]] virtual std::string ToString() const = 0;
		virtual ~Symbol() = default;
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
	public: 
		GetSet(type)
			GetSet(aligment)
			GetSet(isConst)
			GetSet(isVolatile)
			GetSet(isUnsafe)
			GetSet(StackAllocated)
			GetSet(DeclareInitialized)
			GetSet(functionParameter)
			[[nodiscard]]explicit VariableSymbol(WeakScopePtr parentScope):Symbol(std::move(parentScope)) {}
		[[nodiscard]] std::string ToString() const override;
		
	};
	class FunctionSymbol :public Symbol {
		std::weak_ptr<TypeSymbol> returnType ;
		std::vector<std::weak_ptr<VariableSymbol>> parameterList ;
	public:
			[[nodiscard]] explicit  FunctionSymbol(WeakScopePtr parentScope):Symbol(std::move(parentScope)) {}
			[[nodiscard]] std::string ToString() const override;

	};
	class EnumSymbol :public Symbol {
		WeakSymbolPtr enumtype;
	public:
		[[nodiscard]] explicit  EnumSymbol(WeakScopePtr parentScope) :Symbol(std::move(parentScope)) {}
		[[nodiscard]] std::string ToString() const override;

	};
	class EnumConstant :public Symbol {
		WeakSymbolPtr type;
		std::variant<long long, unsigned long long> value;
	public:
		[[nodiscard]]  explicit EnumConstant(WeakScopePtr parentScope) :Symbol(std::move(parentScope)) {}
		[[nodiscard]] std::string ToString() const override;

	};
	class TypeSymbol:public Symbol{
		size_t aligment = 0;
		size_t size = 0;
	public:
		[[nodiscard]] explicit TypeSymbol(WeakScopePtr parentScope) :Symbol(std::move(parentScope)) {}
		[[nodiscard]] std::string ToString() const override;

	};
	class AttribueSymbol :public Symbol {
	public:
		[[nodiscard]] explicit AttribueSymbol(WeakScopePtr parentScope) :Symbol(std::move(parentScope)) {}
		[[nodiscard]] std::string ToString() const override;

	};
}// namespace USL::FRONTEND

