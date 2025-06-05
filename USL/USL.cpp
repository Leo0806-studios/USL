// USL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <antlr4-runtime.h>
#include <USLLexer.h>
#include <USLParser.h>

#include <USLBaseListener.h>
#include <USLBaseVisitor.h>
#include <COMPILER/PRINT_HELP/PRINT_HELP.h>
#include "HEADER/COMPILER/COMMAND_LINE/PARSER/PARSER.h"
import std;
int main(int argc, char** argv)
{
	std::ios::sync_with_stdio(false);
	auto a =USL_COMPILER::CmdArgsParser::ParseCmd(argc, argv);
   // std::string pth;
	//std::cin >> pth;
	int charcount = 0;
	for (char c : a.InputFiles[0]) {
		std::cout << static_cast<int>(c) << ' ';
		charcount++;
	}
	std::cout << '\n' << charcount << std::endl;
	std::ifstream stream(a.InputFiles[0]);

	std::string l = "C:\\Users\\leo08\\source\\repos\\USL\\x64\\Debug\\test.txt";
	int count = 0;
	for(char c : l) {
		std::cout << static_cast<int>(c) << ' ';
		count++;
	}
	std::cout <<'\n' << count << std::endl;
	std::cout << (l == a.InputFiles[0]) << std::endl;
   //stream.open("C:\\Users\\leo08\\source\\repos\\USL\\x64\\Debug\\test.txt");
	antlr4::ANTLRInputStream input(stream);
	USLLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	USLParser parser(&tokens);
	auto tree = parser.program();

	std::cout << tree->toStringTree(&parser) << std::endl;
 



	//std::stringstream strm;
	//strm << file.rdbuf();
	//std::string content = strm.str();
	//
	//antlr4::ANTLRInputStream input(stream);
	//USLLexer lexer(&input);
	//STORARE::lexer = &lexer;
	//antlr4::CommonTokenStream tokens(&lexer);
	//STORARE::tokens = &tokens;
	//tokens.fill();
	//for (auto token : tokens.getTokens()) {
	//    std::cout << token->toString() << std::endl;
	//}
	//USLParser prser(&tokens);
	//STORARE::parser = &prser;
	//parser = &prser;
	//antlr4::tree::ParseTree* tree = parser->program();
	//std::cout << tree->toStringTree(parser) << std::endl;
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
