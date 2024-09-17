
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLParser : public antlr4::Parser {
public:
  enum {
    CLASS = 1, NAMESPACE = 2, INBUILD_TYPE = 3, TEMPLATE = 4, ASYNC = 5, 
    SYNC = 6, INTERNAL = 7, NULL_ = 8, CUSTOM_KEYWORD = 9, CUSTOM_FLOW_CONTROL = 10, 
    CUSTOM_OPERATOR = 11, ASSIGN = 12, PLUS = 13, MINUS = 14, MULT = 15, 
    DIV = 16, MOD = 17, HASH = 18, INCREMENT = 19, DECREMENT = 20, B_LEFT = 21, 
    B_RIGHT = 22, EQUALS = 23, LESS = 24, LARGER = 25, NOT = 26, LESS_EQ = 27, 
    LARGER_EQ = 28, COMMA = 29, DOT = 30, SEMI = 31, LS = 32, RS = 33, LC = 34, 
    RC = 35, LA = 36, RA = 37, ATRIBUTE = 38, INT = 39, FLOAT = 40, CHAR = 41, 
    STRING = 42, BOOL = 43, COMMENT = 44, WS = 45, ID = 46
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleCustomKeyDeclaration = 2, RuleCustomOperatorDeclaration = 3, 
    RuleCustomControlFlowDeclaration = 4, RuleNamespaceDeclaration = 5, 
    RuleClassDeclaration = 6, RuleClassMember = 7, RuleFunctionDeclaration = 8, 
    RuleFunctionDeclarationWithAtr = 9, RuleVarDeclaration = 10, RuleVarDeclarationWithAtr = 11, 
    RuleParameterList = 12, RuleParameter = 13, RuleAssignment = 14, RuleTypeSpacifier = 15, 
    RuleExpression = 16, RulePrimary = 17, RuleExpressionStatement = 18, 
    RuleAttribute = 19, RuleAttributeParameterList = 20, RuleAttributeParameter = 21, 
    RuleGenericParameterList = 22, RuleBlock = 23
  };

  explicit USLParser(antlr4::TokenStream *input);

  USLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~USLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class CustomKeyDeclarationContext;
  class CustomOperatorDeclarationContext;
  class CustomControlFlowDeclarationContext;
  class NamespaceDeclarationContext;
  class ClassDeclarationContext;
  class ClassMemberContext;
  class FunctionDeclarationContext;
  class FunctionDeclarationWithAtrContext;
  class VarDeclarationContext;
  class VarDeclarationWithAtrContext;
  class ParameterListContext;
  class ParameterContext;
  class AssignmentContext;
  class TypeSpacifierContext;
  class ExpressionContext;
  class PrimaryContext;
  class ExpressionStatementContext;
  class AttributeContext;
  class AttributeParameterListContext;
  class AttributeParameterContext;
  class GenericParameterListContext;
  class BlockContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CustomControlFlowDeclarationContext *customControlFlowDeclaration();
    CustomOperatorDeclarationContext *customOperatorDeclaration();
    CustomKeyDeclarationContext *customKeyDeclaration();
    NamespaceDeclarationContext *namespaceDeclaration();
    ClassDeclarationContext *classDeclaration();
    FunctionDeclarationWithAtrContext *functionDeclarationWithAtr();
    FunctionDeclarationContext *functionDeclaration();
    VarDeclarationWithAtrContext *varDeclarationWithAtr();
    VarDeclarationContext *varDeclaration();
    AssignmentContext *assignment();
    ExpressionStatementContext *expressionStatement();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  CustomKeyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CustomKeyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CUSTOM_KEYWORD();
    antlr4::tree::TerminalNode *ID();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CustomKeyDeclarationContext* customKeyDeclaration();

  class  CustomOperatorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CustomOperatorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *CUSTOM_OPERATOR();
    antlr4::tree::TerminalNode *ID();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CustomOperatorDeclarationContext* customOperatorDeclaration();

  class  CustomControlFlowDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CustomControlFlowDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CUSTOM_FLOW_CONTROL();
    antlr4::tree::TerminalNode *ID();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CustomControlFlowDeclarationContext* customControlFlowDeclaration();

  class  NamespaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *ID();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceDeclarationContext* namespaceDeclaration();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<ClassMemberContext *> classMember();
    ClassMemberContext* classMember(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassMemberContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclarationContext *varDeclaration();
    FunctionDeclarationContext *functionDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassMemberContext* classMember();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *RS();
    BlockContext *block();
    antlr4::tree::TerminalNode *ASYNC();
    antlr4::tree::TerminalNode *SYNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionDeclarationWithAtrContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationWithAtrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *RS();
    BlockContext *block();
    antlr4::tree::TerminalNode *ASYNC();
    antlr4::tree::TerminalNode *SYNC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationWithAtrContext* functionDeclarationWithAtr();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclarationContext* varDeclaration();

  class  VarDeclarationWithAtrContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationWithAtrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarDeclarationWithAtrContext* varDeclarationWithAtr();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParameterContext* parameter();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  TypeSpacifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpacifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INBUILD_TYPE();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *TEMPLATE();
    antlr4::tree::TerminalNode *LESS();
    TypeSpacifierContext *typeSpacifier();
    antlr4::tree::TerminalNode *LARGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpacifierContext* typeSpacifier();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    antlr4::tree::TerminalNode *RS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryContext* primary();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LA();
    antlr4::tree::TerminalNode *ATRIBUTE();
    antlr4::tree::TerminalNode *LS();
    AttributeParameterListContext *attributeParameterList();
    antlr4::tree::TerminalNode *RS();
    antlr4::tree::TerminalNode *RA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeContext* attribute();

  class  AttributeParameterListContext : public antlr4::ParserRuleContext {
  public:
    AttributeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeParameterContext *> attributeParameter();
    AttributeParameterContext* attributeParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    GenericParameterListContext *genericParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeParameterListContext* attributeParameterList();

  class  AttributeParameterContext : public antlr4::ParserRuleContext {
  public:
    AttributeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeParameterContext* attributeParameter();

  class  GenericParameterListContext : public antlr4::ParserRuleContext {
  public:
    GenericParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GenericParameterListContext* genericParameterList();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LC();
    antlr4::tree::TerminalNode *RC();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

