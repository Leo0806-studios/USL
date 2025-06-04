#pragma once
#ifndef PRASER_H
#define PRASER_H
#include <HEADER/COMPILER/COMMAND_LINE/PARSSED_ARGS/PARSED_ARGS.h>
namespace USL_COMPILER{
	class CmdArgsParser {
	public:
		static  const  ParsedArgs ParseCmd(int argc, char* argv[]);

	};
}
#endif // !PRASER_H

