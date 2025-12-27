//################################################################
//						SYMBOL_TABLE.h
//	Author: Sam Stamatelos
//	Date created: 07.12.2025
//	Last modified:07.12.2025
//	Purpose: Declarations for the Symbol table of the USL compiler.
//	whenever the wording "simple name" is used it refers to the literal
//	identifier of the symbol in the source-file without any decoration.
//################################################################
#pragma once
#include "MACROS.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include <utility>
#include <string>
#include <unordered_map>
#include <exception>
#include <vector>
#include <memory>
#include <atomic>
#include <thread>
#include "HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#include "HEADER/FRONTEND/SYMBOL/SYMBOL.h"
#else
import <utility>;
import <string>;
import <memory>;
import <exception>;
import <unordered_map>;
import <atomic>;
import <vector>;
import <thread>;
import <HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
import <HEADER/FRONTEND/SYMBOL/SYMBOL.h>;
#endif //  __clang__ || __INTELLISENSE__

namespace USL::FRONTEND {
	class ScopeNotFOund : public std::exception {
		std::string message ;
	public:
		ScopeNotFOund() = default;
		explicit ScopeNotFOund(std::string msg) : message(std::move(msg)) {}
		[[nodiscard]]const char* what() const noexcept override {
			return message.c_str();
		}
	};
	class SymbolTable {
	private:
		ScopePtr globalScope ;
		std::unordered_map<DecoratedName, WeakSymbolPtr> FastMap;
		std::unordered_map<std::thread::id, WeakScopePtr> currentScopes;
	public:
		/// <summary>
		/// creates a symbol table with a global scope and initializes the current scope for the calling thread to the global scope
		/// only usable for single threaded environments
		/// </summary>
		SymbolTable();
		
		/// <summary>
		/// creates a symbol table with a global scope and initializes the current scope for each thread to the global scope
		/// usable for multi threaded environments
		/// </summary>
		/// <param name="maxThreads"></param>
		explicit SymbolTable(const std::vector<std::thread>& threads);
		
		/// <summary>
		/// builds the FastMap from the hierarchical table that can be indexed by the decorated name in O(1) time
		/// </summary>
		void BuildFastMap();

		/// <summary>
		/// performs a lookup for a symbol by its decorated name in O(1) time
		/// only usable after BuildFastMap has been called
		/// </summary>
		/// <param name="name"></param>
		/// <returns></returns>
		[[nodiscard]] WeakSymbolPtr LookupSymbol(const DecoratedName& name)const;

		/// <summary>
		/// performs a lookup for a symbol in the currents cope by its simple name
		/// </summary>
		/// <param name="name"></param>
		/// <returns></returns>
		[[nodiscard]] WeakSymbolPtr LookupSymbol(const std::string& name)const;

		/// <summary>
		/// performs a lookup for a symbol by its simple name in the given scope.
		/// first it checks relative to the current and then from the global scope
		/// returns a null weak pointer if not found or one of the scopes does not exist
		/// </summary>
		/// <param name="name">the name of the symbol to find</param>
		/// <param name="scope">a list of Scope names sorted towards the target scope (target scope is the last element)</param>
		/// <returns></returns>
		[[nodiscard]] WeakSymbolPtr LookupSymbol(const std::string& name, const std::vector< std::string>& scope)const;





		/// <summary>
		/// internaly enters a child scope of the current scope with the given name
		/// the scope is made the current scope of the thread it it called from.
		/// returns false on failiure
		/// </summary>
		/// <param name="scope_name"></param>
		[[nodiscard]] bool  EnterScope(const std::string& scope_name);

		/// <summary>
		/// exits the current internal scope and makes the parent scope the current scope on the calling thread.
		/// </summary>
		[[nodiscard]] bool ExitScope()noexcept;

		/// <summary>
		/// returns the current internal scope of the calling thread
		/// </summary>
		/// <returns></returns>
		[[nodiscard]] WeakScopePtr GetCurrentScope()const noexcept;

		enum class InsertScopeResult :unsigned char {
			succses = 0,
			failiure=1,
			allreadyExists=2
		};
		/// <summary>
		/// inserts an empty scope with the given name into the current scope and enters it.
		/// enters the scope only for the calling thread.
		/// if the scope already exists it just enters it and returns 
		/// </summary>
		/// <param name="name"></param>
		[[nodiscard]] InsertScopeResult InsertScope(std::string name);

		/// <summary>
		/// inserts a symbol into the current scope of the calling thread with the given simple name
		/// 
		/// </summary>
		/// <param name="symbol"></param>
		/// <param name="name"></param>
		/// <returns></returns>
		[[nodiscard]] bool InsertSymbol(std::unique_ptr<Symbol>symbol, std::string& name);


		
	};
}//namespace USL::FRONTEND