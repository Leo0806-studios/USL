#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <sstream>
#else
import <sstream>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {
	class USL_Compiler;	
	/// <summary>
	/// helpers for the usl compiler.
	/// all function are static and take a pointer to the compiler as first argument
	/// they are specific to the compilation stages and using them out of order may lead to undefined behaviour
	/// </summary>
	class CompilerHelpers {
	public:		
		/// <summary>
		/// threadsafe appends the local stream to the comstream of the compiler
		/// </summary>
		/// <param name="_this">The this.</param>
		/// <param name="localStream">The local stream.</param>
		static void ApppendComStream(USL_Compiler& _this, const std::stringstream& localStream);		
		/// <summary>
		/// threadsafe prints the comstream to the console.
		/// clears teh comstream afterwards..
		/// </summary>
		/// <param name="_this">The this.</param>
		static void PrintComStream(USL_Compiler& _this);
	};
}// namespace USL::FRONTEND
