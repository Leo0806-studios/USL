
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "USLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by USLParser.
 */
class  USLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by USLParser.
   */
    virtual std::any visitProgram(USLParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(USLParser::StatementContext *context) = 0;

    virtual std::any visitCustomKeyDeclaration(USLParser::CustomKeyDeclarationContext *context) = 0;

    virtual std::any visitCustomOperatorDeclaration(USLParser::CustomOperatorDeclarationContext *context) = 0;

    virtual std::any visitCustomControlFlowDeclaration(USLParser::CustomControlFlowDeclarationContext *context) = 0;

    virtual std::any visitNamespaceDeclaration(USLParser::NamespaceDeclarationContext *context) = 0;

    virtual std::any visitClassDeclaration(USLParser::ClassDeclarationContext *context) = 0;

    virtual std::any visitClassMember(USLParser::ClassMemberContext *context) = 0;

    virtual std::any visitFunctionDeclaration(USLParser::FunctionDeclarationContext *context) = 0;

    virtual std::any visitFunctionDeclarationWithAtr(USLParser::FunctionDeclarationWithAtrContext *context) = 0;

    virtual std::any visitVarDeclaration(USLParser::VarDeclarationContext *context) = 0;

    virtual std::any visitVarDeclarationWithAtr(USLParser::VarDeclarationWithAtrContext *context) = 0;

    virtual std::any visitMemberAcces(USLParser::MemberAccesContext *context) = 0;

    virtual std::any visitFuncCall(USLParser::FuncCallContext *context) = 0;

    virtual std::any visitParameterList(USLParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(USLParser::ParameterContext *context) = 0;

    virtual std::any visitAssignment(USLParser::AssignmentContext *context) = 0;

    virtual std::any visitTemplateDeclaration(USLParser::TemplateDeclarationContext *context) = 0;

    virtual std::any visitTypeSpecifier(USLParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitExpression(USLParser::ExpressionContext *context) = 0;

    virtual std::any visitPrimary(USLParser::PrimaryContext *context) = 0;

    virtual std::any visitExpressionStatement(USLParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitAttribute(USLParser::AttributeContext *context) = 0;

    virtual std::any visitAttributeParameterList(USLParser::AttributeParameterListContext *context) = 0;

    virtual std::any visitAttributeParameter(USLParser::AttributeParameterContext *context) = 0;

    virtual std::any visitGenericParameterList(USLParser::GenericParameterListContext *context) = 0;

    virtual std::any visitBlock(USLParser::BlockContext *context) = 0;


};

