#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <type_traits>
#include <utility>
#else
import <type_traits>;
import <utility>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

//macro to create simplistic Get and Set functions for variables
#define GetSet(VarName)\
void Set_##VarName(decltype(VarName) val) noexcept(std::is_nothrow_assignable_v<decltype(VarName),decltype(VarName)>){\
this->VarName=std::move(val);\
}\
[[nodiscard]]auto  Get_ ## VarName()const noexcept(std::is_nothrow_copy_constructible_v<decltype(VarName)>){\
return this->VarName;\
}

