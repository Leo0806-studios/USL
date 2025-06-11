#include "HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
namespace USL_COMPILER {
#pragma region Static_Vars

	std::unordered_map<std::string, ScopePtr> SymbolTable::scopes{};
	std::stack<ScopePtr> SymbolTable::scopeStack{};
	ScopePtr SymbolTable::currentScope = nullptr;
	SymbolPtr SymbolTable::rootSymbol = nullptr;
	std::atomic_bool SymbolTable::is_reading{ false };
	std::atomic_bool SymbolTable::is_writing{ false };

#pragma endregion
#pragma region LocalFuncs

	std::string ScopeTypeToString(ScopeType type)
	{
		switch (type) {
		case ScopeType::ST_CLASS: {
			return "ST_CLASS";
			break;
		}
		case ScopeType::ST_FUNCTION: {
			return "ST_FUNCTION";
			break;
		}
		case ScopeType::ST_NAMESPACE: {
			return "ST_NAMESPACE";
			break;
		}
		default: {
			return "";
			break;
		}
		}
	}

	std::string SymbolTypeToString(SymbolType type)
	{
		switch (type) {
		case SymbolType::ENUM: {
			return "ENUM";
			break;
		}
		case SymbolType::FUNCTION: {
			return "FUNCTION";
			break;
		}
		case SymbolType::VARIABLE: {
			return "VARIABLE";
			break;
		}
		case SymbolType::NAMESPACE: {
			return "NAMESPACE";
			break;
		}
		case SymbolType::TYPE: {
			return "TYPE";
			break;
		}
		default: {
			return "UNKNOWN";
			break;
		}
		}
	}

	void RecursiveSymbolTableWalker(std::string intendent, const SymbolPtr& Symbol, std::string& outText) {
		switch (Symbol->SymbolType()) {
		case SymbolType::VARIABLE: {
			std::shared_ptr<VariableSymbol> varSymbol = std::static_pointer_cast<VariableSymbol>(Symbol);
			std::string varType = varSymbol->GetVariableType() ? varSymbol->GetVariableType()->Name() : "Unknown";
			outText += intendent + "Name: " + Symbol->Name() +" Type: "+varType + " SymbolKind: " + SymbolTypeToString(Symbol->SymbolType()) + "\n";

			break;
		}
		case SymbolType::FUNCTION: {
			outText += intendent + "Name: " + Symbol->Name() + " SymbolKind: " + SymbolTypeToString(Symbol->SymbolType()) + "\n";

			break;
		}
		case SymbolType::TYPE: {
			outText += intendent + "Name: " + Symbol->Name() + " SymbolKind: " + SymbolTypeToString(Symbol->SymbolType()) + "\n";

			break;
		}
		case SymbolType::ENUM: {
			outText += intendent + "Name: " + Symbol->Name() + " SymbolKind: " + SymbolTypeToString(Symbol->SymbolType()) + "\n";

			break;
		}
		case SymbolType::NAMESPACE: {
			outText += intendent + "Name: " + Symbol->Name() + " SymbolKind: " + SymbolTypeToString(Symbol->SymbolType()) + "\n";

			break;
		}
		}

		if (!Symbol->HasChildSymbols()) {

			return;
		}
		intendent += "  ";

		for (const auto& Symbols : Symbol->GetChildSymbols()) {
			RecursiveSymbolTableWalker(intendent, Symbols.second, outText);
		}

	}

#pragma endregion

#pragma region SymbolTable


	ScopePtr USL_COMPILER::SymbolTable::PushStack(ScopePtr scope)
	{
		scopeStack.push(scope);
		currentScope = scope;
		return scope;
	}

	ScopePtr USL_COMPILER::SymbolTable::PopStack()
	{
		if (scopeStack.empty()) return ScopePtr();
		ScopePtr topScope = ScopePtr(scopeStack.top());
		scopeStack.pop();
		return topScope;
	}

	SymbolPtr USL_COMPILER::SymbolTable::AddSymbolToCurrentScope(SymbolPtr symbol)
	{

		return SymbolPtr();
	}

