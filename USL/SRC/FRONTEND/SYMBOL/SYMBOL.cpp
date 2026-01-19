//################################################################
//						SYMBOL.cpp
//	Author: Leo0806
//	Date created: 12.01.2026
//	Last modified:12.01.2026
//	Purpose:
//################################################################
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <string>
#include "FRONTEND/SYMBOL/SYMBOL.h"
#include <sstream>
#include <variant>
#else
import <sstream>;
import <string>;
import <variant>;
import <FRONTEND/SYMBOL/SYMBOL.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {

std::string VariableSymbol::ToString() const
{
	std::stringstream ret;

	ret << "Variable Symbol: "
		<< "Decorated Name: " << decoratedName.to_string()
		<< " Type: " << type.lock()->ToString()
		<< " Variable aligment: " << aligment
		<< " Const: " << isConst
		<< " Volatile: " << isVolatile
		<< " Unsafe: " << isUnsafe
		<< " Declarator initialized: " << DeclareInitialized
		<< " Function Parameter: " << functionParameter;
	return ret.str();
}

std::string FunctionSymbol::ToString() const
{
	std::stringstream ret;
	ret << "Function Symbol: "
		<< " Return Type: " << returnType.lock()->ToString()
		<< " Parameters: ";
	for (const auto& parameter : parameterList) {
		ret << " Paramedter: " << parameter.lock()->ToString();
	}
	return ret.str();
}

std::string EnumConstant::ToString() const
{
	std::stringstream ret;
	ret << "Enum Constant: "
		<< " Type: " << type.lock()->ToString();
	std::visit([&](auto&& arg) {
		ret<<" Value: " << arg;
			   }, value);



	return ret.str();
}

std::string EnumSymbol::ToString() const
{
	std::stringstream ret;
	ret << "Enum Symbol: "
		<< " Enum Type: " << enumtype.lock()->ToString();
	return ret.str();
}

std::string TypeSymbol::ToString() const
{
	std::stringstream ret;
	ret << "Type Symbol: "
		<< " Aligment: " << aligment
		<< " Size: " << size;
	return ret.str();
} 

std::string AttribueSymbol::ToString() const
{
	return std::string();
}

}//namespace USL::FRONTEND