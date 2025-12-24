#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <exception>
#include <string>
#include <utility>
#else
import <utility>;
import <string>;
import <exception>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
class NotMainThreadException:public std::exception {
	std::string msg_;
public:
	NotMainThreadException(std::string msg) :msg_(std::move(msg)) {}
	[[nodiscard]] const char* what() const noexcept override {
		return msg_.c_str();
	}
};
void ThrowIfNotMainThread();
bool IsMainThread();