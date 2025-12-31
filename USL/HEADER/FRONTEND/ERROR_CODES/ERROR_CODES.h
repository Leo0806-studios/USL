#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <exception>
#include <string>
#include <sstream>
#else
import <sstream>;
import <string>;
import <exception>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {
	
	class FatalError :public std::exception {
	public:
		enum class FailiurePhase {
			Phase1,
			Phase2,
			Phase3

		};
	private:
		FailiurePhase phase;
		std::string message;
		int lineInfo = 0;
		const char* fileInfo = nullptr;
		const char* functionInfo = nullptr;
		 std::string errorstr;
	public:
		FatalError(FailiurePhase phase, std::string msg,int line,const char* file, const char* func) :phase(phase), message(std::move(msg)),lineInfo(line),fileInfo(file), functionInfo(func) {
			std::stringstream errorstream;
			errorstream << "Fatal Error in phase ";
			switch (phase) {
				case FailiurePhase::Phase1:
					errorstream << "1";
					break;
				case FailiurePhase::Phase2:
					errorstream << "2";
					break;
				case FailiurePhase::Phase3:
					errorstream << "3";
					break;
			}
			errorstream << " : " << message
				<< "\n In file: " << fileInfo
				<< "\n In function: " << functionInfo
				<< "\n At line: " << lineInfo << "\n";
			this->errorstr = std::move(errorstream.str());
		}
		[[nodiscard]] const char* what() const noexcept override {
	
			return errorstr.c_str();
		}
		[[nodiscard]] FailiurePhase GetFailiurePhase()const noexcept {
			return phase;
		}

	 };
	enum class ErrorTypes :char {
		Internal ='I',
		SymbolResolve='R',
		StaticAnalysis='A',
		Generic='C'
	};
	enum class SeverityLevels :char {
		Info = 'I',
		Warning = 'W',
		Error = 'E',
		Critical = 'C'
	};

	enum class InternalErrors :unsigned int {
		FailedToInsertSymbol ,
		FailedToInsertScope ,
		FailedToExitScope,
		FailedToEnterScope ,
		unknownInternalError ,
	};
	enum class SymbolResolveErrors :unsigned int {
		CouldNotResolveSymbol = 0,
	};
	enum class StaticAnalysisErrors :unsigned int {
		divisionByZero = 0,
		nullDereference = 1,
		accessMovedFromObject = 2,

	};
	enum class error :unsigned int {
		DuplicateSymbolDeclaration = 0,
	};
	enum class WarningCodes :unsigned int {
		PossibleNullDereference = 0,
		UnusedVariable = 1,
	};
}