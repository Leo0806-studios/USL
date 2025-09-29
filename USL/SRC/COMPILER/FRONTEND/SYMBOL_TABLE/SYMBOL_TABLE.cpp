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




	void RecursiveSymbolTableWalker(std::string intendent, const SymbolPtr& Symbol, std::stringstream& outText) {
		switch (Symbol->SymbolType()) {
		case SymbolType::VARIABLE: {
			std::shared_ptr<VariableSymbol> varSymbol = std::static_pointer_cast<VariableSymbol>(Symbol);
			std::string varType = varSymbol->GetVariableType() ? varSymbol->GetVariableType()->Name() : "Unknown";
			outText << intendent << "Name: " << Symbol->Name() <<" Type: "+varType << " SymbolKind: " << SymbolTypeToString(Symbol->SymbolType()) << "\n";

			break;
		}
		case SymbolType::FUNCTION: {
			std::shared_ptr<FunctionSymbol> funcSymbol = std::static_pointer_cast<FunctionSymbol>(Symbol);
			std::stringstream parameters ;
			parameters << funcSymbol->GetParameters()[0]->Name();
			for (const auto& param : funcSymbol->GetParameters()) {
				if (param == funcSymbol->GetParameters()[0]) {
					parameters << ", ";
				}
				parameters <<"parameter type: " << param->Name();
			}
			outText << intendent << "Name: " << Symbol->Name() <<" Return Type: "<< funcSymbol->GetReturnType()->Name()+ "parameters : "<<parameters.str() << " SymbolKind: " << SymbolTypeToString(Symbol->SymbolType()) << "\n";

			break;
		}
		case SymbolType::TYPE: {
			outText << intendent << "Name: " << Symbol->Name() <<" SymbolKind: " << SymbolTypeToString(Symbol->SymbolType())<< "\n";

			break;
		}
		case SymbolType::ENUM: {
			outText << intendent << "Name: " << Symbol->Name() << " SymbolKind: " << SymbolTypeToString(Symbol->SymbolType()) <<"\n";

			break;
		}
		case SymbolType::NAMESPACE: {
			outText << intendent << "Name: " << Symbol->Name() << " SymbolKind: " << SymbolTypeToString(Symbol->SymbolType()) << "\n";

			break;
		}
		case SymbolType::ATTRIBUTE: {

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

	ScopePtr SymbolTable::PushScopeStack(ScopePtr Scope)
	{
		if (!Scope) { return nullptr; }
		scopeStack.push(Scope);
		currentScope = Scope;
		return Scope;
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
		std::stringstream text;
		text <<"Name:";
		text << root->Name();
		text << " Type: ";
		text << SymbolTypeToString(root->SymbolType());
		text << "\n";
		std::string intendent = "  ";
		for (const auto& Symbols : root->getSymbols()) {
			RecursiveSymbolTableWalker(intendent, Symbols.second, text);
		}
		return text.str();
	}

	ScopePtr SymbolTable::GetScopeByName(const std::string& name)
	{

		return scopes.at(name);
	}

	 SymbolPtr SymbolTable::GetSymbolByName(const std::string& name, const std::vector<std::string> scopeResolution) {
		if (scopeResolution.empty()) {
			return ResolveSymbol(name);
		}
		else {
			return ResolveSymbol(name, scopeResolution);
		}
	}

#pragma endregion


	SimplifyedSymbolTable SimplifyedSymbolTable::GlobalInst;

	 size_t DecoratedFunction::Hash() const noexcept {
		std::hash<std::string> hashFn;
		size_t seed = 0;
		std::hash<decltype(m_returnType.lock())> hs;

		seed ^= hashFn(m_modifiers) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= hs(m_returnType.lock()) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		for (const auto& param : m_parameters) {

			seed ^= (hs(param.lock())) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		}
		seed ^= hashFn(m_ClearName) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		return seed;
	}

	 std::string& DecoratedFunction::GetSetClearName(const std::string& NewName) {
		if (NewName.empty()) { return m_ClearName; }
		else { m_ClearName = NewName; } return m_ClearName;
	}

	 std::string DecoratedFunction::toString() const noexcept {
		std::stringstream out;
		out << DecorateorSeperators::SEPERATOR;
		out << m_returnType.lock()->ToString();
		out << DecorateorSeperators::SEPERATOR;
		out << m_ClearName << SEPERATOR;
		size_t currlengt = out.str().length();
		for (auto& param : m_parameters) {
			if (out.str().length() == currlengt) {
				out << param.lock()->ToString();
				continue;

			}
			out << SEPERATOR;
			out << param.lock()->ToString();
		}
		return out.str();
	}

	 size_t DecoratedVariable::Hash() const noexcept {
		std::hash<std::string> hashFn;
		size_t seed = 0;
		std::hash<decltype(m_type.lock())> hs;
		seed ^= hashFn(m_modifiers) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= hashFn(m_ClearName) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		seed ^= hs(m_type.lock()) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		return seed;
	}

	 size_t DecoratedType::Hash() const noexcept {
		std::hash<std::string> hashFn;
		size_t seed = 0;
		seed ^= hashFn(m_clearName) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		return seed;
	}

	 size_t DecoratedAttribute::Hash() const noexcept {
		std::hash<std::string> hashFn;
		size_t seed = 0;
		seed ^= hashFn(m_clearName) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		return seed;
	}

	 std::string DecoratedName::ToString()  {
		std::stringstream Out;
		Out << Prefixes;

		for (auto& scope : scopeResolution) {
			if (Out.str().length() == Prefixes.length()) {
				Out << scope;
				continue;
			}
			Out << DecorateorSeperators::SCOPE_SEPERATOR << scope;
		}
		switch (type) {
		case DecoratedNameType::FUNCTION: {
			
			Out << std::get<DecoratedFunction>(m_decorated).toString();
			break;
		}
		case DecoratedNameType::VARIABLE: {
			break;
		}
		case DecoratedNameType::TYPE: {

			break;
		}
		case DecoratedNameType::ATTRIBUTE: {

			break;
		}

		}
		return Out.str();
	}

	bool DecoratedName::operator==(const DecoratedName& other) const noexcept
	{
		if (type != other.type) return false;
		if (m_decorated.valueless_by_exception() || other.m_decorated.valueless_by_exception()) return false;
		if (scopeResolution.size() != other.scopeResolution.size()) return false;
		if (scopeResolution != other.scopeResolution) return false;
		if (Prefixes != other.Prefixes) return false;
		switch (type) {
			//if intellisense complains that the std::get returns void dont trust it. its lying it will (should^) compile
		case DecoratedNameType::FUNCTION: {
			
			if (std::get<DecoratedFunction>(m_decorated) != std::get<DecoratedFunction>(other.m_decorated)) return false;
			break;
		}
		case DecoratedNameType::VARIABLE: {
			if (std::get<DecoratedVariable>(m_decorated) != std::get<DecoratedVariable>(other.m_decorated)) return false;
			break;
		}
		case DecoratedNameType::TYPE: {
			if (std::get<DecoratedType>(m_decorated) != std::get<DecoratedType>(other.m_decorated)) return false;

			break;
		} 
		case DecoratedNameType::ATTRIBUTE: {
		auto issame = std::get<DecoratedAttribute>(m_decorated) != std::get<DecoratedAttribute>(other.m_decorated);

		
			if (issame) return false;

			break;
		}

		}
		return  true;
	}

	size_t DecoratorHasher::operator()(const DecoratedName& decoratedName) const
	{
		std::hash<std::string> hashFn;
		size_t seed = 0;
		for (const auto& scope : decoratedName.scopeResolution) {
			size_t scopeHash = hashFn(scope);
			seed ^= scopeHash + 0x9e3779b9 + (seed << 6) + (seed >> 2); // Combine the hash of each scope
		}
		seed ^= hashFn(decoratedName.Prefixes) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		size_t internalHash = 0;
		switch (decoratedName.type) {
		case DecoratedNameType::FUNCTION: {
			internalHash = std::get<DecoratedFunction>(decoratedName.m_decorated).Hash();
			break;
		}
		case DecoratedNameType::VARIABLE: {
			internalHash = std::get<DecoratedVariable>(decoratedName.m_decorated).Hash();

			break;
		}
		case DecoratedNameType::TYPE: {
			internalHash = std::get<DecoratedType>(decoratedName.m_decorated).Hash();

			break;
		}
		case DecoratedNameType::ATTRIBUTE: {
			internalHash = std::get<decoratedName.indexAttribute>(decoratedName.m_decorated).Hash();

			break;
		}
		default: {
			__assume(false);
		}
		}
		seed ^= internalHash + 0x9e3779b9 + (seed << 6) + (seed >> 2);
		return seed;
	}

	USL_NODISCARD std::optional<SimplifyedSymbolTable::TableIterator> SimplifyedSymbolTable::DoEsSymExist(const DecoratedName& name) noexcept
	{
		
		if (!name.isValid()) return;
		return GlobalInst.m_findInTable(name);
	}

}