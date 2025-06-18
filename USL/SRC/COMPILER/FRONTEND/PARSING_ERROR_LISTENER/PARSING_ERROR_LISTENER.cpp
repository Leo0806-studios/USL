#include "HEADER/COMPILER/FRONTEND/PARSING_ERROR_LISTENER/PARSING_ERROR_LISTENER.h"
#include <HEADER/COMPILER/FRONTEND/ERROR_TABLE/ERROR_TABLE.h>
namespace USL_COMPILER {
	void ParsingErrorListener::syntaxError(antlr4::Recognizer* recognizer,
		antlr4::Token* offendingSymbol,
		size_t line,
		size_t charPositionInLine,
		const std::string& msg,
		std::exception_ptr e) 
	{
		ErrorPtr errorPtr = std::make_shared<SyntacticError>(msg, line, charPositionInLine);
		ErrorTable::AddError(errorPtr,ErrorType::SYNTAX_ERROR);
	}
	bool ParsingErrorListener::hasErrorOccurred() const noexcept
	{
		return hasError.load();
	}
	 ParsingErrorListener::ParsingErrorListener(const ParsingErrorListener& other) :hasError(other.hasError.load()) {}
	 ParsingErrorListener& ParsingErrorListener::operator=(const ParsingErrorListener& other)
	 {
		 if (this != &other) {
			 hasError.store(other.hasError.load());
		 }
		 return *this;
	 }
}