#pragma warning (disable: 4626)
#include "utilitys.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <atomic>
#include <thread>
#include "USL.h"
#include "HEADER/FRONTEND/CMD_PARSE/CMD_PARSE.h"
#include "HEADER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include "antlr4-runtime.h"
#include <USLLexer.h>
#include <USLParser.h>
#include "FRONTEND/ERROR_LISTENER/ERROR_LISTENER.h"
#else
import <thread>;
import <atomic>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <antlr4-runtime.h>;
import <USL.h>;
import <USLLexer.h>;
import <USLParser.h>;
import <FRONTEND/ERROR_LISTENER/ERROR_LISTENER.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace USL::FRONTEND {

	void printAST(std::stringstream& outstream,USLParser* parser,antlr4::tree::ParseTree* tree, const std::string& indent = "", bool last = true) {
		// Print the current node
		std::string nodeText = antlr4::tree::Trees::getNodeText(tree, parser);
		outstream << indent;

		if (last) {
			outstream << "|__";  // Indicate this is the last child
		}
		else {
			outstream << "|--";  // Indicate this is not the last child
		}

		outstream << nodeText << '\n';

		// Prepare the indentation for children
		std::string newIndent = indent + (last ? "    " : "|   ");

		// Recursively print children of this node
		for (size_t i = 0; i < tree->children.size(); i++) {
			printAST(outstream,parser,tree->children[i], newIndent, i == tree->children.size() - 1);
		}
	}


	USL_Compiler::USL_Compiler(int argc, char** argv) : compilerArguments(argc, argv)
{
		#pragma warning (push)
#pragma warning (disable: 4365)
		const int numWorkers = static_cast< int>(compilerArguments.GetSourceFiles().size()) - (1);
#pragma warning (pop)
	std::vector<std::thread> Workers;
	for (int i = 0; i < numWorkers; ++i) {
		Workers.emplace_back(std::move(std::thread(&USL_Compiler::Worker, this)));
	}
	symbolTable = std::move(SymbolTable(Workers));
	this->WorkerThreads= std::move(Workers);
}

const USL_Compiler::CompilerResults USL::FRONTEND::USL_Compiler::Compile()
{
	StartCompiler.store(true);
	Worker();
	//std::cout << ComStream.str();
	return CompilerResults();
}

bool USL_Compiler::WriteOutput()
{
	return false;
}
USL_Compiler::~USL_Compiler()
{
}
void USL_Compiler::Worker()
{
	static std::barrier syncpoint(static_cast<long long>(compilerArguments.GetSourceFiles().size()));
	while (!StartCompiler.load()) {
		std::this_thread::yield();
	}
	syncpoint.arrive_and_wait();
	auto thread_id = std::this_thread::get_id();
	auto& inputFile = compilerArguments.GetSourceFiles()[SafeCounter.fetch_add(1,std::memory_order::acquire)];
	std::ifstream fileStream(inputFile, std::ios::in);
	if (!fileStream.is_open()) {
		std::cerr << "Failed to open source file: " << inputFile << std::endl;
		FailiureDetected.store(true);
		syncpoint.arrive_and_drop();
		return;
	}

	syncpoint.arrive_and_wait();

	antlr4::ANTLRInputStream input(fileStream);
	USLLexer lexer(&input);
	
	
	antlr4::CommonTokenStream tokens(&lexer);
	tokens.fill();
	syncpoint.arrive_and_wait();
	SafeCounter.fetch_sub(1, std::memory_order::release);
	syncpoint.arrive_and_wait();
	std::stringstream localStream;
	localStream << "Tokens for file: " << inputFile << std::endl;



	for (auto token : tokens.getTokens()) {
		localStream << token->toString() << std::endl;
	}
	{
		std::lock_guard<std::mutex> lock(ComStreamMutex);
		ComStream << "\n\n" << localStream.str();
		
	}
	syncpoint.arrive_and_wait();
	if (IsMainThread()) {
		std::cout << ComStream.str()<<std::endl;
		ComStream.str(std::string());
	}
	syncpoint.arrive_and_wait();
	USLParser parser(&tokens);
	parser.removeErrorListeners();
	USL_ErrorListener errorListener;
	parser.addErrorListener(&errorListener);

	syncpoint.arrive_and_wait();
	antlr4::tree::ParseTree* tree = parser.program();
	syncpoint.arrive_and_wait();
	localStream.str(std::string());
	if (errorListener.GetSyntaxErrors().size() > 0) {
		localStream << "Syntax Errors in file: " << inputFile << std::endl;
		for (const auto& error : errorListener.GetSyntaxErrors()) {
			localStream << error.ToString() << std::endl;
		}
		{
			std::lock_guard<std::mutex> lock(ComStreamMutex);
			ComStream << "\n\n" << localStream.str();
		}
		FailiureDetected.store(true);
		syncpoint.arrive_and_drop();

		return;
	}
	syncpoint.arrive_and_wait();
	if(IsMainThread()) {
		std::cout << ComStream.str() << std::endl;
		ComStream.str(std::string());

	}
	syncpoint.arrive_and_wait();
	localStream.str(std::string());
	localStream << "Parse Tree for file: " << inputFile << std::endl;
	printAST(localStream, &parser, tree);
	{
		std::lock_guard<std::mutex> lock(ComStreamMutex);
		ComStream << "\n\n" << localStream.str();

	}
	syncpoint.arrive_and_wait();
	if (IsMainThread()) {
		std::cout << ComStream.str() << std::endl;
		ComStream.str(std::string());

	}
}
}
