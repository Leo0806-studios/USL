#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)

#include <antlr4-runtime.h>
#include <iostream>
#include <string>
#include <vector>
#else
import <string>;
import <vector>;
import <iostream>;
import <antlr4-runtime.h>;

#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {
	class SyntaxError {
		public:
			size_t line;
			size_t charPositionInLine;
			std::string msg;
			SyntaxError(size_t line, size_t charPositionInLine, const std::string& msg)
				: line(line), charPositionInLine(charPositionInLine), msg(msg) {}
			std::string ToString() const {
				return "Line " + std::to_string(line) + ":" + std::to_string(charPositionInLine) + " " + msg;
			}
	};
	class USL_ErrorListener : public antlr4::BaseErrorListener {
		std::vector<SyntaxError> syntaxErrors;
		public:
		virtual void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line,
			size_t charPositionInLine, const std::string& msg, std::exception_ptr e) override {
			syntaxErrors.emplace_back(line, charPositionInLine, msg);
		}
		const std::vector<SyntaxError>& GetSyntaxErrors() const noexcept {
			return syntaxErrors;
		}
	};
}// namespace USL::FRONTEND
