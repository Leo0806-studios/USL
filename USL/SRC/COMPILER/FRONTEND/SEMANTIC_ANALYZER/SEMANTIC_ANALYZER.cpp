#include "HEADER/COMPILER/FRONTEND/SEMANTIC_ANALYZER/SEMANTIC_ANALYZER.h"
#include <HEADER/COMPILER/FRONTEND/ERROR_TABLE/ERROR_TABLE.h>

namespace USL_COMPILER {
	static void ReportError(const std::string& message, const antlr4::ParserRuleContext* ctx) {
		ErrorTable::AddError(
			std::make_shared<SemanticError>(message, ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()),
			ErrorType::SEMANTIC_ERROR);
	}

#define ReturnAndReportIfError(Condition,errortext,Context,passUp) \
if(Condition){\
		ReportError(\
		errortext,Context\
		);\
passUp.succses=false;\
return passUp;\
}
	struct TypeAndScope {
		std::string Type{};
		std::vector<std::string> scope{};
	};
	static TypeAndScope TypeToString(USLParser::TypeContext* ctx_) {
		std::string symbolType_ = "";
		std::vector<std::string> scopes_{};
		auto selectorFunc = [](USLParser::TypeContext* ctx) {
			std::string symbolType = "";
			if (ctx->ID()) {
				symbolType = ctx->ID()->toString();
			}
			else {
				if (ctx->primitives()->BOOL()) {
					symbolType = ctx->primitives()->BOOL()->toString();

				}
				else if (ctx->primitives()->BYTE()) {
					symbolType = ctx->primitives()->BYTE()->toString();
				}
				else if (ctx->primitives()->CHAR()) {
					symbolType = ctx->primitives()->CHAR()->toString();
				}
				else if (ctx->primitives()->DOUBLE()) {
					symbolType = ctx->primitives()->DOUBLE()->toString();
				}
				else if (ctx->primitives()->FLOAT()) {
					symbolType = ctx->primitives()->FLOAT()->toString();
				}
				else if (ctx->primitives()->HASH()) {
					symbolType = ctx->primitives()->HASH()->toString();
				}
				else if (ctx->primitives()->INT()) {
					symbolType = ctx->primitives()->INT()->toString();
				}
				else if (ctx->primitives()->LONG()) {
					symbolType = ctx->primitives()->LONG()->toString();
				}
				else if (ctx->primitives()->SHORT()) {
					symbolType = ctx->primitives()->SHORT()->toString();
				}
				else if (ctx->primitives()->STRING()) {
					symbolType = ctx->primitives()->STRING()->toString();
				}
				else {
					symbolType = "";
				}


			}
			return symbolType;
			};
		if (ctx_->scope_ressolution()) {
			std::vector<std::string> scopes;
			auto scopesss = ctx_->scope_ressolution()->ID();
			for (auto& scope : scopesss) {
				std::cout << scope->toString() << '\n';
				scopes.push_back(scope->toString());

			}
			scopes_ = std::move(scopes);
			symbolType_ = selectorFunc(ctx_);
		}
		else {
			symbolType_ = selectorFunc(ctx_);
		}
		TypeAndScope ret{ .Type = symbolType_,.scope = std::move(scopes_) };
		return ret;
	}
	bool isIntegralType(const std::string_view& type) {
		return type == "int" || type == "long" || type == "short" ||
			type == "byte" || type == "ubyte" || type == "uint" ||
			type == "ulong" || type == "ushort";
	}
	bool isFloatingPointType(const std::string_view& type) {
		return type == "float" || type == "double";
	}
	bool isBooleanType(const std::string_view& type) {
		return type == "bool";
	}
	std::any SemanticAnalyzer::visitProgram(USLParser::ProgramContext* ctx)
	{
		SymbolTable::SetScope(SymbolTable::GetRootSymbol()->GetScope());
		std::cout << "visiting root\n";
		auto Statements = ctx->global_statement();
		for (auto& statement : Statements) {
			StatementReturn StatRet = std::any_cast<StatementReturn>(visitGlobal_statement(statement));
			ReturnAndReportIfError(!StatRet.succses,"statment malformed",ctx,StatRet)
	
		}

		StatementReturn ret{ .succses = true };
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any SemanticAnalyzer::visitFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
		std::cout << "visiting function: " << ctx->ID()->toString() << '\n';
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString())->GetScope());
		const auto& Statements = ctx->statement();
		for (auto& statement : Statements) {
			StatementReturn statRet = std::any_cast<StatementReturn>(visitStatement(statement));
			ReturnAndReportIfError(!statRet.succses,"statement errored",statement,statRet)
		}
		StatementReturn ret{};
		ret.succses = true;
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any SemanticAnalyzer::visitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		std::cout << "visiting namespace: " << ctx->ID()->toString() << '\n';
		
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString())->GetScope());
		const auto& Statements = ctx->global_statement();
		for (auto& statement : Statements) {
			StatementReturn StatRet = std::any_cast<StatementReturn>(visitGlobal_statement(statement));
			ReturnAndReportIfError(!StatRet.succses,"statement error ",ctx,StatRet)
		}
		StatementReturn ret{.succses=true};
	
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any SemanticAnalyzer::visitClass_delcaration(USLParser::Class_delcarationContext* ctx)
	{
		std::cout << "visiting class: " << ctx->ID()->toString() << '\n';
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString())->GetScope());
		const auto& Statements = ctx->classmember_declaration();
		for (auto& statement : Statements) {
			StatementReturn StatRet = std::any_cast<StatementReturn>(visitClassmember_declaration(statement));
			ReturnAndReportIfError(!StatRet.succses,"statement error ", ctx,StatRet)
		}
		StatementReturn ret{ .succses = true };
		SymbolTable::PopScopeStack();
		return ret;
	}





	std::any SemanticAnalyzer::visitGlobal_statement(USLParser::Global_statementContext* context)
	{
		StatementReturn ret{};
		if (auto ClassPtr=context->class_delcaration()) {
			StatementReturn classResult = std::any_cast<StatementReturn>(visitClass_delcaration(ClassPtr));
			ReturnAndReportIfError(!classResult.succses,"class statement malformed", context, classResult)
		}
		else if (auto NamespacePtr = context->namespace_declaration()) {
			StatementReturn NamespaceResult = std::any_cast<StatementReturn>(visitNamespace_declaration(NamespacePtr));
			ReturnAndReportIfError(!NamespaceResult.succses,"namespac Statement malformed",context,NamespaceResult)
		}
		else if (auto EnumPtr = context->enum_declaration()) {
			StatementReturn EnumResult = std::any_cast<StatementReturn>(visitEnum_declaration(EnumPtr));
			ReturnAndReportIfError(!EnumResult.succses," enum statment malformed", context,EnumResult)
		}
		else if (auto AtributePtr = context->atribute_declaration()) {
			StatementReturn AtributReslut = std::any_cast<StatementReturn>(visitAtribute_declaration(AtributePtr));
				ReturnAndReportIfError(!AtributReslut.succses,"atribute statement malformed",context,AtributReslut)
		}
		else if (auto intrinsicPtr = context->intrinsic_function_pre_declaration()) {
			StatementReturn intrinsicResult = std::any_cast<StatementReturn>(visitIntrinsic_function_pre_declaration(intrinsicPtr));
			ReturnAndReportIfError(!intrinsicResult.succses,"intrinsic statement malformed ",context,intrinsicResult)
		}
		else if (auto ExternPtr = context->extern_function_pre_declaration()) {
			StatementReturn externResult = std::any_cast<StatementReturn>(visitExtern_function_pre_declaration(ExternPtr));
			ReturnAndReportIfError(!externResult.succses,"extern statement malformed ",context,externResult)
		}
		else {
			ReportError(
				"unknown statement", context
			);
			return ret;

		}
		ret.succses = true;
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitStatement(USLParser::StatementContext* context)
	{
		StatementReturn ret{};
		if (auto VarPtr = context->var_declaration()) {
			StatementReturn VarResult = std::any_cast<StatementReturn>(visitVar_declaration(VarPtr));
			ReturnAndReportIfError(!VarResult.succses,"Var declaration Malformed",context,ret)
		}
		else if (auto FuncPtr = context->function_declaration()) {
			StatementReturn FuncResult = std::any_cast<StatementReturn>(visitFunction_declaration(FuncPtr));
				ReturnAndReportIfError(!FuncResult.succses, "function declaration malformed", context, FuncResult)
		}
		else if (auto ExpressionPtr = context->expression()) {
			ExpressionReturnType ExpressionResult = std::any_cast<ExpressionReturnType>(visitExpression(ExpressionPtr));
			ReturnAndReportIfError(!ExpressionResult.succses,"expression Malformed",context,ret)
		}
		else {
			ReportError(
				"unknown statement", context
			);
			return ret;
		}


		ret.succses = true;
		return ret;
	}

	std::any SemanticAnalyzer::visitExpression(USLParser::ExpressionContext* context)
	{

		return visitAssignment_expr(context->assignment_expr());
	}

	std::any SemanticAnalyzer::visitBasic_block(USLParser::Basic_blockContext* context)
	{


		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitAtribute_declaration(USLParser::Atribute_declarationContext* context)
	{

		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitEnum_declaration(USLParser::Enum_declarationContext* context)
	{

		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitVar_declaration(USLParser::Var_declarationContext* context)
	{
		std::shared_ptr<VariableSymbol> self = std::static_pointer_cast<VariableSymbol>(SymbolTable::GetSymbolByName(context->ID()->toString()));

		StatementReturn ret{};
		if (context->construct) {
			ExpressionReturnType Construct = std::any_cast<ExpressionReturnType>(visitExpression(context->construct));
			ReturnAndReportIfError(!(self->GetVariableType()==Construct.ReturnType)," can only assign to var of same type",context,ret)
		}
		else if (context->construct_assign) {
			ExpressionReturnType Construct = std::any_cast<ExpressionReturnType>(visitExpression(context->construct_assign));
			ReturnAndReportIfError(!(self->GetVariableType() == Construct.ReturnType), " can only assign to var of same type", context, ret)
		}
		else {
			//nothing to do if no assign on default construction
		}
		ret.succses = true;
		return ret;
	}

	std::any SemanticAnalyzer::visitCustom_opperator_sym(USLParser::Custom_opperator_symContext* context)
	{

		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitNoexcept_specifyer(USLParser::Noexcept_specifyerContext* context)
	{

		return visitChildren(context);
	}





	std::any SemanticAnalyzer::visitPrimitives(USLParser::PrimitivesContext* context)
	{
		return visitChildren(context);
	}




	std::any SemanticAnalyzer::visitType(USLParser::TypeContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitParameter(USLParser::ParameterContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitParameterList(USLParser::ParameterListContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitClassmember_declaration(USLParser::Classmember_declarationContext* context)
	{
		if (auto VarPtr = context->var_declaration()) {
			return visitVar_declaration(VarPtr);
		}
		else if (auto FuncPtr = context->function_declaration()) {
			return visitFunction_declaration(FuncPtr);
		}
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitOperator_symbols(USLParser::Operator_symbolsContext* context)
	{
		return visitChildren(context);
	}


	//Expressions related methods
#pragma region Expressions

	std::any SemanticAnalyzer::visitAssignment_expr(USLParser::Assignment_exprContext* ctx)
	{
		if (ctx->ASSIGN_OP()) {
			std::cout << ' ';
		}
		auto left = ctx->left;
		ExpressionReturnType ret{};
		ExpressionReturnType LeftResult = std::any_cast<ExpressionReturnType>(visitEquality_expr(left));
		if (!LeftResult.succses) {
			ReportError(
				"left expression failed " + ctx->left->toString(),
				ctx
			);
			return LeftResult;
		}
		if (ctx->ASSIGN_OP()) {
			if (!LeftResult.isLValue) {
				ReportError(
					"can only asign to an lvalue. lfet was not an lvalue",
					ctx
				);
				ret.succses = false;
				return ret;
			}
			auto RightSide = ctx->assignment_expr();
			ExpressionReturnType RightResult = std::any_cast<ExpressionReturnType>(visitAssignment_expr(RightSide));
			if (!RightResult.succses) {
				ReportError(
					"right expression failed.",
					ctx
				);
				return RightResult;
			}
			if (!(LeftResult.ReturnType == RightResult.ReturnType)) {
				ReportError(
					"can only asign to variable of the same type. left was " + LeftResult.ReturnType->Name() + " right was " + RightResult.ReturnType->Name(),
					ctx
				);
				ret.succses = false;
				return ret;
			}
			ret.ReturnType = LeftResult.ReturnType;
			ret.isConst = false;
			ret.isLValue = true;
			ret.succses = true;
		}
		else {
			ret = LeftResult;//just pass it up if no asigment
		}
		return ret;
	}
	std::any SemanticAnalyzer::visitEquality_expr(USLParser::Equality_exprContext* context)
	{
		auto left = context->left;
		ExpressionReturnType ret{};
		ExpressionReturnType LeftResult = std::any_cast<ExpressionReturnType>(visitComparison_expr(left));
		ReturnAndReportIfError(!LeftResult.succses, "left expression failed " + context->left->toString(),context, LeftResult)

		if (context->children.size()>1) {
			if (!(isIntegralType(LeftResult.ReturnType->Name()) || isFloatingPointType(LeftResult.ReturnType->Name()) || isBooleanType(LeftResult.ReturnType->Name()))) {
				ReportError(
					"can only do equality expressions on integral ,floating point or on boolean types. left was: " + LeftResult.ReturnType->Name(),
					context
				);
				ret.succses = false;
				return ret;

			}
			auto Rightside = context->comparison_expr();
			// should not be neccesary (hopefully) but just to be sure it removes left from the vector to avoid working on it twice
			std::erase_if(Rightside, [left](const USLParser::Comparison_exprContext* expr) { return expr == left; });


			for (auto& expr : Rightside) {
				ExpressionReturnType RightResult = std::any_cast<ExpressionReturnType>(visitComparison_expr(expr));
				if (!(isIntegralType(RightResult.ReturnType->Name()) || isFloatingPointType(RightResult.ReturnType->Name()) || isBooleanType(RightResult.ReturnType->Name()))) {
					ReportError(
						"can only do comparisions on integral ,floatingpoito r on boolean types. right was: " + RightResult.ReturnType->Name(),
						context
					);
					ret.succses = false;
					return ret;
				}
			}
			ret.ReturnType = SymbolTable::GetRootSymbol()->GetChildSymbols().at("bool");
			ret.succses = true;
		}
		else {
			ret = LeftResult;//if it has only one child its no equality check so juts pass te return up
		}
		return ret;
	}

	std::any SemanticAnalyzer::visitComparison_expr(USLParser::Comparison_exprContext* context)
	{
		auto left = context->left;
		ExpressionReturnType ret{};
		ExpressionReturnType LeftResult = std::any_cast<ExpressionReturnType>(visitBitshift_expr(left));
		ReturnAndReportIfError(!LeftResult.succses, "left expression failed " + context->left->toString(), context, LeftResult)
		if (context->children.size() > 1) {
			std::string LeftReturnName = LeftResult.ReturnType->Name();
			ReturnAndReportIfError(!(isIntegralType(LeftReturnName)||isFloatingPointType(LeftReturnName)||isBooleanType(LeftReturnName)),
				"can only do comparisions on integral ,floating point or on boolean types. left was: "+LeftReturnName,context,ret)
			auto Rightside = context->bitshift_expr();
			// should not be neccesary (hopefully) but just to be sure it removes left from the vector to avoid working on it twice
			std::erase_if(Rightside, [left](const USLParser::Bitshift_exprContext* expr) { return expr == left; });
			for (auto& expr : Rightside) {
				ExpressionReturnType RightResult = std::any_cast<ExpressionReturnType>(visitBitshift_expr(expr));
				std::string RightReturnName = RightResult.ReturnType->Name();
				ReturnAndReportIfError(!(isIntegralType(RightReturnName) || isFloatingPointType(RightReturnName) || isBooleanType(RightReturnName)),
					"can only do comparisions on integral ,floating point or on boolean types. right was: " + RightReturnName, context, ret)
			}
			ret.ReturnType = SymbolTable::GetRootSymbol()->GetChildSymbols().at("bool");
			ret.succses = true;
		}
		else {
			ret = LeftResult;// if children.size ==1 it is no compariosion so just pas the result up
		}
		return ret;
	}

	std::any SemanticAnalyzer::visitBitshift_expr(USLParser::Bitshift_exprContext* context)
	{
		auto left = context->left;
		ExpressionReturnType ret{};
		ExpressionReturnType LefRsult = std::any_cast<ExpressionReturnType>(visitAdditive_expr(left));
		ReturnAndReportIfError(!LefRsult.succses, "left expression failed " + context->left->toString(),context,LefRsult)
		if (context->children.size() > 1) {
			std::string LeftresultName = LefRsult.ReturnType->Name();
			ReturnAndReportIfError(!isIntegralType(LeftresultName), "can only do bitshifts on integral types. left was: " + LeftresultName,context,ret)
			auto Rightside = context->additive_expr();
			// should not be neccesary (hopefully) but just to be sure it removes left from the vector to avoid working on it twice
			std::erase_if(Rightside, [left](const USLParser::Additive_exprContext* expr) { return expr == left; });
			for (auto& expr : Rightside) {
				ExpressionReturnType RightResult = std::any_cast<ExpressionReturnType>(visitAdditive_expr(expr));
				std::string RightResultName = RightResult.ReturnType->Name();
				ReturnAndReportIfError(!(RightResult.succses || !isIntegralType(RightResultName)), 
					"can only do bitshifts on integral types. right was: " + RightResultName,context,ret)
			}
			ret.ReturnType = LefRsult.ReturnType;//caries the returntype of the left side of the expression;
			ret.succses = true;
		}
		else {
			ret = LefRsult;// if children.size == 1 it is no bitshift so just pass te result up;
		}
		return ret;
	}

	std::any SemanticAnalyzer::visitAdditive_expr(USLParser::Additive_exprContext* context)
	{
		auto left = context->left;
		ExpressionReturnType LefRsult = std::any_cast<ExpressionReturnType>(visitMultiplicative_expr(left));
		ExpressionReturnType ret{};
		if(!LefRsult.succses) {
			ReportError(
				"left expression failed: " + context->left->toString(),
				context);
			return LefRsult; //pass the error up
		}
		if (context->children.size() > 1) {

			if (!isIntegralType(LefRsult.ReturnType->Name()) && !isFloatingPointType(LefRsult.ReturnType->Name())) {
				ReportError(
					"additive expression can only be used on integral or floating point types: " + LefRsult.ReturnType->Name(),
					context);
				ret.succses = false;
				return ret; //returning the error
			}
			auto Rightside = context->multiplicative_expr();
			// should not be neccesary (hopefully) but just to be sure it removes left from the vector to avoid working on it twice
			std::erase_if(Rightside, [left](const USLParser::Multiplicative_exprContext* expr) { return expr == left; });
			bool hasInvalidType = false;
			bool containsFloating = false;
			for (auto* expr : Rightside) {
				ExpressionReturnType RightResult = std::any_cast<ExpressionReturnType>(visitMultiplicative_expr(expr));
				if (!RightResult.succses ||
					(!isIntegralType(RightResult.ReturnType->Name()) &&
						!isFloatingPointType(RightResult.ReturnType->Name()))) {
					hasInvalidType = true;
					ReportError(
						"additive expression can only be used on integral or floating point types: " +
						LefRsult.ReturnType->Name(), context);
					ret.succses = false;
					return ret;
				}
				if (RightResult.ReturnType->Name() == "float") {
					containsFloating = true;
				}
			}
			if (hasInvalidType) {
				ReportError(
					"additive expression can only be used on integral or floating point types: " + LefRsult.ReturnType->Name(),
					context);
				ret.succses = false; //if any of the right side expressions are not valid, override succses to false
				return ret; //returning the error
			}
			//promoting to floating point if any of the operands are floating point
			if (containsFloating || (LefRsult.ReturnType->Name() == "float" || LefRsult.ReturnType->Name() == "double")) {

				ret.ReturnType = SymbolTable::GetSymbolByName("double"); //promoting to double if any of the operands are floating point
				ret.succses = true; //this will be overridden if the function call fails, this is only done to reduce if else clutter
				ret.isLValue = false; //multiplicative expressions are not lvalues
				ret.isConst = false; //multiplicative expressions are not const, as they can change the value of the variable
				ret.isLiteral = false; //multiplicative expressions are not literals, as they can change the value of the variable
			}
			else {
				ret.ReturnType = LefRsult.ReturnType; //if no floating point types, the return type is the same as the left side expression
				ret.succses = true;
				ret.isLValue = false; //multiplicative expressions are not lvalues
				ret.isConst = false; //multiplicative expressions are not const, as they can change the value of the variable
				ret.isLiteral = false; //multiplicative expressions are not literals, as they can change the value of the variable
			}
		}
		else {
			ret = LefRsult;//if children.size == 1 its no additive expression so just pas the result up;
		}
		return ret;
	}

	std::any SemanticAnalyzer::visitMultiplicative_expr(USLParser::Multiplicative_exprContext* context)
	{
		auto left = context->left;
		ExpressionReturnType LefRsult = std::any_cast<ExpressionReturnType>(visitUnary_expr(left));
		ExpressionReturnType ret{};
		if(!LefRsult.succses) {
			ReportError(
				"left expression failed: " + context->left->toString(),
				context);
			return LefRsult; //pass the error up
		}
		if (context->children.size() > 1) {

			if (!isIntegralType(LefRsult.ReturnType->Name()) && !isFloatingPointType(LefRsult.ReturnType->Name())) {
				ReportError(
					"multiplicative expression can only be used on integral or floating point types: " + LefRsult.ReturnType->Name(),
					context);
				ret.succses = false;
				return ret; //returning the error
			}

			auto Rightside = context->unary_expr();
			// should not be neccesary (hopefully) but just to be sure it removes left from the vector to avoid working on it twice
			std::erase_if(Rightside, [left](const USLParser::Unary_exprContext* expr) { return expr == left; });
			bool hasInvalidType = false;
			bool containsFloating = false;
			for (auto* expr : Rightside) {
				ExpressionReturnType RightResult = std::any_cast<ExpressionReturnType>(visitUnary_expr(expr));

				if (!RightResult.succses ||
					(!isIntegralType(RightResult.ReturnType->Name()) &&
						!isFloatingPointType(RightResult.ReturnType->Name()))) {
					hasInvalidType = true;

					ReportError(
						"multiplicative expression can only be used on integral or floating point types: " +
						LefRsult.ReturnType->Name(), context);

					ret.succses = false;
					return ret;
				}

				if (RightResult.ReturnType->Name() == "float") {
					containsFloating = true;
				}
			}

			if (hasInvalidType) {
				ReportError(
					"multiplicative expression can only be used on integral or floating point types: " + LefRsult.ReturnType->Name(),
					context);
				ret.succses = false; //if any of the right side expressions are not valid, override succses to false
				return ret; //returning the error
			}
			//promoting to floating point if any of the operands are floating point
			if (containsFloating || (LefRsult.ReturnType->Name() == "float" || LefRsult.ReturnType->Name() == "double")) {

				ret.ReturnType = SymbolTable::GetSymbolByName("double"); //promoting to double if any of the operands are floating point
				ret.succses = true; //this will be overridden if the function call fails, this is only done to reduce if else clutter
				ret.isLValue = false; //multiplicative expressions are not lvalues
				ret.isConst = false; //multiplicative expressions are not const, as they can change the value of the variable
				ret.isLiteral = false; //multiplicative expressions are not literals, as they can change the value of the variable
			}
			else {
				ret.ReturnType = LefRsult.ReturnType; //if no floating point types, the return type is the same as the left side expression
				ret.succses = true;
				ret.isLValue = false; //multiplicative expressions are not lvalues
				ret.isConst = false; //multiplicative expressions are not const, as they can change the value of the variable
				ret.isLiteral = false; //multiplicative expressions are not literals, as they can change the value of the variable
			}
		}
		else {
			ret = LefRsult;//if children.sizze ==1 its no multiplicative expression s just pas the result up
		}
		return ret;
	}
	static bool isAllowedForDecrementOrIncrement(SymbolPtr symbol) {
		return symbol->Name() == "int" || symbol->Name() == "long" || symbol->Name() == "short" ||
			symbol->Name() == "byte" || symbol->Name() == "ubyte" || symbol->Name() == "uint" ||
			symbol->Name() == "ulong" || symbol->Name() == "ushort";
	}
	std::any SemanticAnalyzer::visitUnary_expr(USLParser::Unary_exprContext* context)
	{
		ExpressionReturnType PrimaryResult = std::any_cast<ExpressionReturnType>(visitPrimary_expr(context->primary_expr()));
		ExpressionReturnType ret{};
		if(!PrimaryResult.succses) {
			ReportError(
				"primary expression failed: " + context->primary_expr()->toString(),
				context);

			return PrimaryResult; //pass the error up
		}
		if (context->DECREMENT()) {
			if (!isAllowedForDecrementOrIncrement(PrimaryResult.ReturnType)) {
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						"decrement operator can only be used on integral types: " + PrimaryResult.ReturnType->Name(),
						context->getStart()->getLine(),
						context->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
				ret.succses = false; //if the type is not allowed for decrement, override succses to false
				return ret; //returning the error
			}
			ret.ReturnType = PrimaryResult.ReturnType; //the return type is the same as the primary expression
			ret.succses = true; 
			ret.isLValue = false; //decrement operator returns a value, not an lvalue
			ret.isConst = false; //decrement operator is not const, as it changes the value of the variable
			ret.isLiteral = false; //decrement operator is not a literal, as it changes the value of the variable
		}
		else if (context->INCREMENT()) {
			if(!isAllowedForDecrementOrIncrement(PrimaryResult.ReturnType)) {
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						"increment operator can only be used on integral types: " + PrimaryResult.ReturnType->Name(),
						context->getStart()->getLine(),
						context->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
				ret.succses = false; //if the type is not allowed for increment, override succses to false
				return ret; //returning the error
			}
			ret.ReturnType = PrimaryResult.ReturnType; //the return type is the same as the primary expression
			ret.succses = true;
			ret.isLValue = false; //increment operator returns a value, not an lvalue
			ret.isConst = false; //increment operator is not const, as it changes the value of the variable
			ret.isLiteral = false; //increment operator is not a literal, as it changes the value of the variable
		}
		else {
			ret = PrimaryResult; //if there is no increment or decrement operator, the return type is the same as the primary expression
		}

		return ret;
	}
	std::any SemanticAnalyzer::visitPrimary_expr(USLParser::Primary_exprContext* ctx)
	{
		SymbolPtr type = nullptr;
		ExpressionReturnType ret{};
		//first chekc if the context has an id as this will not be in a child as this is a lexer token
		if (ctx->id_with_scope()) {
			ExpressionReturnType IDret = std::any_cast<ExpressionReturnType>(visitId_with_scope(ctx->id_with_scope()));
			if(!IDret.succses) {
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						"id not found: " + ctx->id_with_scope()->toString(),
						ctx->getStart()->getLine(),
						ctx->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
				return IDret; //pass the error up
			}
			ret.ReturnType = IDret.ReturnType; 
			ret.succses = true; 
			ret.isLValue = IDret.isLValue; //if the id is an lvalue, the primary expression is also an lvalue
			ret.isConst = IDret.isConst; //if the id is a const, the primary expression is also a const
			ret.isLiteral = IDret.isLiteral; //if the id is a literal, the primary expression is also a literal
			
		}
		else if (ctx->function_call()) {
			ExpressionReturnType funcCallRet = std::any_cast<ExpressionReturnType>(visitFunction_call(ctx->function_call()));
			if (!funcCallRet.succses) {
								
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						"function call failed: " + ctx->function_call()->toString(),
						ctx->getStart()->getLine(),
						ctx->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
				return funcCallRet; //pass the error up
			}
			ret.ReturnType = funcCallRet.ReturnType; //get the return type of the function call
			ret.succses = true; //this will be overridden if the function call fails, this is only done to reduce if else clutter
			ret.isLValue = funcCallRet.isLValue; //function calls are not lvalues for now, but this can be changed later
			ret.isConst = funcCallRet.isConst; //if the function call is a const, the primary expression is also a const
			ret.isLiteral = funcCallRet.isLiteral; //if the function call is a literal, the primary expression is also a literal
		}
		else if (ctx->litteral()) {
			//if the context has a litteral, visit it and return the type of the litteral
			ExpressionReturnType LitteralRet = std::any_cast<ExpressionReturnType>(visitLitteral(ctx->litteral()));
			if (!LitteralRet.succses) {
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						"litteral not recognized: " + ctx->litteral()->toString(),
						ctx->getStart()->getLine(),
						ctx->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
				return LitteralRet; //pass the error up
			}
			ret.ReturnType = LitteralRet.ReturnType; 
			ret.succses = true; 
			ret.isLValue = false; //litterals are not lvalues
			ret.isConst = true; //litterals are always const
			ret.isLiteral = true; //litterals are always literals

		}
		else if(ctx->expression()) {
			ExpressionReturnType exprRet = std::any_cast<ExpressionReturnType>(visitExpression(ctx->expression()));
			if(!exprRet.succses) {
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						"expression not recognized: " + ctx->expression()->toString(),
						ctx->getStart()->getLine(),
						ctx->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
				return exprRet; //pass the error up
			}
			ret.ReturnType = exprRet.ReturnType; 
			ret.succses = true;
			ret.isLValue = exprRet.isLValue; //if the expression is an lvalue, the primary expression is also an lvalue
			ret.isConst = exprRet.isConst; //if the expression is a const, the primary expression is also a const
			ret.isLiteral = exprRet.isLiteral; //if the expression is a literal, the primary expression is also a literal

		}


		return ret;
	}

	std::any SemanticAnalyzer::visitFunction_call_parameters(USLParser::Function_call_parametersContext* context)
	{
		auto parameters = context->expression();
		std::vector<SymbolPtr> ret;
		ret.reserve(parameters.size()); //reserve space for the parameters to avoid reallocations
		for (auto& param : parameters) {
			ret.push_back(std::any_cast<ExpressionReturnType>(visitExpression(param)).ReturnType);
		}
		return ret;
	}
	std::any SemanticAnalyzer::visitIntrinsic_function_pre_declaration(USLParser::Intrinsic_function_pre_declarationContext* context)
	{
		return std::any();
	}
	std::any SemanticAnalyzer::visitExtern_function_pre_declaration(USLParser::Extern_function_pre_declarationContext* context)
	{
		return std::any();
	}
	std::any SemanticAnalyzer::visitExter_function_declaratio(USLParser::Exter_function_declaratioContext* context)
	{
		return std::any();
	}
	std::any SemanticAnalyzer::visitFunction_call(USLParser::Function_callContext* context)
	{
		ExpressionReturnType id = std::any_cast<ExpressionReturnType>(visitId_with_scope(context->id_with_scope()));
		if (!id.succses) {
						ErrorTable::AddError(
				std::make_shared<SemanticError>(
					"function call failed, id not found: " + context->id_with_scope()->toString(),
					context->getStart()->getLine(),
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
						return id; //returning the error
		}
		std::shared_ptr<FunctionSymbol> func = std::static_pointer_cast<FunctionSymbol>(id.ReturnType);
		ExpressionReturnType ret{};
		ret.ReturnType = func->GetReturnType(); //get the return type of the function
		ret.succses = true; //this will be overridden if the function call fails, this is only done to reduce if else clutter
		//check if it has any parameters
		std::vector<SymbolPtr> Passedparameters{};
		if (context->function_call_parameters()) {
			 Passedparameters= std::any_cast<std::vector<SymbolPtr>>(visitFunction_call_parameters(context->function_call_parameters()));
		}
		//TODO add scope printing to the error output
		const auto& parameters = func->GetParameters();
		if ((parameters.size() != Passedparameters.size()) ) {
			ret.succses = false; //if the number of parameters does not match, override succses to false
			ErrorTable::AddError(
				std::make_shared<SemanticError>(
					std::format("function call failed, number of parameters does not match: {} expected: {} got: {}",
						context->id_with_scope()->ID()->toString(), std::to_string(parameters.size()), std::to_string(Passedparameters.size())),
					context->getStart()->getLine(),
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
			return ret; //returning the error
		}
		for (size_t i = 0; i < parameters.size(); ++i) {
			if (parameters[i] != Passedparameters[i]) {
				ret.succses = false; //if the parameter types do not match, override succses to false
				ErrorTable::AddError(
					std::make_shared<SemanticError>(
						std::format("parameter type mismatch: {} expected: {} got: {}",
							context->id_with_scope()->ID()->toString(), parameters[i]->Name(), Passedparameters[i]->Name()),
						context->getStart()->getLine(),
						context->getStart()->getCharPositionInLine()),
					ErrorType::SEMANTIC_ERROR);
			}
		}
		ret.isLValue = false; //function calls are not lvalues // for now i dont support refferences as return types
		
		return ret;
	}
#pragma endregion

	//Types related methods
#pragma region Types

#pragma endregion


	// Atribute related methods

#pragma region Attributes


	//ill implement this later whn i have figured out how i want to do that
	//TODO: implement attributes

	std::any SemanticAnalyzer::visitAtribute_constructor(USLParser::Atribute_constructorContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitAtrribute_requires(USLParser::Atrribute_requiresContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitImplements_function(USLParser::Implements_functionContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitImplements_Var(USLParser::Implements_VarContext* context)
	{
		return visitChildren(context);
	}


	std::any SemanticAnalyzer::visitAtribute_parameter(USLParser::Atribute_parameterContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitAtribute_parameter_list(USLParser::Atribute_parameter_listContext* context)
	{
		return visitChildren(context);
	}

	std::any SemanticAnalyzer::visitAtribute_decorators(USLParser::Atribute_decoratorsContext* context)
	{
		return visitChildren(context);
	}


#pragma endregion

#pragma region Extern_specifiyer

	/// <summary>
	/// helper to return valid extern strings for the extern specifier.
	/// </summary>
	/// <returns></returns>
	static std::string ValidExternStrings() {
		return " MSVC++,C, GCC++, CLANG++";
	}
	static bool isValidExternString(const std::string& str)
	{
		static const std::vector<std::string> validExternStrings = { "MSVC++", "C", "GCC++", "CLANG++" };
		return std::find(validExternStrings.begin(), validExternStrings.end(), str) != validExternStrings.end();
	}
	std::any SemanticAnalyzer::visitExtern_spec(USLParser::Extern_specContext* context)
	{
		basicReturn ret{};
		if (!context->STRING_LITTERAL()) {
			ErrorTable::AddError(
				std::make_shared<SemanticError>(
					"extern specifier must have a string literal. valid litterals are: " + ValidExternStrings(),
					context->getStart()->getLine(),
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
			ret.succses = false;
		}
		if (!isValidExternString(context->STRING_LITTERAL()->toString())) {
			ErrorTable::AddError(
				std::make_shared<SemanticError>(
					"extern specifier must have a string literal. valid litterals are: " + ValidExternStrings(),
					context->getStart()->getLine(),
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
			ret.succses = false;

		}
		//idk what to do here
		//TODO: fully implement
		ret.succses = true;

		return ret;//nont neccesary to visit children (grammar rule: extern_spec  :EXTERN STRING_LITTERAL;)

	}


#pragma endregion

	//function related to litterals
#pragma region Litterals


	std::any SemanticAnalyzer::visitLitteral(USLParser::LitteralContext* context)
	{
		auto lambda = [](const std::string& name, ExpressionReturnType& ret) {
			ret.ReturnType = SymbolTable::GetSymbolByName(name);
			ret.succses = true;
			ret.isConst = true; //litterals are always const
			ret.isLiteral = true; //litterals are always literals
			};
		ExpressionReturnType ret{};
		if (auto boolptr = context->BOOL_LITTERAL()) 					lambda("bool", ret);
		else if (auto floatptr = context->FLOAT_LITTERAL())			lambda("double", ret);
		else if (auto intptr = context->INT_LITTERAL()) 				lambda("long", ret);	
		else if (auto charptr = context->CHAR_LITTERAL()) 			lambda("char", ret);
		else if (auto stringptr = context->STRING_LITTERAL()) 		lambda("string", ret);
		else if (auto uintptr = context->UINT_LITTERAL()) 			lambda("ulong", ret);
		else {
			ErrorTable::AddError(
				std::make_shared<SemanticError>(
					"litteral not recognized", 
					context->getStart()->getLine(), 
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
		}
		//no need to vsit children as the only "children" would be lexer tokens
		return ret;
	}

#pragma endregion
#pragma region IntegralTypes


	// functions related to integral types

	std::any SemanticAnalyzer::visitIntegral_type(USLParser::Integral_typeContext* context)
	{
		auto tmp = visitChildren(context);
		if (!tmp.has_value()) {
			//this should not be possible, as integral types should always return a value but just in case this is here
			ErrorTable::AddError(
				std::make_shared<SemanticError>(
					"children of visit integral type returned no value (this should be impossible)", 
					context->getStart()->getLine(), 
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
			//throw Semantic_analyzer_exception("children of visit integral type returned no value (this should be impossible)"); //adding error to error table instead of throwing exception
		}
		ExpressionReturnType ret = std::any_cast<ExpressionReturnType>(tmp);

		return ret;
	}
	std::any SemanticAnalyzer::visitSigned_inegral_type(USLParser::Signed_inegral_typeContext* context)
	{
		ExpressionReturnType ret{};
		if (context->BYTE()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->BYTE()->toString());
			ret.succses = true;
		}
		else if (context->INT()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->INT()->toString());
			ret.succses = true;

		}
		else if (context->LONG()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->LONG()->toString());
			ret.succses = true;
		}
		else if(context->SHORT()){
			ret.ReturnType = SymbolTable::GetSymbolByName(context->SHORT()->toString());
			ret.succses = true;
		}
		else {
			//this should not be possible, as signed integral types should always return a value but just in case this is here
			ErrorTable::AddError(std::make_shared<SemanticError>("signed integral type not recognized", context->getStart()->getLine(), context->getStart()->getCharPositionInLine()), ErrorType::SEMANTIC_ERROR);
			//throw Semantic_analyzer_exception("signed integral type not recognized"); //adding error to error table instead of throwing exception
		}
		//no need to vsit children as the only "children" would be lexer tokens
		return ret;
	}

	std::any SemanticAnalyzer::visitUnsigned_integral_type(USLParser::Unsigned_integral_typeContext* context)
	{
		ExpressionReturnType ret{};
		if (context->UBYTE()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->UBYTE()->toString());
			ret.succses = true;
		}
		else if (context->UINT()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->UINT()->toString());
			ret.succses = true;

		}
		else if (context->ULONG()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->ULONG()->toString());
			ret.succses = true;
		}
		else if (context->USHORT()) {
			ret.ReturnType = SymbolTable::GetSymbolByName(context->USHORT()->toString());
			ret.succses = true;
		}
		else {
			//this should not be possible, as unsigned integral types should always return a value but just in case this is here
			ErrorTable::AddError(std::make_shared<SemanticError>("unsigend integral type not recognized",context->getStart()->getLine(), context->getStart()->getCharPositionInLine()), ErrorType::SEMANTIC_ERROR);
			//throw Semantic_analyzer_exception("unsigend integral type not recognized");//adding error to error table instead of throwing exception
		}
		//no need to vsit children as the only "children" would be lexer tokens
		return ret;
	}
#pragma endregion
#pragma region ScopeRelated

	std::any SemanticAnalyzer::visitScope_ressolution(USLParser::Scope_ressolutionContext* context)
	{

		std::vector<std::string> scopes;
		auto scopesss = context->ID();
		for (auto& scope : scopesss) {
			std::cout << scope->toString() << '\n';
			scopes.push_back(scope->toString());

		}
		

		
		return scopes;
	}
	std::any SemanticAnalyzer::visitId_with_scope(USLParser::Id_with_scopeContext* context)
	{
		ExpressionReturnType ret{};
		TypeAndScope TypeandScope{};
		if (context->scope_ressolution()) {
			TypeandScope.scope = std::any_cast<std::vector<std::string>>(visitScope_ressolution(context->scope_ressolution()));
		}
		TypeandScope.Type = context->ID()->toString();
		//resolve symbol
		auto symbol = SymbolTable::GetSymbolByName(TypeandScope.Type, TypeandScope.scope);
		if (symbol->SymbolType() == SymbolType::VARIABLE) {
			auto asVar = std::static_pointer_cast<VariableSymbol>(symbol);
			ret.ReturnType = asVar->GetVariableType();
			ret.isLValue = true;
		}
		else {
			ret.ReturnType = SymbolTable::GetSymbolByName(TypeandScope.Type, TypeandScope.scope);

		}
		ret.succses = true; // this will be overridden if the symbol is not found. this is only done to reduce if else clutter
	

		if (!ret.ReturnType) {
			ret.succses = false; //if symbol not found override succses to false
			ErrorTable::AddError(
				std::make_shared<SemanticError>(
					"symbol not found: " + TypeandScope.Type + " in scope: " + [&]() {
						std::string ret_{};
						for (const auto& scope : TypeandScope.scope)
						{ ret_ += scope + "::"; }
						return ret_; }(),
					context->getStart()->getLine(),
					context->getStart()->getCharPositionInLine()),
				ErrorType::SEMANTIC_ERROR);
		}
		if (ret.ReturnType->SymbolType() == SymbolType::VARIABLE) {
			ret.isLValue = true; //if the symbol is a variable, it is an lvalue
		}
		return ret;
	}

#pragma endregion

}