	ScopePtr USL_COMPILER::SymbolTable::SetScope(ScopePtr Scope)
	{
		if (!Scope) { return nullptr; }

		currentScope = Scope;
		while (!scopeStack.empty()) {
			scopeStack.pop();
		}
		std::stack<ScopePtr> tempStack;
		while (Scope->getParent()) {
			tempStack.push(Scope);
			Scope = Scope->getParent();
		}
		tempStack.push(Scope); // Push the root scope (global scope) last
		while (!tempStack.empty()) {
			scopeStack.push(tempStack.top());
			tempStack.pop();
		}
		return currentScope;
	}



	SymbolPtr USL_COMPILER::SymbolTable::ResolveSymbol(const std::string& Symbol, const std::vector<std::string>& scopeResolution )
	{
		auto FindinCurrentScope = [](const std::string& Symbol, ScopePtr scope) -> SymbolPtr {
			auto scopeitter = scope->getOwnSymbol()->GetChildSymbols().find(Symbol);
			auto end = scope->getOwnSymbol()->GetChildSymbols().end();
			if (scopeitter != end) {
				return scope->getOwnSymbol()->GetChildSymbols().at(Symbol);
			}
			return nullptr;
			};
		if (scopeResolution.empty()) {
			//first check if the symbol is in the current scope
			//auto& CurrentScope = SymbolTable::currentScope;
			SymbolPtr symbolPtr = FindinCurrentScope(Symbol, currentScope);
			if (symbolPtr) {
			// Symbol found in the current scope
				return symbolPtr;
			}

			//then check if it is in one of the parrent scopes
			std::stack<ScopePtr> tempStack = scopeStack;
			ScopePtr WorkingScope = currentScope;
			while (!tempStack.empty()) {
				ScopePtr scope = tempStack.top();
				symbolPtr = FindinCurrentScope(Symbol, scope);
				if (symbolPtr) {
					// Symbol found in this scope
					return symbolPtr;
				}
				tempStack.pop();

			}

		}
		else {
			ScopePtr WorkingScope = currentScope;
			for (auto& scopedName : scopeResolution) {
				//then chekci if the scope resolution is relative
				auto& childs = WorkingScope->getOwnSymbol()->GetChildSymbols();

				auto scopeitter = childs.find(scopedName);
				auto end = WorkingScope->getOwnSymbol()->GetChildSymbols().end();
				if (scopeitter != end) {

					WorkingScope = scopeitter->second->GetScope();
				}

			}
			//now check if the symbol is in the working scope
			SymbolPtr symbolPtr = FindinCurrentScope(Symbol, WorkingScope);
			if (symbolPtr) {
				// Symbol found in the working scope
				return symbolPtr;
			}
			
			 
			 
			
			//then check if it the scope resolution is abolute 
			 WorkingScope = rootSymbol->GetScope();
			for(auto & scopedName : scopeResolution) {
				if (WorkingScope->getOwnSymbol()->GetChildSymbols().find(scopedName) != WorkingScope->getOwnSymbol()->GetChildSymbols().end()) {
					WorkingScope = WorkingScope->getOwnSymbol()->GetChildSymbols().at(scopedName)->GetScope();
				}
			}
			//now check if the symbol is in the working scope
			symbolPtr = FindinCurrentScope(Symbol, WorkingScope);
			if (symbolPtr) {
				// Symbol found in the working scope
				return symbolPtr;
			}
		}
		// If the symbol was not found in the current scope or any parent scopes, return nullptr
		return nullptr;
	}

	bool USL_COMPILER::SymbolTable::ResolveSymbol(ScopePtr Scope, SymbolPtr Symbol)
	{
		return false;
	}
	SymbolPtr SymbolTable::AddRoot(SymbolPtr symbol)
	{
		if (!rootSymbol) {
			rootSymbol = symbol;
			return rootSymbol;
		}
		return nullptr; // Root symbol already exists, cannot add another
	}
	ScopePtr SymbolTable::PopScopeStack()
	{
		if (!scopeStack.empty()) {
			ScopePtr topScope = scopeStack.top();
			scopeStack.pop();
			//std::cout << "poped a scope. new length is now " << scopeStack.size() << std::endl;
			currentScope = scopeStack.empty() ? nullptr : scopeStack.top();
			return topScope;
		}
		return nullptr;
	}

