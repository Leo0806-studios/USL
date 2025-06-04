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
		ParsedArgs FullRet{};
		for(size_t i =0;i<length;i++)
		{
			auto& arg = args[i];
			if (arg == "-help" || arg == "-h") {
				PrintHelp::PrintHelp_General();
				ParsedArgs ret = { .IsHelp = true };
				return ret;

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


				for (size_t ii = i + 2; ii < 1 + 2 + inputFileCount; ii++) {
					FullRet.InputFiles.emplace_back(args[ii]); 
					i++;
				}
			
			}
		}

		return ParsedArgs();
	}
}
