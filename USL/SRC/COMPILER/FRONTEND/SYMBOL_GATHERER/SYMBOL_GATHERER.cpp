#include "HEADER/COMPILER/FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
import std;
namespace USL_COMPILER
{
	static  std::stack<ScopePtr> scopeStrack{};





	static void addbyte(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("byte"));
	}
	static void addshort(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("short"));
	}
	static void addint(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("int"));
	}
	static void addlong(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("long"));
	}
	static void addfloat(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("float"));
	}
	static void adddouble(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("double"));
	}
	static void addhash(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("hash"));
	}
	static void addstring(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("string"));
	}
	static void addchar(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("char"));
	}
	static void addvoid(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("void"));
	}
	static void addnull(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("null"));
	}
	static void addbool(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("bool"));
	}
	static void addubyte(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("ubyte"));
	}
	static void addushort(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("ushort"));
	}
	static void adduint(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("uint"));
	}
	static void addulong(std::shared_ptr<NamespaceSymbol> globalScope) {
		globalScope->addSymbol(std::make_shared<TypeSymbol>("ulong"));
	}
	static void AddPrimitivesToGlobalnamespace()
	{
		std::shared_ptr<NamespaceSymbol> globalScope = std::static_pointer_cast<NamespaceSymbol>(SymbolTable::GetRootSymbol());
		if (globalScope == nullptr)
			return;

		addbyte(globalScope);
		addshort(globalScope);
		addint(globalScope);
		addlong(globalScope);
		addfloat(globalScope);
		adddouble(globalScope);
		addhash(globalScope);
		addstring(globalScope);
		addchar(globalScope);
		addvoid(globalScope);
		addnull(globalScope);
		addbool(globalScope);
		addubyte(globalScope);
		addushort(globalScope);
		adduint(globalScope);
		addulong(globalScope);
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

	void USL_COMPILER::SymbolGatherer::enterClass_delcaration(USLParser::Class_delcarationContext* param) {
		std::cout << "entering class " << param->ID()->toString() << '\n';
		std::shared_ptr<TypeSymbol> cls = std::make_shared<TypeSymbol>(param->ID()->toString());
		cls->SetParent(SymbolTable::GetCurrentScope()->getOwnSymbol());
		cls->AddScope(std::make_shared<Scope>(ScopeType::ST_CLASS, cls, SymbolTable::GetCurrentScope()));
		std::static_pointer_cast<NamespaceSymbol>(SymbolTable::GetCurrentScope()->getOwnSymbol())->addSymbol(cls);
		SymbolTable::SetScope(cls->getScope());
	}

	void USL_COMPILER::SymbolGatherer::exitClass_delcaration(USLParser::Class_delcarationContext* param)
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
		SymbolTable::PushScopeStack(func->getScope());
		//SymbolTable::SetScope(func->getScope());
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
	void SymbolGatherer::enterParameter(USLParser::ParameterContext* param)
	{

	}
	void SymbolGatherer::exitParameter(USLParser::ParameterContext* param)
	{
	}
}