#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)
#include <unordered_map>;
#include <memory>
#include <atomic>
#include "HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h"

#else

import <memory>;
import <unordered_map>;
import <atomic>;
import <HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
#endif //  __clang__ || __INTELLISENSE__
namespace USL::FRONTEND {
	class Symbol;
	class Scope;
	using ScopePtr = std::shared_ptr<Scope>;
	using SymbolPtr = std::shared_ptr<Symbol>;
	using WeakSymbolPtr = std::weak_ptr<Symbol>;
	using WeakScopePtr = std::weak_ptr<Scope>;
	class Scope {
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::unordered_map<std::string, ScopePtr> child_scopes;
		WeakScopePtr parent_scope;
		SymbolPtr ownSymbol;
	};
	class Symbol {
		
	};
}