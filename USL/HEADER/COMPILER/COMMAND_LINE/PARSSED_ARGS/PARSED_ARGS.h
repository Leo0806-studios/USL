#pragma once
#ifndef PARSED_ARGS_H
#define PARSED_ARGS_H
import std;
namespace USL_COMPILER {
	class ParsedArgs {
	public:
		bool IsHelp = false;//
		bool IsVersion = false;//
		bool MultipleOfiles = true;
		bool DumpSymbols = false;
		bool DumpASTT = false;
		bool DumpIR = false;
		bool Freestanding = false;
		bool Unsafe=false;
		bool EnablePreprocessorLoops = false;
		bool EnablePreprocessorIfs = false;
		unsigned char WarningLevel = 3;
		bool TreatWarningsAsErrors = false;
		bool ShowDetailedErrors = false;
		std::vector<std::string> InputFiles{};//
		std::vector<std::filesystem::path> InputPaths{};//
		std::filesystem::path OutputPath{};//
		struct MacroPair {
			std::string Name{};
			std::string Value{};
		};
		std::vector<USL_COMPILER::ParsedArgs::MacroPair> PredefinedMacros{};//



	};
}
#endif