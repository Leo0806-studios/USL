#include "HEADER/COMPILER/FRONTEND/PARSING_ERROR_LISTENER/PARSING_ERROR_LISTENER.h"
namespace USL_COMPILER {
	void ParsingErrorListener::syntaxError(antlr4::Recognizer* recognizer,
		antlr4::Token* offendingSymbol,
		size_t line,
		size_t charPositionInLine,
		const std::string& msg,
		std::exception_ptr e) 
	{
		std::cerr << "Syntax error at line " << line << ":" << charPositionInLine << " - " << msg << std::endl;
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