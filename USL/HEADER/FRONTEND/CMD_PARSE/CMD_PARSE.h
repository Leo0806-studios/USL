//################################################################
//						CMD_PARSE.h
//	Author: Leo0806
//	Date created: 22.12.2025
//	Last modified: 08.01.2026
//	Purpose:Header that defines the inerface for comand line Argument parsing and retriving of parsed arguments
//################################################################
#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <filesystem>
#include <string>
#include <unordered_map>
#include <vector>
#else
import <filesystem>;
import <string>;
import <unordered_map>;
import <vector>;
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
timeCompilationPhases,
printFullLogs
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
		{ CompilerDebugOptions::timeCompilationPhases,"tc" },
		{  CompilerDebugOptions::printFullLogs,"pfl"  }
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
}//namespace USL::FRONTEND