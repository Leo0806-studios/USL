#include "MACROS.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__) || defined(TESTS_BUILD)
#include <memory>
#include <iostream>
#include <thread>
#include <stack>
#include <mutex>
#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <vector>
#include "HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include <FRONTEND/MANGLED_NAME/MANGLED_NAME.h>
#include <FRONTEND/SYMBOL/SYMBOL.h>
#include "utilitys.h"
#else
import <memory>;
import <thread>;
import	<iostream>;
import <stack>;
import <mutex>;
import <stdexcept>;
import <string>;
import <string_view>;
import <utility>;
import <vector>;
import <utilitys.h>;
import <HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
#endif //  __clang__ || __INTELLISENSE__

namespace USL::FRONTEND {
	SymbolTable::SymbolTable()
	{
		ThrowIfNotMainThread();
		globalScope = std::make_shared<Scope>();
		const std::thread::id thread_id = std::this_thread::get_id();
		currentScopes[thread_id] = std::weak_ptr(globalScope);
		currentScopes[thread_id].lock()->SimpleName = "global";

	}
	
	SymbolTable::SymbolTable(const std::vector<std::thread>& threads)
	{
		ThrowIfNotMainThread();

		globalScope = std::make_shared<Scope>();
		
		globalScope->SimpleName = "global";
		// initialize current scopes for all threads to global scope


		currentScopes[std::this_thread::get_id()]	 = std::weak_ptr(globalScope);
		for (const auto& thread : threads) {
			const std::thread::id thread_id = thread.get_id();
			currentScopes[thread_id] = std::weak_ptr(globalScope);
		}

	}

	void SymbolTable::BuildFastMap()
	{
		
	}
	WeakSymbolPtr SymbolTable::LookupSymbol(const DecoratedName& name) const 
	{
		
		WeakSymbolPtr ret = DEFAULTINIT;
		try {
		ret =FastMap.at(name);
		}
		catch (const std::out_of_range& ) {
			return {};
		}
		return ret;
	}
	WeakSymbolPtr SymbolTable::LookupSymbol(const std::string& name) const 
	{
		const std::thread::id thread_id = std::this_thread::get_id();
		const ScopePtr current = (*currentScopes.find(thread_id)).second.lock();
		auto& symbols = current->GetSymbols();
		try {
			const SymbolPtr symbol = symbols.at(name);
			return symbol;

		}
		catch (const std::out_of_range& ) {
			return{};
		}


	}

	/// <summary>
	/// recursively looksup a symbol from the provided scope and the scopes in the stack. returns an ampty weak pointer if not found
	/// </summary>
	/// <param name="symbolName"></param>
	/// <param name="scopes"></param>
	/// <param name="scope"></param>
	/// <returns></returns>
	static WeakSymbolPtr RecursiveLookuphelper(const std::string& symbolName, std::stack<std::string>& scopes, WeakScopePtr scope) noexcept {//NOLINT(performance-unnecessary-value-param)
		if (scopes.empty()) {
			//in last scope of stack. lookup symbol here

			const ScopePtr current = scope.lock();
			auto& symbols = current->GetSymbols();
#pragma warning(push)
#pragma warning(disable:26447)
				auto symbol = symbols.find( symbolName );
#pragma warning(pop)

				if (symbol != symbols.end()) {
				return (*symbol).second;
				}
					return {};

		}
		
			// find next child scope in current scope from stack.
			auto& childScopes = scope.lock()->GetChildScopes();
			const std::string top = scopes.top();
			scopes.pop();
#pragma warning(push)
#pragma warning(disable:26447)
				auto nextScope = childScopes.find(top);

#pragma warning(pop)
				if (nextScope == childScopes.end()) {
					return {};
				}
				return RecursiveLookuphelper(symbolName, scopes, (*nextScope).second);
			


		
	}
	WeakSymbolPtr SymbolTable::LookupSymbol(const std::string& name, const std::vector< std::string>& scopes) const
	{
		std::stack<std::string> scopesStack = DEFAULTINIT;
		for (const auto& scope : scopes) {
			scopesStack.emplace( scope );
		}
		const std::thread::id thread_id = std::this_thread::get_id();
#pragma warning(push)
#pragma warning(disable:26447)
		const ScopePtr current = (*currentScopes.find(thread_id)).second.lock();
#pragma warning(pop)

		//first relative lookup from current scope
		WeakSymbolPtr ret = RecursiveLookuphelper(name, scopesStack, current);
		//then lookup from global scope
		if (!ret.lock()) {
			ret = RecursiveLookuphelper(name, scopesStack, globalScope);
		}
		//no need to check if ret is valid here. it will be empty if not found in both scopes
		return ret;
	}

