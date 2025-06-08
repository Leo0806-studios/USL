#pragma once
#ifndef PARSING_ERROR_LISTENER_H
#define PARSING_ERROR_LISTENER_H
#include <antlr4-runtime.h>
import std;
namespace USL_COMPILER {
	class ParsingErrorListener : public antlr4::BaseErrorListener {
		public:
			std::atomic_bool hasError{false};
		void syntaxError(antlr4::Recognizer *recognizer,antlr4::Token *offendingSymbol,size_t line,size_t charPositionInLine,const std::string &msg,std::exception_ptr e) override;
		bool hasErrorOccurred() const noexcept;
		 ~ParsingErrorListener() = default;
		 ParsingErrorListener() = default;
		 ParsingErrorListener(const ParsingErrorListener& other);
		 ParsingErrorListener& operator=(const ParsingErrorListener& other);

	};
}
#endif // !PARSING_ERROR_LISTENER_H
