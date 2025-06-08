import  std;
#include "HEADER/COMPILER/COMMAND_LINE/PARSER/PARSER.h"
#include <HEADER/COMPILER/PRINT_HELP/PRINT_HELP.h>
namespace USL_COMPILER
{
	size_t string_toInt(std::string in) {
		std::vector< char> digits;
		for (auto& chr : in) {
			if ((chr - '0') > 9 or (chr - '0') < 0) {
				
				return std::numeric_limits<size_t>::max();

			}
			digits.insert(digits.begin(), (chr - '0'));


		}
		size_t ret = 0;
		for (size_t ii = 0; ii < digits.size(); ii++) {
			size_t pow = static_cast<size_t>(std::powl(10, static_cast<long double>(ii)));
			size_t new_digit = static_cast<size_t>(digits[ii] * (pow));
			ret = static_cast<size_t>((ret)+(new_digit));
		}
		return ret;
	}


	bool isValidOPath(const std::string& pathStr) {
		std::filesystem::path path(pathStr);

		// Check if the path is not empty and is not just whitespace
		if (pathStr.empty() || pathStr.find_first_not_of(" \t\n\r") == std::string::npos) {
			return false;
		}

		// Check if the parent directory exists
		if (!path.has_parent_path() || !std::filesystem::exists(path.parent_path())) {
			return false;
		}

		// Optionally, check if the parent directory is writable (platform-specific)
		// For most cases, just checking existence is enough

		return true;
	}
	const ParsedArgs USL_COMPILER::CmdArgsParser::ParseCmd(int argc, char* argv[])
	{
		if(argc < 2)
		{
			std::cerr << "Error: No command line arguments provided." << std::endl;
			exit(-1);
		}
		std::vector<std::string> args;
		for(int i = 0; i < argc; ++i)
		{
			if(argv[i] != nullptr)
			{
				args.emplace_back((argv[i]));
			}

		}
		auto length = args.size();
		std::filesystem::path DefaultOutputPath = argv[0];

		ParsedArgs FullRet{.OutputPath=DefaultOutputPath.parent_path()};
		for(size_t i =0;i<length;i++)
		{
			size_t ICopy = i;

			//current Argin loop (replacer for the range for loop var)
			auto& arg = args[i];
			if (arg == "-help" || arg == "-h") {
				PrintHelp::PrintHelp_General();
				ParsedArgs ret = { .IsHelp = true };
				exit(-1);


			}
			else if (arg == "-V" || arg == "-version") {
				std::cout << "Compiler version: \nV0.0.01\n";
				ParsedArgs ret = { .IsVersion = true };
				return ret;
			}
			else if (arg == "-if") {
				std::string  intputFileCountString = args[i + 1];
				size_t inputFileCount = string_toInt(intputFileCountString);
				if (inputFileCount == std::numeric_limits<size_t>::max()) {
					std::cerr << "input file count contains non digit characters\n";
					exit(-1);
				}
				if (length < inputFileCount) {
					std::cerr << "more files specified than total arguments\n";
					exit(-1);

				}
			
				size_t ii = i + 2;
				for (; ii < 1 + 2 + inputFileCount; ii++) {
					FullRet.InputFiles.emplace_back(args[ii]); 
					i++;// Increment i to skip the input file names
				}
				i++;// Skip the next argument as it is the count of input files

			}

			else if (arg == "-ip") {
				std::string  intputFilePathCountString = args[i + 1];
				size_t inputFilePathCount = string_toInt(intputFilePathCountString);
				if (inputFilePathCount == std::numeric_limits<size_t>::max()) {
					std::cerr << "input Path count contains non digit characters\n";
					exit(-1);
				}
				if (length < inputFilePathCount) {
					std::cerr << "more Paths specified than total arguments\n";
					exit(-1);

				}

				size_t ii = i + 2;
				for (; ii < 1 + 2 + inputFilePathCount; ii++) {
					FullRet.InputPaths.emplace_back(args[ii]);
					
					i++;// Increment i to skip the input path names
				}
				i++;// Skip the next argument as it is the count of input paths
			}
			else if (arg == "-preDefMacros") {
				std::string  PreDefinedMacrosCountString = args[i + 1];
				size_t PreDefinedMacrosCount = string_toInt(PreDefinedMacrosCountString);
				if (PreDefinedMacrosCount == std::numeric_limits<size_t>::max()) {
					std::cerr << "Pre Defined Macros  count contains non digit characters\n";
					exit(-1);
				}
				if (length < PreDefinedMacrosCount) {
					std::cerr << "more PreDefinedMacros specified than total arguments\n";
					exit(-1);

				}
				size_t ii = i + 2;
				size_t ll = ICopy + 2 + PreDefinedMacrosCount;
				for (; ii < ll; ii++) {
					std::string Line =  args[ii];
		

					auto Name = Line.substr(0, Line.find('='));
					auto Value = Line.substr(Line.find('=') + 1, Line.length());
					if (Name.empty() || Value.empty()) {
						std::cerr << "Pre Defined Macro name or value is empty\n";
						exit(-1);
					}
					FullRet.PredefinedMacros.emplace_back(Name, Value);
					i++;// Increment i to skip the input path names
				}
				i++;// Skip the next argument as it is the count of input paths

			}
			else if (arg == "-op") {
				FullRet.OutputPath = args[i + 1];
				i++; // Skip the next argument as it is the output path
			}
			else if (arg == "-dmpSymbolTable") {
				FullRet.DumpSymbols = true;
			}
			else if (arg == "-dmpAST") {
				FullRet.DumpASTT = true;
			}
			else if (arg == "-dmpIR") {
				FullRet.DumpIR = true;
			}
			else if (arg == "-freestanding") {
				FullRet.Freestanding = true;
			}
			else if (arg == "-unsafe") {
				FullRet.Unsafe = true;
			}
			else if (arg == "-warnLvl") {
				std::string warnlvlcountstring = args[i + 1];
				size_t warnlvlcount = string_toInt(warnlvlcountstring);
				if (warnlvlcount == std::numeric_limits<size_t>::max()) {
					std::cerr << "Warning Level count contains non digit characters\n";
					exit(-1);
				}
				if(warnlvlcount>7 )
				{
					std::cerr << "Warning Level count must be between 0 and 7\n";
					exit(-1);
				}
				FullRet.WarningLevel = static_cast<unsigned char>(warnlvlcount);
				
			}
			else if (arg == "-warnFail") {
				FullRet.TreatWarningsAsErrors = true;
			}
			else if (arg == "-enablePreprocessorIfs") {
				FullRet.EnablePreprocessorIfs = true;
			}
			else if (arg == "-enablePreprocessorLoops") {
				FullRet.EnablePreprocessorLoops = true;
			}
		}

		return FullRet;
	}
}
