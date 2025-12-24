#include "HEADER/utilitys.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include	<thread>
#else
import <thread>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
const std::thread::id mainThreadId = std::this_thread::get_id();

void ThrowIfNotMainThread()
{
	if (std::this_thread::get_id() != mainThreadId) {
		throw NotMainThreadException("This function can only be called from the main thread");
	}
}

bool IsMainThread()
{
	return std::this_thread::get_id() == mainThreadId;
}
