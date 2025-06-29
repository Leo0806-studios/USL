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
	auto a = USL_COMPILER::CmdArgsParser::ParseCmd(argc, argv);

	std::ifstream stream(a.InputFiles[0]);



	antlr4::ANTLRInputStream input(stream);
	USLLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	USLParser parser(&tokens);
	USL_COMPILER::ParsingErrorListener errorListener;
	parser.removeErrorListeners(); // Remove default error listeners
	parser.addErrorListener(&errorListener); // Add custom error listener
	auto tree = parser.program();
	std::cout << "\n\n\n\n";
	if (USL_COMPILER::ErrorTable::hasSyntacticError()) {
		std::cout << USL_COMPILER::ErrorTable::AllErrorsToString() << '\n';
		exit(-1);
	}
	std::stringstream treestream{};
	printAST(tree, &parser, treestream);
	std::cout << treestream.str() << '\n';
	std::cout << "\n\n\n\n";


	std::cout << tree->toStringTree(&parser) << std::endl;
	if (errorListener.hasErrorOccurred()) {
		exit(-1);
	}
	antlr4::tree::ParseTreeWalker walker;
	USL_COMPILER::SymbolGatherer gatherer;
	walker.walk(&gatherer, tree);
	USL_COMPILER::SymbolResolver resolver;
	walker.walk(&resolver, tree);
	std::cout << "\n\n\n\nSymbol Gathered Successfully" << std::endl;
	std::cout << USL_COMPILER::SymbolTable::SymbolTableToString() << std::endl;
	USL_COMPILER::SemanticAnalyzer semantinc_analyzer;
	USL_COMPILER::StatementReturn expr_type{};
	std::any semantic_succses = semantinc_analyzer.visit(tree);
	expr_type = std::any_cast<USL_COMPILER::StatementReturn>(semantic_succses);


	if (expr_type.succses) {
		std::cout << "\n\n\n";
	}
	if (USL_COMPILER::ErrorTable::hasSemanticError()) {
		std::cout << USL_COMPILER::ErrorTable::AllErrorsToString() << '\n';
		exit(-1);
	}
	USL_COMPILER::MetadataGenerator MetadataGen;
	MetadataGen.visit(tree);
	USL_COMPILER::IrBuilder irGen;
	irGen.visit(tree);
	
	auto symfile_path = std::filesystem::path(argv[0]).parent_path().string();
	symfile_path += "\\sym_dmp.txt";
	if (std::filesystem::exists(symfile_path)) {
		std::filesystem::remove(symfile_path);
	}
	std::fstream symfile;
	symfile.open(symfile_path, std::ios::out);

	if (!symfile.is_open()) {
		std::cerr << "Failed to open symbol dump file: " << symfile_path << std::endl;
		return -1;
	}
	symfile << USL_COMPILER::SymbolTable::SymbolTableToString();
	symfile.flush();
	symfile.close();



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
