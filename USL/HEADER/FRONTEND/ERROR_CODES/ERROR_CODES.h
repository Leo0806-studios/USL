#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <cstdint>
#include <exception>
#include <sstream>
#include <string>
#include <utility>
#else
import <cstdint>;
import <exception>;
import <sstream>;
import <string>;
import <utility>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND { 
	
	class FatalError :public std::exception {
	public:
		enum class FailiurePhase:unsigned char {
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
		FatalError(FailiurePhase FailurePhase, std::string msg, const char* file, int line, const char* func) :phase(FailurePhase), message(std::move(msg)), lineInfo(line), fileInfo(file), functionInfo(func) {
			std::stringstream errorstream;
			errorstream << "Fatal Error in FailurePhase ";
			switch (FailurePhase) {
				using enum USL::FRONTEND::FatalError::FailiurePhase;
				case Phase1:
					errorstream << "1";
					break;
				case Phase2:
					errorstream << "2";
					break;
				case Phase3:
					errorstream << "3";
					break;
				default:
					errorstream << "-1";
					break;
			}
			errorstream << " : " << message
				<< "\n In file: " << fileInfo
				<< "\n In function: " << functionInfo
				<< "\n At line: " << lineInfo << "\n";
			this->errorstr = errorstream.str();
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

	enum class InternalErrors :std::uint16_t {
		FailedToInsertSymbol=0 ,
		FailedToInsertScope ,
		FailedToExitScope,
		FailedToEnterScope ,
		unknownInternalError =999,
	};
	enum class SymbolResolveErrors :std::uint16_t {
		CouldNotResolveSymbol = 1000,
	};
	enum class StaticAnalysisErrors :std::uint16_t {
		divisionByZero = 3000,
		nullDereference ,
		accessMovedFromObject ,

	};
	enum class error :std::uint16_t {
		DuplicateSymbolDeclaration = 5000,
	};
	enum class WarningCodes :std::uint16_t {
		PossibleNullDereference = 7000,
		UnusedVariable 
	};
}//namespace USL::FRONTEND