	bool SymbolTable::EnterScope(const std::string& scope_name)
	{ 
		const std::thread::id thread_id = std::this_thread::get_id();
		const ScopePtr current = currentScopes[thread_id].lock();
		if (!current) {
			return false;
		}
		auto& childScopes = current->GetChildScopes();
		auto nextScopeIt = childScopes.find( scope_name);
		if (nextScopeIt == childScopes.end()) {
			return false;
		}
		currentScopes[thread_id] = std::weak_ptr((*nextScopeIt).second);
		return true;
	}
	bool USL::FRONTEND::SymbolTable::ExitScope() noexcept
	{
		const std::thread::id thread_id = std::this_thread::get_id();
#pragma warning(push)
#pragma warning(disable:26447)
		const ScopePtr current = currentScopes[thread_id].lock(); //suppress warning about possible throwing since we know that operator [] wont throw in this case
#pragma warning(pop)

			if (current && current->GetParentScope().lock()) {
#pragma warning(push)
#pragma warning(disable:26447)
				currentScopes[thread_id] = currentScopes[thread_id].lock()->GetParentScope(); //suppress warning about possible throwing since we know that operator [] wont throw in this case
#pragma warning(pop)
				return true;

		}
		return false;
	}

	/// <summary>
	/// returns the current internal scope of the calling thread
	/// </summary>
	/// <returns></returns>
	 WeakScopePtr SymbolTable::GetCurrentScope() const noexcept {
		const std::thread::id thread_id = std::this_thread::get_id();
#pragma warning(push)
#pragma warning(disable:26447)
		return (*currentScopes.find(thread_id)).second;//suppress warning about possible throwing since we know that operator [] wont throw in this case
#pragma warning(pop)
	}
	 USL::FRONTEND::SymbolTable:: InsertScopeResult USL::FRONTEND::SymbolTable::InsertScope(std::string name)
	{
		const std::thread::id thread_id = std::this_thread::get_id();

		const ScopePtr current = currentScopes[thread_id].lock();
		auto exists = current->GetChildScopes().find(name);
		if ( exists!= current->GetChildScopes().end()) {
			currentScopes[thread_id] = std::weak_ptr((*exists).second);
			return InsertScopeResult::allreadyExists;
		}
		auto newScope = std::make_shared<Scope>();
		newScope->SetSimpleName(name);
		newScope->SetParentScope(current);
		auto succses =current->GetChildScopes().insert({ std::move(name),newScope });
		if (!succses.second ) {
			return InsertScopeResult::failiure;
		}
		currentScopes[thread_id] = std::weak_ptr(newScope);
		return succses;

	}
	bool SymbolTable::InsertSymbol(std::unique_ptr<Symbol>symbol, std::string& name)
	{
		const std::thread::id thread_id = std::this_thread::get_id();

		static std::mutex mutex;
		mutex.lock();
		const ScopePtr current = currentScopes[thread_id].lock();
		auto& symbols = current->GetSymbols();
		auto succsess = symbols.insert({ name,std::move(symbol) });
		mutex.unlock();
		return succsess.second;
	}
}// namespace USL::FRONTEND