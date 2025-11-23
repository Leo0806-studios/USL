#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)
#include <unordered_map>;
#include <memory>
#include <atomic>
#include "HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#include "HEADER/FRONTEND/SYMBOL/SYMBOL.h"
#else
import <memory>;
import <unordered_map>;
import <atomic>;
import <HEADER/FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
import <HEADER/FRONTEND/SYMBOL/SYMBOL.h>;
#endif //  __clang__ || __INTELLISENSE__

import std;
namespace USL::FRONTEND {

	class SymbolTable {


	};
}