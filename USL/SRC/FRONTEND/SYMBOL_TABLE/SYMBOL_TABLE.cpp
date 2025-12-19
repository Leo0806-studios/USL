#include "MACROS.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__) || defined(TESTS_BUILD)
#include <iostream>
#include <thread>
#include "HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#else
import <thread>;
import	<iostream>;
import <HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
#endif //  __clang__ || __INTELLISENSE__


namespace USL::FRONTEND {
	SymbolTable::SymbolTable()
	{
		globalScope = std::make_shared<Scope>();
		const std::thread::id thread_id = std::this_thread::get_id();
		currentScopes[thread_id] = std::weak_ptr(globalScope);
		currentScopes[thread_id].lock()->SimpleName = "global";

	}
	
	SymbolTable::SymbolTable(const std::vector<std::thread>& threads)
	{
		globalScope = std::make_shared<Scope>();
		globalScope->SimpleName = "global";
		for (auto& thread : threads) {
			const std::thread::id thread_id = thread.get_id();
			currentScopes[thread_id] = std::weak_ptr(globalScope);
		}

	}

	void SymbolTable::BuildFastMap()
	{
	}
	WeakSymbolPtr SymbolTable::LookupSymbol(const DecoratedName& name) const 
	{
		
		//TODO: insert error reporting for missing symbols
		WeakSymbolPtr ret = DEFAULTINIT;
		try {
			const DecoratedName key = name;
		ret =FastMap.at(key);
		}
		catch (const std::out_of_range& ) {
			std::cerr << "Symbol not found in SymbolTable FastMap: " << name.to_string() << std::endl;
			return {};
		}
		return ret;
	}
	WeakSymbolPtr SymbolTable::LookupSymbol(std::string_view name) const 
	{
		const std::thread::id thread_id = std::this_thread::get_id();
		ScopePtr current = const_cast<SymbolTable*>(this)->currentScopes[thread_id].lock();
		auto& symbols = current->GetSymbols();
		try {
			SymbolPtr symbol = symbols.at(std::string{name});
			return symbol;

		}
		catch (const std::out_of_range& ) {
			std::cerr << "symbol not found in current scope: " << name << std::endl;
			return {};
		}


	}

	/// <summary>
	/// recursively looksup a symbol from the provided scope and the scopes in the stack. returns an ampty weak pointer if not found
	/// </summary>
	/// <param name="symbolName"></param>
	/// <param name="scopes"></param>
	/// <param name="scope"></param>
	/// <returns></returns>
	static WeakSymbolPtr RecursiveLookuphelper(std::string_view symbolName,std::stack<std::string>& scopes, WeakScopePtr scope) noexcept{
		if (scopes.empty()) {
			//in last scope of stack. lookup symbol here

			ScopePtr current = scope.lock();
			auto& symbols = current->GetSymbols();
#pragma warning(push)
#pragma warning(disable:26447)
				auto symbol = symbols.find(std::string{ symbolName });
#pragma warning(pop)

				if (symbol == symbols.end()) {
					return {};
				}
				else {
				return (*symbol).second;
				}
		}
		else {
			// find next child scope in current scope from stack.
			auto& childScopes = scope.lock()->GetChildScopes();
			std::string top = scopes.top();
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
	}
	WeakSymbolPtr SymbolTable::LookupSymbol(std::string_view name, const std::vector< std::string>& scopes) const 
	{
		std::stack<std::string> scopesStack = DEFAULTINIT;
		for (auto& scope : scopes) {
			scopesStack.push(std::string( scope) );
		}
		const std::thread::id thread_id = std::this_thread::get_id();
		ScopePtr current = const_cast<SymbolTable*>(this)->currentScopes[thread_id].lock();
		//first relative lookup from current scope
		WeakSymbolPtr ret = RecursiveLookuphelper(name, scopesStack, current);
		//then lookup from global scope
		if (!ret.lock()) {
			ret = RecursiveLookuphelper(name, scopesStack, globalScope);
		}
		//no need to check if ret is valid here. it will be empty if not found in both scopes
		return ret;
	}

	bool SymbolTable::EnterScope(std::string_view scope_name)
	{ 
		const std::thread::id thread_id = std::this_thread::get_id();
		ScopePtr current = currentScopes[thread_id].lock();
		if (!current) {
			return false;
		}
		auto& childScopes = current->GetChildScopes();
		auto nextScopeIt = childScopes.find(std::string{ scope_name });
		if (nextScopeIt == childScopes.end()) {
			return false;
		}
		currentScopes[thread_id] = std::weak_ptr((*nextScopeIt).second);
		return true;
	}
	bool USL::FRONTEND::SymbolTable::ExitScope() noexcept
	{
		const std::thread::id thread_id = std::this_thread::get_id();
		ScopePtr current = currentScopes[thread_id].lock();

			if (current && current->GetParentScope().lock()) {
				currentScopes[thread_id] = currentScopes[thread_id].lock()->GetParentScope();
			return true;
		}
		return false;
	}

	/// <summary>
	/// returns the current internal scope of the calling thread
	/// </summary>
	/// <returns></returns>
	[[nodiscard]]
	inline WeakScopePtr SymbolTable::GetCurrentScope() const noexcept {
		const std::thread::id thread_id = std::this_thread::get_id();
		return const_cast<SymbolTable*>(this)->currentScopes[thread_id];
	}
	bool USL::FRONTEND::SymbolTable::InsertScope(std::string name)
	{
		const std::thread::id thread_id = std::this_thread::get_id();

		ScopePtr current = currentScopes[thread_id].lock();
		auto newScope = std::make_shared<Scope>();
		newScope->SetSimpleName(name);
		newScope->SetParentScope(current);
		auto succses =current->GetChildScopes().insert({ std::move(name),newScope });
		if (succses.second == false) {
			return false;
		}
		currentScopes[thread_id] = std::weak_ptr(newScope);
		return true;

	}
	bool SymbolTable::InsertSymbol(SymbolPtr symbol, std::string& name)
	{
		const std::thread::id thread_id = std::this_thread::get_id();

		static std::mutex mutex;
		mutex.lock();
		ScopePtr current = currentScopes[thread_id].lock();
		auto& symbols = current->GetSymbols();
		auto succsess = symbols.insert({ name,symbol });
		mutex.unlock();
		return succsess.second;
	}
}