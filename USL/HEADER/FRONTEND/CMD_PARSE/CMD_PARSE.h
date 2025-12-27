#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <vector>
#include <string>
#include <filesystem>
#include <unordered_map>
#else
import <vector>;
import <string>;
import <filesystem>;
import <unordered_map>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace USL::FRONTEND {
	class Arguments {
	public:
		enum class CompilerDebugOptions : unsigned char {
printToken,
printParseTree,
printSymbolTable,
printInheritedTypes,
printUBAnalysis,
printAutoGenInfo,
printOverloadResInfo,
printOptimisationDecisions,
timeCompilationPhases
		};
	private:
		std::vector<std::filesystem::path> sourceFiles;
		std::filesystem::path outputFile;
		std::unordered_map<std::string,bool>compilerDebugOptions;
		std::unordered_map<CompilerDebugOptions, std::string> compilerDebugOptionstranslations = {
		{CompilerDebugOptions::printToken,"pt"},
		{ CompilerDebugOptions::printParseTree,"ptr" },
		{ CompilerDebugOptions::printSymbolTable,"pst" },
		{ CompilerDebugOptions::printInheritedTypes,"pip" },
		{ CompilerDebugOptions::printUBAnalysis,"pub" },
		{ CompilerDebugOptions::printAutoGenInfo,"pag" },
		{ CompilerDebugOptions::printOverloadResInfo,"poc" },
		{ CompilerDebugOptions::printOptimisationDecisions,"pOc" },
		{ CompilerDebugOptions::timeCompilationPhases,"tc" }
		};
		int maxThreads = 4;
		unsigned char optimisationLevel = 0;
		unsigned char analysisLevel = 3;
		unsigned char warningLevel = 3;
		bool warningsAsErrors = false;
		bool enableExceptions = true;
		public:			
			/// <summary>
			/// parses all command line arguments and stores them in the class members
			/// will exit the program if help is requested or if invalid arguments are given
			/// </summary>
			/// <param name="argc">The argc.</param>
			/// <param name="argv">The argv.</param>
			/// <exception cref="MainThreadException">if not called on the main thread</exception>
			[[nodiscard]] Arguments(int argc, char** argv);
			[[nodiscard]] const std::vector<std::filesystem::path>& GetSourceFiles() const noexcept { return sourceFiles; }
			[[nodiscard]] const std::filesystem::path& GetOutputFile() const noexcept { return outputFile; }
			[[nodiscard]] int GetMaxThreads() const noexcept { return maxThreads; }
			[[nodiscard]] unsigned char GetOptimisationLevel() const noexcept { return optimisationLevel; }
			[[nodiscard]] unsigned char GetAnalysisLevel() const noexcept { return analysisLevel; }
			[[nodiscard]] unsigned char GetWarningLevel() const noexcept { return warningLevel; }
			[[nodiscard]] bool GetWarningsAsErrors() const noexcept { return warningsAsErrors; }
			[[nodiscard]] bool GetEnableExceptions() const noexcept { return enableExceptions; }
			[[nodiscard]] bool IsDebugOptionEnabled(CompilerDebugOptions option) const noexcept;
	};
}