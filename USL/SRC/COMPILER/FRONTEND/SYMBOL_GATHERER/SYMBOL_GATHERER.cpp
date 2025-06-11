#include "HEADER/COMPILER/FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
import std;
namespace USL_COMPILER
{
	static  std::stack<ScopePtr> scopeStrack{};
	static void AddPrimitivesToGlobalnamespace()
	{
		std::shared_ptr<NamespaceSymbol> globalScope = std::static_pointer_cast<NamespaceSymbol>(SymbolTable::GetRootSymbol());
		if (globalScope == nullptr)
			return;

		globalScope->addSymbol(std::make_shared<TypeSymbol>("byte"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("short"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("int"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("long"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("float"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("double"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("hash"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("string"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("char"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("void"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("null"));
		globalScope->addSymbol(std::make_shared<TypeSymbol>("bool"));
	}
	void SymbolGatherer::enterProgram(USLParser::ProgramContext*)
	{
		std::shared_ptr GlobalScope = std::make_shared<NamespaceSymbol>("global");
		GlobalScope->addScope(std::make_shared<Scope>(ScopeType::ST_NAMESPACE, GlobalScope, nullptr));
		SymbolTable::SetScope(GlobalScope->getScope());
		SymbolTable::AddRoot(GlobalScope);
		AddPrimitivesToGlobalnamespace();
	}

	void SymbolGatherer::exitProgram(USLParser::ProgramContext*)
	{
		(void)SymbolTable::PopScopeStack();
	}

	void USL_COMPILER::SymbolGatherer::enterNamespace_declaration(USLParser::Namespace_declarationContext* param)
	{
		std::cout << "entering namespace " << param->ID()->toString() << '\n';
		std::shared_ptr<NamespaceSymbol> ns = std::make_shared<NamespaceSymbol>(param->ID()->toString());
		ns->SetParent(SymbolTable::GetCurrentScope()->getOwnSymbol());
		ns->addScope(std::make_shared<Scope>(ScopeType::ST_NAMESPACE, ns, SymbolTable::GetCurrentScope()));
		std::static_pointer_cast<NamespaceSymbol>(SymbolTable::GetCurrentScope()->getOwnSymbol())->addSymbol(ns);
		SymbolTable::SetScope(ns->getScope());
	}

	void USL_COMPILER::SymbolGatherer::exitNamespace_declaration(USLParser::Namespace_declarationContext* param)
	{
		SymbolTable::PopScopeStack();
		(void)param;
	}

	void USL_COMPILER::SymbolGatherer::enterClass_delcaratiom(USLParser::Class_delcaratiomContext* param) {
		std::cout << "entering class " << param->ID()->toString() << '\n';
		std::shared_ptr<TypeSymbol> cls = std::make_shared<TypeSymbol>(param->ID()->toString());
		cls->SetParent(SymbolTable::GetCurrentScope()->getOwnSymbol());
		cls->AddScope(std::make_shared<Scope>(ScopeType::ST_CLASS, cls, SymbolTable::GetCurrentScope()));
		std::static_pointer_cast<NamespaceSymbol>(SymbolTable::GetCurrentScope()->getOwnSymbol())->addSymbol(cls);
		SymbolTable::SetScope(cls->getScope());
	}

	void USL_COMPILER::SymbolGatherer::exitClass_delcaratiom(USLParser::Class_delcaratiomContext* param)
	{
		SymbolTable::PopScopeStack();
		(void)param;
	}
	void SymbolGatherer::enterFunction_declaration(USLParser::Function_declarationContext* param)
	{
		std::cout << "entering function " << param->ID()->toString() << '\n';
		std::shared_ptr<FunctionSymbol> func = std::make_shared<FunctionSymbol>(param->ID()->toString());
		func->SetParent(SymbolTable::GetCurrentScope()->getOwnSymbol());
		func->AddScope(std::make_shared<Scope>(ScopeType::ST_FUNCTION, func, SymbolTable::GetCurrentScope()));
		SymbolTable::GetCurrentScope()->getOwnSymbol()->addSymbol(func);
		SymbolTable::SetScope(func->getScope());
	}
	void SymbolGatherer::exitFunction_declaration(USLParser::Function_declarationContext* param)
	{
		SymbolTable::PopScopeStack();
		std::cout << "exiting function " << param->ID()->toString() << '\n';
		(void)param;
	}

	void SymbolGatherer::enterVar_declaration(USLParser::Var_declarationContext* param)
	{
		std::cout << "entering variable declaration " << param->ID()->toString() << '\n';
		std::shared_ptr<VariableSymbol>Vars = std::make_shared<VariableSymbol>(param->ID()->toString());
		Vars->SetParent(SymbolTable::GetCurrentScope()->getOwnSymbol());
		SymbolTable::GetCurrentScope()->getOwnSymbol()->addSymbol(Vars);
	}
	void SymbolGatherer::exitVar_declaration(USLParser::Var_declarationContext* param)
	{
	}
	void SymbolGatherer::enterEnum_declaration(USLParser::Enum_declarationContext* param)
	{
	}
	void SymbolGatherer::exitEnum_declaration(USLParser::Enum_declarationContext* param)
	{
	}
}