	std::string SymbolTable::SymbolTableToString()
	{
		auto root = std::static_pointer_cast<NamespaceSymbol>(rootSymbol);
		std::string text = "Name:";
		text += root->Name();
		text += " Type: ";
		text += SymbolTypeToString(root->SymbolType());
		text += "\n";
		std::string intendent = "  ";
		for (const auto& Symbols : root->getSymbols()) {
			RecursiveSymbolTableWalker(intendent, Symbols.second, text);
		}
		return text;
	}

	ScopePtr SymbolTable::GetScopeByName(const std::string& name)
	{

		return scopes.at(name);
	}

#pragma endregion

#pragma region Symbol
	Symbol::Symbol(const Symbol& other) :
		type(other.type),
		name(other.name),
		isResolved(other.isResolved.load()),
		is_reading(other.is_reading.load()),
		is_writing(other.is_writing.load()) {
	}
	Symbol& Symbol::operator=(const Symbol& other)
	{
		if (this != &other) {
			type = other.type;
			name = other.name;
			isResolved.store(other.isResolved.load());
			is_reading.store(other.is_reading.load());
			is_writing.store(other.is_writing.load());
		}
		return *this;
	}
#pragma endregion
#pragma region NamespaceSymbol
	NamespaceSymbol::NamespaceSymbol(const std::string& name, SymbolPtr parrent) : Symbol(SymbolType::NAMESPACE, name) {

	}
	void NamespaceSymbol::addScope(std::shared_ptr<Scope> scope) {
		ownScope = scope;

	}
	const std::unordered_map<std::string, SymbolPtr>& NamespaceSymbol::getSymbols() {
		return symbols;
	}

	void NamespaceSymbol::addSymbol(SymbolPtr symbol) {
		symbols[symbol->Name()] = symbol;
	}

	bool NamespaceSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& NamespaceSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void NamespaceSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = std::static_pointer_cast<NamespaceSymbol>(Parent);

	}
	bool NamespaceSymbol::IsScope() const
	{
		return true;
	}
	std::shared_ptr<Scope> NamespaceSymbol::GetScope() const
	{
		return ownScope;
	}
#pragma endregion




#pragma region TypeSymbol
	TypeSymbol::TypeSymbol(const std::string& name, SymbolPtr parrent) :Symbol(SymbolType::TYPE, name)
	{
	}

	void TypeSymbol::AddScope(std::shared_ptr<Scope> scope)
	{
		ownScope = scope;
	}

	void TypeSymbol::addSymbol(SymbolPtr symbol) { symbols[symbol->Name()] = symbol; }

	bool TypeSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& TypeSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void TypeSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;

	}
	bool TypeSymbol::IsScope() const
	{
		return true;
	}
	std::shared_ptr<Scope> TypeSymbol::GetScope() const
	{
		return ownScope;
	}
#pragma endregion






#pragma region FunctionSymbol
	bool FunctionSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& FunctionSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void FunctionSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;

	}

	void FunctionSymbol::addSymbol(SymbolPtr symbol)
	{
		symbols[symbol->Name()] = symbol;
	}
	void FunctionSymbol::SetReturnType(SymbolPtr ptr)
	{
		this->returnType = ptr;
	}
	bool FunctionSymbol::IsScope() const
	{
		return true;
	}
	std::shared_ptr<Scope> FunctionSymbol::GetScope() const
	{
		return ownScope;
	}
	SymbolPtr FunctionSymbol::GetReturnType()
	{
		return returnType;
	}
	FunctionSymbol::FunctionSymbol(const std::string& name, SymbolPtr parent) : Symbol(SymbolType::FUNCTION, name)
	{
		// Initialize the function symbol with the given name and parent
	}

	void FunctionSymbol::AddScope(std::shared_ptr<Scope> scope)
	{
		ownScope = scope;
	}
#pragma endregion


	 


#pragma region VariableSymbol
	bool VariableSymbol::HasChildSymbols() const
	{
		return false;
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>> &VariableSymbol::GetChildSymbols()
	{
		static std::unordered_map<std::string, std::shared_ptr<Symbol>> emptyMap;
		return emptyMap;
	}

	void VariableSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;
	}
	bool VariableSymbol::IsScope() const
	{
		return false;
	}
	std::shared_ptr<Scope> VariableSymbol::GetScope() const
	{
		return nullptr;
	}
#pragma endregion










}