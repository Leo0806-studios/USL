#pragma once
#ifndef PRINT_HELP_H
#define PRINT_HELP_H
import std;
namespace USL_COMPILER {
	class PrintHelp {
	public:
		static void PrintHelp_General() {
			const char* helpText =
				R"(
Welcome to the Compiler for USL (Uprise Scripting Language).
this is the help section.
usage:	usl.exe [options]
possible options:
		-h, --help		
			Print this help message

		-v, --version
			Print the version of the compiler

		-if [count] integer
			specifies the amount of input files to the compiler
			the argument immideatly after that is the amount of files
			the next [count] arguments are the input files

		-ip [count] integer
			specifies the amount of input paths to the compiler
			the argument immideatly after that is the amount of paths
			the next [count] arguments are the input paths
		-of [multiple] boolean
			specifies if the compiler should output multiple files
			true by default
			output files are named after the input files with a .USL_OBJ extension (e.g. input.usl -> input.usl_obj)
		-op [path] string
			specifies the output path for the compiled files
			if not specified, the output path is the current working directory
			if the output path does not exist, it will be created
			if the output path is not a directory, the compiler will fail
		-dmpSymbolTable [fileName] string
			specifies if the compiler should dump the symbol table to a file
			if the argument is not specified the name will be "sym_dmp.txt"
			if the file already exists, it will be overwritten
		-dmpAST [fileName] string
			specifies if the compiler should dump the AST to a file
			if the argument is not specified the name will be "ast_dmp.txt"
			if the file already exists, it will be overwritten
		-dmpIR 
			specifies if the compiler should dump the IR to a file
			the name of the file will be the name of the input file with a .ir extension (e.g. input.usl -> input.usl.ir)
		-freestanding 
			specifies if the compiler should compile the code in freestanding mode
			in this mode, the compiler will not link against the standard library
			and not use any os specific optimisations 
			by default, the compiler will compile the code in hosted mode
		-unsafe
			allows the use of unsafe features like unchecked casts and manual memory management
		-preDefMacros [count] integer
			specifies the amount of predefined macros to the compiler
			the argument immideatly after that is the amount of macros
			the next [count] arguments are the macros in the format "name=value"
			if value is not specified, the macro will be defined with an empty value
		-enablePreprocessorLoops [boolean] boolean
			enables or disables the use of special loop statements for the preprocessor (in macros)
			by default, this is disabled
		-enablePreprocessorIfs [boolean] boolean
			enables or disables the use of special if statements for the preprocessor (in macros)
			by default, this is disabled;
		-warnLvl [level] integer
			specifies the warning level of the compiler
			defaults to 3 out of 7
		-warnFail [boolean] boolean
			stops the compilation if a warning is encountered.
			by default, this is false
		-showDetailedErrors [boolean] boolean
			shows detailed errors in the compiler output
			this for example contains the first token that failed to parse ( might be the closest to the error)
			also shows what type of toke the first failed toke was excpected to be and what the few tokens before the error were
				)";
			std::cout << helpText;
		}
	};
}
#endif