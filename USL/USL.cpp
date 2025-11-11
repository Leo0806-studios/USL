// USL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <antlr4-runtime.h>
#include <USLLexer.h>
#include <USLParser.h>

#include "HEADER/COMPILER/COMMAND_LINE/PARSER/PARSER.h"
#include "HEADER/COMPILER/FRONTEND/ERROR_TABLE/ERROR_TABLE.h"
#include "HEADER/COMPILER/FRONTEND/PARSING_ERROR_LISTENER/PARSING_ERROR_LISTENER.h"
#include "HEADER/COMPILER/FRONTEND/SEMANTIC_ANALYZER/SEMANTIC_ANALYZER.h"
#include "HEADER/COMPILER/FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#include "HEADER/COMPILER/FRONTEND/SYMBOL_RESOLVER/SYMBOL_RESOLVER.h"
#include "HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include <COMPILER/PRINT_HELP/PRINT_HELP.h>
#include <USLBaseListener.h>
#include <USLBaseVisitor.h>
#include "HEADER/COMPILER/FRONTEND/METADATA_GENERATOR/METADATA_GENERATOR.h"
#include "HEADER/COMPILER/FRONTEND/IR_GENERATOR/IR_GENERATOR.h"

import std;

void printAST(antlr4::tree::ParseTree* tree, antlr4::Parser* parser, std::stringstream& ret, const std::string& indent = "", bool last = true) {
	// Print the current node
	std::string nodeText = antlr4::tree::Trees::getNodeText(tree, parser);
	ret << indent;

	if (last) {
		ret << "|__";  // Indicate this is the last child
	}
	else {
		ret << "|--";  // Indicate this is not the last child
	}

	ret << nodeText << std::endl;

	// Prepare the indentation for children
	std::string newIndent = indent + (last ? "    " : "|   ");

	// Recursively print children of this node
	for (size_t i = 0; i < tree->children.size(); i++) {
		printAST(tree->children[i], parser, ret, newIndent, i == tree->children.size() - 1);
	}

}
int main(int argc, char** argv)
{
	std::ios::sync_with_stdio(false);





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
