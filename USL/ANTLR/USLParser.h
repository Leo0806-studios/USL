
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    NAMESPACE = 8, CLASS = 9, ENUM = 10, ATRIBUTE = 11, BYTE = 12, SHORT = 13, 
    INT = 14, LONG = 15, FLOAT = 16, DOUBLE = 17, HASH = 18, STRING = 19, 
    CHAR = 20, VOID = 21, NULL_ = 22, BOOL = 23, SIGNDNES = 24, TEMPLATE = 25, 
    ASYNC = 26, SYNC = 27, INTERNAL = 28, OPPERATOR = 29, UNSAFE = 30, STACK_ALLOC = 31, 
    REINTERPRET_CAST = 32, STATIC_CAST = 33, UNSAFE_CAST = 34, CUSTOM_OP = 35, 
    CUSTOM_KEYWORD = 36, CUSTOM_CONTROL = 37, TYPE_QUALIFYERS = 38, STATIC = 39, 
    VIRTUAL = 40, NOEXCEPT = 41, OVERRIDE = 42, NULLPTR = 43, RETURN = 44, 
    REQUIRES = 45, AUTO = 46, CALL = 47, ASSIGN_OP = 48, PLUS_OP = 49, MINUS_OP = 50, 
    MULT_OP = 51, DIV_OP = 52, MOD_OP = 53, HASH_OP = 54, DEREF = 55, INCREMENT = 56, 
    DECREMENT = 57, B_LEFT = 58, B_RIGHT = 59, EQUALS = 60, LESS = 61, LARGER = 62, 
    NOT = 63, LESS_EQ = 64, LARGER_EQ = 65, SCOPE_RESSOLUTION_OP = 66, INT_LITTERAL = 67, 
    FLOAT_LITTERAL = 68, CHAR_LITTERAL = 69, STRING_LITTERAL = 70, BOOL_LITTERAL = 71, 
    COMMENT = 72, WS = 73, ID = 74, CUSTOM_OP_SYMBOLS = 75
  };

  enum {
    RuleProgram = 0, RuleGlobal_statement = 1, RuleStatement = 2, RuleExpression = 3, 
    RuleBasic_block = 4, RuleClass_delcaratiom = 5, RuleNamespace_declaration = 6, 
    RuleAtribute_declaration = 7, RuleFunction_declaration = 8, RuleEnum_declaration = 9, 
    RuleVar_declaration = 10, RuleCustom_opperator_sym = 11, RuleNoexcept_specifyer = 12, 
    RuleAssignment_expr = 13, RuleEquality_expr = 14, RuleComparison_expr = 15, 
    RuleBitshift_expr = 16, RuleAdditive_expr = 17, RuleMultiplicative_expr = 18, 
    RuleUnary_expr = 19, RulePrimary_expr = 20, RuleFunction_call = 21, 
    RuleAtribute_constructor = 22, RuleAtrribute_requires = 23, RuleImplements_function = 24, 
    RuleImplements_Var = 25, RulePrimitives = 26, RuleIntegral_type = 27, 
    RuleLitteral = 28, RuleType = 29, RuleParameter = 30, RuleParameterList = 31, 
    RuleClassmember_declaration = 32, RuleOperator_symbols = 33, RuleScope_ressolution = 34
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
  class Global_statementContext;
  class StatementContext;
  class ExpressionContext;
  class Basic_blockContext;
  class Class_delcaratiomContext;
  class Namespace_declarationContext;
  class Atribute_declarationContext;
  class Function_declarationContext;
  class Enum_declarationContext;
  class Var_declarationContext;
  class Custom_opperator_symContext;
  class Noexcept_specifyerContext;
  class Assignment_exprContext;
  class Equality_exprContext;
  class Comparison_exprContext;
  class Bitshift_exprContext;
  class Additive_exprContext;
  class Multiplicative_exprContext;
  class Unary_exprContext;
  class Primary_exprContext;
  class Function_callContext;
  class Atribute_constructorContext;
  class Atrribute_requiresContext;
  class Implements_functionContext;
  class Implements_VarContext;
  class PrimitivesContext;
  class Integral_typeContext;
  class LitteralContext;
  class TypeContext;
  class ParameterContext;
  class ParameterListContext;
  class Classmember_declarationContext;
  class Operator_symbolsContext;
  class Scope_ressolutionContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Global_statementContext *> global_statement();
    Global_statementContext* global_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Global_statementContext : public antlr4::ParserRuleContext {
  public:
    Global_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Class_delcaratiomContext *class_delcaratiom();
    Namespace_declarationContext *namespace_declaration();
    Enum_declarationContext *enum_declaration();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_statementContext* global_statement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_declarationContext *var_declaration();
    Function_declarationContext *function_declaration();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_exprContext *assignment_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  Basic_blockContext : public antlr4::ParserRuleContext {
  public:
    Basic_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Basic_blockContext* basic_block();

  class  Class_delcaratiomContext : public antlr4::ParserRuleContext {
  public:
    Class_delcaratiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *ID();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_delcaratiomContext* class_delcaratiom();

  class  Namespace_declarationContext : public antlr4::ParserRuleContext {
  public:
    Namespace_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *ID();
    std::vector<Global_statementContext *> global_statement();
    Global_statementContext* global_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Namespace_declarationContext* namespace_declaration();

  class  Atribute_declarationContext : public antlr4::ParserRuleContext {
  public:
    Atribute_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATRIBUTE();
    antlr4::tree::TerminalNode *ID();
    Atribute_constructorContext *atribute_constructor();
    Atrribute_requiresContext *atrribute_requires();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atribute_declarationContext* atribute_declaration();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *VOID();
    TypeContext *type();
    antlr4::tree::TerminalNode *STATIC();
    std::vector<antlr4::tree::TerminalNode *> TYPE_QUALIFYERS();
    antlr4::tree::TerminalNode* TYPE_QUALIFYERS(size_t i);
    antlr4::tree::TerminalNode *VIRTUAL();
    ParameterListContext *parameterList();
    Noexcept_specifyerContext *noexcept_specifyer();
    antlr4::tree::TerminalNode *OVERRIDE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

  class  Enum_declarationContext : public antlr4::ParserRuleContext {
  public:
    Enum_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    Integral_typeContext *integral_type();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT_LITTERAL();
    antlr4::tree::TerminalNode* INT_LITTERAL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_declarationContext* enum_declaration();

  class  Var_declarationContext : public antlr4::ParserRuleContext {
  public:
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *TYPE_QUALIFYERS();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_declarationContext* var_declaration();

  class  Custom_opperator_symContext : public antlr4::ParserRuleContext {
  public:
    Custom_opperator_symContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CUSTOM_OP();
    antlr4::tree::TerminalNode *CUSTOM_OP_SYMBOLS();
    ParameterListContext *parameterList();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Custom_opperator_symContext* custom_opperator_sym();

  class  Noexcept_specifyerContext : public antlr4::ParserRuleContext {
  public:
    Noexcept_specifyerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOEXCEPT();
    antlr4::tree::TerminalNode *BOOL_LITTERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Noexcept_specifyerContext* noexcept_specifyer();

  class  Assignment_exprContext : public antlr4::ParserRuleContext {
  public:
    Assignment_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Equality_exprContext *equality_expr();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    Assignment_exprContext *assignment_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_exprContext* assignment_expr();

  class  Equality_exprContext : public antlr4::ParserRuleContext {
  public:
    Equality_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Comparison_exprContext *> comparison_expr();
    Comparison_exprContext* comparison_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Equality_exprContext* equality_expr();

  class  Comparison_exprContext : public antlr4::ParserRuleContext {
  public:
    Comparison_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bitshift_exprContext *> bitshift_expr();
    Bitshift_exprContext* bitshift_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS();
    antlr4::tree::TerminalNode* LESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LARGER();
    antlr4::tree::TerminalNode* LARGER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LESS_EQ();
    antlr4::tree::TerminalNode* LESS_EQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LARGER_EQ();
    antlr4::tree::TerminalNode* LARGER_EQ(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_exprContext* comparison_expr();

  class  Bitshift_exprContext : public antlr4::ParserRuleContext {
  public:
    Bitshift_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Additive_exprContext *> additive_expr();
    Additive_exprContext* additive_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> B_LEFT();
    antlr4::tree::TerminalNode* B_LEFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> B_RIGHT();
    antlr4::tree::TerminalNode* B_RIGHT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bitshift_exprContext* bitshift_expr();

  class  Additive_exprContext : public antlr4::ParserRuleContext {
  public:
    Additive_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multiplicative_exprContext *> multiplicative_expr();
    Multiplicative_exprContext* multiplicative_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PLUS_OP();
    antlr4::tree::TerminalNode* PLUS_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MINUS_OP();
    antlr4::tree::TerminalNode* MINUS_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_exprContext* additive_expr();

  class  Multiplicative_exprContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unary_exprContext *> unary_expr();
    Unary_exprContext* unary_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULT_OP();
    antlr4::tree::TerminalNode* MULT_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIV_OP();
    antlr4::tree::TerminalNode* DIV_OP(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MOD_OP();
    antlr4::tree::TerminalNode* MOD_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_exprContext* multiplicative_expr();

  class  Unary_exprContext : public antlr4::ParserRuleContext {
  public:
    Unary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Primary_exprContext *primary_expr();
    antlr4::tree::TerminalNode *PLUS_OP();
    antlr4::tree::TerminalNode *MINUS_OP();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_exprContext* unary_expr();

  class  Primary_exprContext : public antlr4::ParserRuleContext {
  public:
    Primary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    antlr4::tree::TerminalNode *ID();
    LitteralContext *litteral();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_exprContext* primary_expr();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *ID();
    Scope_ressolutionContext *scope_ressolution();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Atribute_constructorContext : public antlr4::ParserRuleContext {
  public:
    Atribute_constructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atribute_constructorContext* atribute_constructor();

  class  Atrribute_requiresContext : public antlr4::ParserRuleContext {
  public:
    Atrribute_requiresContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRES();
    std::vector<Implements_functionContext *> implements_function();
    Implements_functionContext* implements_function(size_t i);
    std::vector<Implements_VarContext *> implements_Var();
    Implements_VarContext* implements_Var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atrribute_requiresContext* atrribute_requires();

  class  Implements_functionContext : public antlr4::ParserRuleContext {
  public:
    Implements_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    ParameterListContext *parameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implements_functionContext* implements_function();

  class  Implements_VarContext : public antlr4::ParserRuleContext {
  public:
    Implements_VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Implements_VarContext* implements_Var();

  class  PrimitivesContext : public antlr4::ParserRuleContext {
  public:
    PrimitivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitivesContext* primitives();

  class  Integral_typeContext : public antlr4::ParserRuleContext {
  public:
    Integral_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *SIGNDNES();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integral_typeContext* integral_type();

  class  LitteralContext : public antlr4::ParserRuleContext {
  public:
    LitteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITTERAL();
    antlr4::tree::TerminalNode *INT_LITTERAL();
    antlr4::tree::TerminalNode *FLOAT_LITTERAL();
    antlr4::tree::TerminalNode *CHAR_LITTERAL();
    antlr4::tree::TerminalNode *BOOL_LITTERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LitteralContext* litteral();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitivesContext *primitives();
    antlr4::tree::TerminalNode *ID();
    Scope_ressolutionContext *scope_ressolution();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> TYPE_QUALIFYERS();
    antlr4::tree::TerminalNode* TYPE_QUALIFYERS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  Classmember_declarationContext : public antlr4::ParserRuleContext {
  public:
    Classmember_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_declarationContext *function_declaration();
    Var_declarationContext *var_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Classmember_declarationContext* classmember_declaration();

  class  Operator_symbolsContext : public antlr4::ParserRuleContext {
  public:
    Operator_symbolsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CUSTOM_OP_SYMBOLS();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LARGER();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LESS_EQ();
    antlr4::tree::TerminalNode *LARGER_EQ();
    antlr4::tree::TerminalNode *B_LEFT();
    antlr4::tree::TerminalNode *B_RIGHT();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Operator_symbolsContext* operator_symbols();

  class  Scope_ressolutionContext : public antlr4::ParserRuleContext {
  public:
    Scope_ressolutionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCOPE_RESSOLUTION_OP();
    antlr4::tree::TerminalNode* SCOPE_RESSOLUTION_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scope_ressolutionContext* scope_ressolution();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

