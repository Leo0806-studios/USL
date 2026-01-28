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
#include "FRONTEND/ERROR_CODES/ERROR_CODES.h"
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
import <FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
import <FRONTEND/SYMBOL/SYMBOL.h>;
import <FRONTEND/ERROR_CODES/ERROR_CODES.h>;
#endif //  __clang__ || __INTELLISENSE__

namespace USL::FRONTEND {
	SymbolTable::SymbolTable()
	{
		ThrowIfNotMainThread();
		globalScope = std::make_shared<Scope>();
		const std::thread::id thread_id = std::this_thread::get_id();
		currentScopes[thread_id] = std::weak_ptr(globalScope);
		currentScopes[thread_id].lock()->simpleName = "global";

	}

	SymbolTable::SymbolTable(SymbolTable&& other) noexcept :
		insertLock(), globalScope(std::exchange(other.globalScope, nullptr)), FastMap(std::move(other.FastMap)), currentScopes(std::move(other.currentScopes))
	{
	}

	SymbolTable& SymbolTable::operator=(SymbolTable&& other) noexcept
	{
		globalScope = std::exchange(other.globalScope, nullptr);
		FastMap = std::exchange(other.FastMap, {});
		currentScopes = std::move(other.currentScopes);
		return *this;
	}

	SymbolTable::SymbolTable(const std::vector<std::thread>& threads)
	{
		ThrowIfNotMainThread();

		globalScope = std::make_shared<Scope>();

		globalScope->simpleName = "global";
		// initialize current scopes for all threads to global scope


		currentScopes[std::this_thread::get_id()] = std::weak_ptr(globalScope);
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
			ret = FastMap.at(name);
		}
		catch (const std::out_of_range&) {
			return {};
		}
		return ret;
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
			auto symbol = symbols.find(symbolName);
#pragma warning(pop)

			if (symbol != symbols.end()) {
				return (*symbol).second;
			}
			else {
				if (current->Get_ownSymbol().second == symbolName) {
					return current->Get_ownSymbol().first;
				}
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
	WeakSymbolPtr SymbolTable::LookupSymbol(const std::string& name) const
	{
		const std::thread::id thread_id = std::this_thread::get_id();
		const ScopePtr current = (*currentScopes.find(thread_id)).second.lock();
		std::stack<std::string> dummyStack;
		return RecursiveLookuphelper(name,dummyStack,current);
		


	}
	WeakSymbolPtr SymbolTable::LookupSymbol(const std::string& name, const std::vector< std::string>& scopes) const
	{
		std::stack<std::string> scopesStack = DEFAULTINIT;
		for (const auto& scope : scopes) {
			scopesStack.emplace(scope);
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
		auto nextScopeIt = childScopes.find(scope_name);
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

		if (current && current->Get_parentScope().lock()) {
#pragma warning(push)
#pragma warning(disable:26447)
			currentScopes[thread_id] = currentScopes[thread_id].lock()->Get_parentScope(); //suppress warning about possible throwing since we know that operator [] wont throw in this case
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
	USL::FRONTEND::SymbolTable::InsertScopeResult USL::FRONTEND::SymbolTable::InsertScope(std::string name)
	{
		const std::thread::id thread_id = std::this_thread::get_id();

		const ScopePtr current = currentScopes[thread_id].lock();
		auto exists = current->GetChildScopes().find(name);
		if (exists != current->GetChildScopes().end()) {
			currentScopes[thread_id] = std::weak_ptr((*exists).second);
			return InsertScopeResult::allreadyExists;
		}
		auto newScope = std::make_shared<Scope>();
		newScope->Set_simpleName(name);
		newScope->Set_parentScope(current);
		auto succses = current->GetChildScopes().insert({ std::move(name),newScope });
		if (!succses.second) {
			return InsertScopeResult::failiure;
		}
		currentScopes[thread_id] = std::weak_ptr(newScope);
		return InsertScopeResult::succses;

	}
	SymbolTable::InsertSymbolResult SymbolTable::InsertSymbol(std::unique_ptr<Symbol>symbol, const std::string& name)
	{
		const std::thread::id thread_id = std::this_thread::get_id();
		const ScopePtr current = currentScopes[thread_id].lock();

		std::unique_lock <std::mutex> lock(insertLock);
		auto exists = current->GetSymbols().find(name);
		if (exists != current->GetSymbols().end()) {
			return InsertSymbolResult::allreadyExists;
		}
		auto& symbols = current->GetSymbols();
		auto succsess = symbols.insert({ name,std::move(symbol) });
		if (!succsess.second) {
			return InsertSymbolResult::failiure;
		}
		return InsertSymbolResult::succses;
	}
	SymbolTable::InsertSymbolResult SymbolTable::InsertScopeWithSymbol(const std::string& symbol_name, std::unique_ptr<Symbol> symbol, const std::string& scope_name)
	{
		const auto currentScopeCopy = GetCurrentScope();
		const auto it = currentScopeCopy.lock()->GetSymbols().find(symbol_name);
		if (it != currentScopeCopy.lock()->GetSymbols().end()) {

			return InsertSymbolResult::allreadyExists;
		}
		const InsertScopeResult scopeResult = InsertScope(scope_name);
		switch (scopeResult) {
			case InsertScopeResult::succses: {
					break;// nothing else to do here. just exists for future proofing
				}
			case InsertScopeResult::failiure: {
					return InsertSymbolResult::failiure;
				}
			case InsertScopeResult::allreadyExists: {
					if (!ExitScope()) {

						throw FatalError(FatalError::FailiurePhase::Phase2, "Failed to exit scope after inserting symbol with scope", __FILE__,__LINE__, __FUNCTION__);
					}
					return InsertSymbolResult::allreadyExists;
				}
		}
		auto const currentScopeAfterInsert = GetCurrentScope();
		currentScopeAfterInsert.lock()->Set_ownSymbol({ std::move(symbol),symbol_name });
		return InsertSymbolResult::succses;
	}
	namespace {
	std::string RecursiveappendSymbolTable(WeakScopePtr node, bool last,std::string intendent="") {
		auto locked = node.lock();
		auto& children = locked->GetChildScopes();
		std::stringstream ret;
		ret << intendent;
		if (last) {
			ret << "|__";
		}
		else {
			ret << "|--";
		}
		if (const auto symbol =locked->Get_ownSymbol().first.lock()) {
			ret << locked->Get_ownSymbol().second << locked->Get_ownSymbol().first.lock()->ToString();
		} 
		else {
			ret << locked->Get_simpleName();
		}
		for (auto it = children.begin(); it != children.end();it++) {
			const std::string str = RecursiveappendSymbolTable((*it).second, it == (children.end()--), intendent + "\t");
			ret << "Symbol: " << (*it).first << " " << str << "\n";
		}
		return ret.str();

	}

	}
	std::string SymbolTable::ToString()
	{
		ThrowIfNotMainThread();
		std::stringstream ret;
		const std::string str= RecursiveappendSymbolTable(globalScope, false);
		ret <<str  << '\n';
		return ret.str();
	}
}// namespace USL::FRONTEND