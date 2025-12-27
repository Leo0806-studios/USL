#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <sstream>
#include <mutex>
#include <iostream>
#include <string>
#include "COMPILER_HELPERS.h"
#include"FRONTEND/USL/USL.h"
#include "utilitys.h"
#else
#include "utilitys.h"
#include "COMPILER_HELPERS.h"
import <sstream>;
import <string>;
import <iostream>;
//import <utilitys>;
import <mutex>;
//import <FRONTEND/USL/COMPILER_HELPERS/COMPILER_HELPERS.h>;
#include"FRONTEND/USL/USL.h"
//import <FRONTEND/USL/USL.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND
{
void CompilerHelpers::ApppendComStream(USL_Compiler& _this, const std::stringstream& localStream)
{
	const 	std::lock_guard<std::mutex> lock(_this.ComStreamMutex);
	_this.ComStream << "\n\n" << localStream.str();
}

void CompilerHelpers::PrintComStream(USL_Compiler& _this)
{
	if (IsMainThread()) {
		std::cout << _this.ComStream.str() << '\n' << std::flush;
		_this.ComStream.str(std::string());
	}
}



}// namespace USL::FRONTEND
