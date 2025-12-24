// USL_COMPILER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include "USL.h"
#include <iostream>
#else
import <iostream>;
import <USL.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)



int main(int argc, char** argv)
{
	std::unordered_map<std::string, bool>t;
	std::cout << t["wwww"] << '\n';
	USL::FRONTEND::USL_Compiler compiler(argc, argv);
	const USL::FRONTEND::USL_Compiler::CompilerResults results = compiler.Compile();
	if (!results.success) {
		std::cerr << "Compilation failed during phase: ";
		switch (results.failedPhase) {
		case USL::FRONTEND::USL_Compiler::CompilerResults::Phase::Parsing:
			std::cerr << "Parsing" << std::endl;
			break;
		case USL::FRONTEND::USL_Compiler::CompilerResults::Phase::SemanticAnalysis:
			std::cerr << "Semantic Analysis" << std::endl;
			break;
		case USL::FRONTEND::USL_Compiler::CompilerResults::Phase::StaticAnalysis:
			std::cerr << "Static Analysis" << std::endl;
			break;
		case USL::FRONTEND::USL_Compiler::CompilerResults::Phase::CodeGen:
			std::cerr << "Code Generation" << std::endl;
			break;
		default:
			std::cerr << "Unknown Phase" << std::endl;
			break;
		}
		for (const auto& error : results.errors) {
			std::cerr << "Error: " << error << std::endl;
		}
		return 1;
	}
	if (!compiler.WriteOutput()) {
		std::cerr << "Failed to write output file." << std::endl;
		return 1;
	}
	std::cout << "Compilation succeeded." << std::endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
