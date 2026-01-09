
//################################################################
//						USL.h
//	Author: Leo0806
//	Date created:25.12.2025
//	Last modified:08.01.2026
//	Purpose: The main interface for the USL compiler. 
//################################################################
#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <atomic>
#include <barrier>
#include <cstdint>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>
#include "FRONTEND/CMD_PARSE/CMD_PARSE.h"
#include "FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#else
import <atomic>;
import <barrier>;
import <cstdint>;
import <mutex>;
import <sstream>;
import <string>;
import <thread>;
import <unordered_map>;
import <vector>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace antlr4 {
	class ANTLRInputStream;
	class CommonTokenStream;
	namespace tree {
		class ParseTree;
	}//namespace tree
}//namespace antlr4
namespace USL::FRONTEND {
	class USL_Compiler {
	public:
		class CompilerResults {
		public:
			enum class Phase :std::uint8_t {
				done,
				Parsing,
				SemanticAnalysis,
				StaticAnalysis,
				CodeGen
			};
			bool success = false;
			Phase failedPhase = Phase::done;
			std::vector<std::string> errors;
			std::vector<std::string> warnings;
		};
	private:
		friend class CompilerHelpers;
		Arguments compilerArguments;
		std::vector<std::thread> WorkerThreads;
		std::atomic_bool StartCompiler{ false };
		std::atomic_size_t SafeCounter{ 0 };
		std::stringstream ComStream;
		std::mutex ComStreamMutex;
		std::barrier<> SyncPoint;
		FRONTEND::SymbolTable symbolTable;
		std::unordered_map<std::thread::id, CompilerResults> Results;
		/// <summary>
		/// Appends the local stream of the thread to the comstream in a threadsafe way
		/// </summary>
		void appendComStream();
		/// <summary>
		/// Prints the com stream to the console on the main thread and clears the comstream afterwards.
		/// fully guards and makes all threads wait untill the print is done
		/// </summary>
		void printComStream_Syncs();

		/// <summary>
		/// main worker function wich handles compliling a single source file  
		/// </summary>
		void Worker();

		/// <summary>
		/// loads,lexes and parses the source files and generates the parse trees.
		/// optionaly prints tokens and the parse tree depending on debug flags
		/// </summary>
		void Phase1();
		
		/// <summary>
		/// performs ymbole gathering and resolving
		/// </summary>
		void Phase2();
	public:
		//no  copying for you lol :3
		USL_Compiler(const USL_Compiler&) = delete;
		USL_Compiler& operator=(const USL_Compiler&) = delete;
		USL_Compiler(USL_Compiler&& other)=delete;
		USL_Compiler& operator=(USL_Compiler&&) = delete;
		
		/// <summary>
		/// Initializes a new instance of the <see cref="USL_Compiler"/> class.
		/// creates the compiler and parses the comand line arguments
		/// </summary>
		/// <param name="argc">The argc.</param>
		/// <param name="argv">The argv.</param>
		USL_Compiler(int argc, char** argv);

		/// <summary>
		/// performs the actual compiling process and outputs compiler results
		/// </summary>
		/// <returns></returns>
		const CompilerResults Compile();

		/// <summary>
		/// writes the resulting binary of the compiler to a file 
		/// </summary>
		/// <returns></returns>
		bool WriteOutput();


		/// <summary>
		/// releases all ressources used by the compiler and joins all created threads
		/// </summary>
		~USL_Compiler();
	};
}// namespace USL::FRONTEND