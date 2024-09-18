#pragma once
#ifndef GLOBAL_STORAGE
#define GLOBAL_STORAGE
class USLLexer;
namespace antlr4{
	class CommonTokenStream;

}
class USLParser;
namespace GLOBAL {
	class SymbolTable;
}
class STORARE {
public:

	static USLLexer* lexer;
	 static antlr4::CommonTokenStream* tokens;
	 static USLParser* parser;
	static GLOBAL::SymbolTable* symbol_table;
};
#endif // !GLOBAL_STORAGE
