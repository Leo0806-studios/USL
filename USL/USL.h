#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <vector>
#include <string>
#include <cstdint>
#include "FRONTEND/CMD_PARSE/CMD_PARSE.h"
#include "FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include <barrier>
#include <mutex>
#else
import <barrier>;
import <cstdint>;
import <vector>;
import <string>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
import <mutex>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace antlr4 {
	class ANTLRInputStream;
	class CommonTokenStream;
	namespace tree {
		class ParseTree;
	}
}
namespace USL::FRONTEND {

	class USL_Compiler {
		Arguments compilerArguments;
		std::vector<std::thread> WorkerThreads;
		antlr4::ANTLRInputStream* inputStream = nullptr;
		antlr4::CommonTokenStream* tokenStream = nullptr;
		antlr4::tree::ParseTree* parseTree = nullptr;
		std::atomic_bool StartCompiler{ false };
		std::atomic_size_t SafeCounter{ 0 };
		std::atomic_bool FailiureDetected{ false };
		 std::stringstream ComStream;
		 std::mutex ComStreamMutex;
		FRONTEND::SymbolTable symbolTable;

			void Worker();
	public:		



		class CompilerResults {
			public:
				enum class Phase:std::uint8_t {
					done,
					Parsing,
					SemanticAnalysis,
					StaticAnalysis,
					CodeGen
				};
			bool success = false;
			Phase failedPhase=Phase::done;
			std::vector<std::string> errors;
			std::vector<std::string> warnings;
		};
		/// <summary>
		/// Initializes a new instance of the <see cref="USL_Compiler"/> class.
		/// creates the compiler and parses the comand line arguments
		/// </summary>
		/// <param name="argc">The argc.</param>
		/// <param name="argv">The argv.</param>
		USL_Compiler(int argc, char** argv);
		const CompilerResults Compile();
		bool WriteOutput();
		~USL_Compiler();
	};

}