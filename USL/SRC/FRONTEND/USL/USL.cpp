#pragma warning (disable: 4626)
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <antlr4-runtime.h>
#include <atomic>
#include <barrier>
#include <cstdint>
#include <fstream>
#include <ios>
#include <iostream>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>
#include <USLLexer.h>
#include <USLParser.h>
#include <utility>
#include <vector>
#include "COMPILER_HELPERS/COMPILER_HELPERS.h"
#include "FRONTEND/ERROR_LISTENER/ERROR_LISTENER.h"
#include "FRONTEND/USL/USL.h"
#include "HEADER/FRONTEND/CMD_PARSE/CMD_PARSE.h"
#include "HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include "utilitys.h"
#include <FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h>
#else
#include "utilitys.h"
import <ios>;
import <fstream>;
import <vector>;
import <utility>;
import <memory>;
import <mutex>;
import <iostream>;
import <sstream>;
import <cstdint>;
import <barrier>;
import <thread>;
import <atomic>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <antlr4-runtime.h>;
import <FRONTEND/USL/USL.h>;
#pragma warning (push,0)
import <USLLexer.h>;
import <USLParser.h>;
#pragma warning(pop)
import <FRONTEND/ERROR_LISTENER/ERROR_LISTENER.h>;
#include <FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h>
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace USL::FRONTEND {
	struct PerThreadData {
		std::atomic_bool failed{ false };
		std::stringstream localStream;
		std::ifstream InputFileStream;
		std::unique_ptr<antlr4::ANTLRInputStream> InputStream;
		std::unique_ptr<antlr4::CommonTokenStream> TokeStream;
		std::unique_ptr<USLLexer> Lexer;
		std::unique_ptr<USLParser> Parser;
		antlr4::tree::ParseTree* tree = nullptr;
	};
	static thread_local PerThreadData ThreadData_g;//NOSONAR

	static void printAST(std::stringstream& outstream, USLParser* parser, antlr4::tree::ParseTree* tree, const std::string& indent = "", bool last = true) {
		// Print the current node
		const std::string nodeText = antlr4::tree::Trees::getNodeText(tree, parser);
		outstream << indent;

		if (last) {
			outstream << "|__";  // Indicate this is the last child
		}
		else {
			outstream << "|--";  // Indicate this is not the last child
		}

		outstream << nodeText << '\n';

		// Prepare the indentation for children
		const std::string newIndent = indent + (last ? "    " : "|   ");

		// Recursively print children of this node
		for (size_t i = 0; i < tree->children.size(); i++) {
			printAST(outstream, parser, tree->children[i], newIndent, i == tree->children.size() - 1);
		}
	}

	USL_Compiler::USL_Compiler(int argc, char** argv) : compilerArguments(argc, argv), SyncPoint(static_cast<int>(compilerArguments.GetSourceFiles().size()))
	{
#pragma warning (push)
#pragma warning (disable: 4365)
		const int numWorkers = static_cast<int>(compilerArguments.GetSourceFiles().size()) - (1);
#pragma warning (pop)
		std::vector<std::thread> Workers;
		Workers.reserve(static_cast<size_t>(numWorkers));
		for (int i = 0; i < numWorkers; ++i) {
			Workers.emplace_back((std::thread(&USL_Compiler::Worker, this)));
		}
		symbolTable = std::move(SymbolTable(Workers));
		this->WorkerThreads = std::move(Workers);
	}

	const USL_Compiler::CompilerResults USL::FRONTEND::USL_Compiler::Compile()
	{
		
		StartCompiler.store(true);
		Worker();
		std::cout << ComStream.str() << '\n' << std::flush;
		return CompilerResults();
	}

	bool USL_Compiler::WriteOutput()
	{
		return false;
	}
	USL_Compiler::~USL_Compiler()
	{
		for (auto& thread : WorkerThreads) {
			if (thread.joinable()) {
#pragma warning (push)
#pragma warning (disable: 26447)
				thread.join();
#pragma warning (pop)
			}
		}
	}

	void USL_Compiler::appendComStream()
	{
		const 	std::lock_guard<std::mutex> lock(ComStreamMutex);
		ComStream << "\n\n" << ThreadData_g.localStream.str();
	}

	void USL_Compiler::printComStream_Syncs()
	{
		SyncPoint.arrive_and_wait();

		if (IsMainThread()) {
			std::cout << ComStream.str() << '\n' << std::flush;
			ComStream.str(std::string());
		}
		SyncPoint.arrive_and_wait();
	}

	void USL_Compiler::Worker()
	{
		Results[std::this_thread::get_id()];


		while (!StartCompiler.load()) {
			std::this_thread::yield();
		}
		Phase1();
		if (ThreadData_g.failed) {
			return;
		}

	}
	void USL_Compiler::Phase1()
	{
		//sync start and prep work

		SyncPoint.arrive_and_wait();
		std::stringstream& localStream = ThreadData_g.localStream;
		const size_t index = SafeCounter.fetch_add(1, std::memory_order::acquire);
		const auto& inputFile = compilerArguments.GetSourceFiles()[index];
		SyncPoint.arrive_and_wait();
		SafeCounter.fetch_sub(1, std::memory_order::acquire);

		//load and open file
		std::ifstream& fileStream = [&]()->std::ifstream& {
			std::ifstream inputFilestream(inputFile, std::ios::in);
			ThreadData_g.InputFileStream = std::move(inputFilestream);
			return ThreadData_g.InputFileStream;
			}();
		if (!fileStream.is_open()) {
			localStream << "failed to open source file: " << inputFile << '\n';
			appendComStream();
			SyncPoint.arrive_and_drop();
			ThreadData_g.failed.store(true);
			return;
		}
		printComStream_Syncs();

		using antlr4Istream = std::unique_ptr< antlr4::ANTLRInputStream>;
		antlr4Istream& inputStream = [&]()->std::unique_ptr< antlr4::ANTLRInputStream>&{
			ThreadData_g.InputStream = std::make_unique<antlr4::ANTLRInputStream>(fileStream);
			return ThreadData_g.InputStream;
			}();
		if (!inputStream) {
			localStream.str(std::string());//might be unnecesary
			localStream << "failed to allocate and create antlr4Inputstream on thread:" << std::this_thread::get_id() << " for file: " << inputFile << '\n';
			appendComStream();
			SyncPoint.arrive_and_drop();
			ThreadData_g.failed.store(true);
			return;
		}
		printComStream_Syncs();


		std::unique_ptr<::USLLexer>& lexer = [&]()->std::unique_ptr<::USLLexer>&{
			ThreadData_g.Lexer = std::make_unique<::USLLexer>(static_cast<antlr4::CharStream*>(&(*inputStream)));
			return ThreadData_g.Lexer;
			}();
		if (!lexer) {
			localStream.str(std::string());//might be uneccesary
			localStream << "failed to allocate and create USLLexer in thread: " << std::this_thread::get_id() << " for file: " << inputFile << '\n';
			appendComStream();
			SyncPoint.arrive_and_drop();
			ThreadData_g.failed.store(true);
		}
		printComStream_Syncs();

		using antlr4TokenStream = std::unique_ptr<antlr4::CommonTokenStream>;
		//antlr4::CommonTokenStream str(&*lexer);
		antlr4TokenStream& tokenStream = [&]()->std::unique_ptr< antlr4::CommonTokenStream>&{

			ThreadData_g.TokeStream = std::make_unique<antlr4::CommonTokenStream>(static_cast<antlr4::TokenSource*>(&(*ThreadData_g.Lexer)));
			return ThreadData_g.TokeStream;
			}();
		if (!tokenStream) {
			localStream.str(std::string());//might be uneccesary
			localStream << " failled to allocate and create antlr4TokenStream on thread: " << std::this_thread::get_id() << " for file: " << inputFile << '\n';
			appendComStream();
			SyncPoint.arrive_and_drop();
			ThreadData_g.failed.store(true);
			return;
		}
		tokenStream->fill();
		printComStream_Syncs();

		if (compilerArguments.IsDebugOptionEnabled(USL::FRONTEND::Arguments::CompilerDebugOptions::printToken)) {
			localStream << "Tokens for file: " << inputFile;
			for (const auto* token : tokenStream->getTokens()) {
				localStream << token->toString() << '\n';
			}
			printComStream_Syncs();
		}

		using USLParser = std::unique_ptr<::USLParser>;
		USLParser& parser = [&]()->std::unique_ptr<::USLParser>&{
			ThreadData_g.Parser = std::make_unique<::USLParser>(static_cast<antlr4::TokenStream*>(&(*tokenStream)));
			return ThreadData_g.Parser;
			}();
		if (!parser) {
			localStream.str(std::string());//might be unecesary
			localStream << "failed to allocated and create USLParser on thread: " << std::this_thread::get_id() << " for file: " << inputFile << '\n';
			appendComStream();
			SyncPoint.arrive_and_drop();
			ThreadData_g.failed.store(true);
			return;
		}
		printComStream_Syncs();
		parser->removeErrorListeners();
		USL_ErrorListener errorListener;
		parser->addErrorListener(&errorListener);
		antlr4::tree::ParseTree*& tree = [&]()->antlr4::tree::ParseTree*& {
			ThreadData_g.tree = parser->program();
			return ThreadData_g.tree;
			}();
		if (!errorListener.GetSyntaxErrors().empty()) {
			localStream.str(std::string());//might be uneccesary
			localStream << "Syntax Errors in file: " << inputFile << '\n';
			for (const auto& error : errorListener.GetSyntaxErrors()) {
				localStream << error.ToString() << '\n';
			}
			appendComStream();
			SyncPoint.arrive_and_drop();
			ThreadData_g.failed.store(true);
			return;
		}
		printComStream_Syncs();
		if (compilerArguments.IsDebugOptionEnabled(Arguments::CompilerDebugOptions::printParseTree)) {
			localStream.str(std::string());
			localStream << "-c ptr is set. printing parse tree... \n";
			localStream << "Parse Tree for file: " << inputFile << '\n';
			printAST(localStream, &(*parser), tree);
			appendComStream();
			SyncPoint.arrive_and_wait();
			printComStream_Syncs();
		}
		SyncPoint.arrive_and_wait();
	}

	void USL::FRONTEND::USL_Compiler::Phase2()
	{
		SyncPoint.arrive_and_wait();

	}
}// namespace USL::FRONTEND