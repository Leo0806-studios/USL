
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "USLVisitor.h"


/**
 * This class provides an empty implementation of USLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  USLBaseVisitor : public USLVisitor {
public:

  virtual std::any visitProgram(USLParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(USLParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCustomKeyDeclaration(USLParser::CustomKeyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCustomOperatorDeclaration(USLParser::CustomOperatorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCustomControlFlowDeclaration(USLParser::CustomControlFlowDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceDeclaration(USLParser::NamespaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDeclaration(USLParser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassMember(USLParser::ClassMemberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclaration(USLParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDeclarationWithAtr(USLParser::FunctionDeclarationWithAtrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclaration(USLParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDeclarationWithAtr(USLParser::VarDeclarationWithAtrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberAcces(USLParser::MemberAccesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(USLParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(USLParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(USLParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(USLParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateDeclaration(USLParser::TemplateDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(USLParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(USLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(USLParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(USLParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute(USLParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeParameterList(USLParser::AttributeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeParameter(USLParser::AttributeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericParameterList(USLParser::GenericParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(USLParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }


};

