
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, NAMESPACE = 12, CLASS = 13, 
    STRUCT = 14, ENUM = 15, ATRIBUTE = 16, BYTE = 17, SHORT = 18, INT = 19, 
    LONG = 20, FLOAT = 21, DOUBLE = 22, LONGDOUBLE = 23, HASH = 24, STRING = 25, 
    CHAR = 26, VOID = 27, NULLPTR_T = 28, BOOL = 29, M128 = 30, M128I = 31, 
    M128D = 32, M256 = 33, M256I = 34, M256D = 35, M512 = 36, M512I = 37, 
    M512D = 38, NULL_ = 39, NULLPTR = 40, BOOL_LITTERAL_TRUE = 41, BOOL_LITTERAL_FALSE = 42, 
    TEMPLATE = 43, IF = 44, ELSE = 45, WHILE = 46, DO = 47, SWITCH = 48, 
    CASE = 49, GOTO = 50, BREAK = 51, DEFAULT = 52, LABLE = 53, FOR = 54, 
    ASYNC = 55, SYNC = 56, PUBLIC = 57, PRIVATE = 58, PROTECTED = 59, INTERNAL = 60, 
    ASSUME = 61, NORVO = 62, UNROLL = 63, INTRINSIC = 64, OVERLAPSWITH = 65, 
    JUMPTABLE = 66, VECTORIZE = 67, OPPERATOR = 68, STACK_ALLOC = 69, UNSAFE = 70, 
    REINTERPRET_CAST = 71, STATIC_CAST = 72, UNSAFE_CAST = 73, CONST_CAST = 74, 
    THROW = 75, THROWS = 76, MAYBE = 77, RETURN = 78, CALL = 79, STATIC = 80, 
    UNSIGNED = 81, VOLATILE = 82, CONST = 83, VIRTUAL = 84, OVERRIDE = 85, 
    AUTO = 86, REQUIRES = 87, EXTERN = 88, NEW = 89, DELETE = 90, ASSIGN_OP = 91, 
    PLUS_OP = 92, MINUS_OP = 93, MULT_OP = 94, DIV_OP = 95, MOD_OP = 96, 
    HASH_OP = 97, INCREMENT = 98, DECREMENT = 99, FMA_OP = 100, DEREF = 101, 
    MEMBER_ACCES = 102, B_LEFT = 103, B_RIGHT = 104, EQUALS = 105, LESS = 106, 
    LARGER = 107, NOT = 108, LESS_EQ = 109, LARGER_EQ = 110, SCOPE_RESSOLUTION_OP = 111, 
    INT_LITTERAL = 112, UINT_LITTERAL = 113, FLOAT_LITTERAL = 114, CHAR_LITTERAL = 115, 
    STRING_LITTERAL = 116, COMMENT = 117, WS = 118, ID = 119
  };

  enum {
    RuleProgram = 0, RuleGlobal_statement = 1, RuleStatement = 2, RuleNamespace_declaration = 3, 
    RuleClass_declaration = 4, RuleEnum_declaration = 5, RuleAttribute_declaration = 6, 
    RuleFunction_declaration = 7, RuleBasic_block = 8, RuleVariable_declaration = 9, 
    RuleIf_statement = 10, RuleElse_statement = 11, RuleWhile_statement = 12, 
    RuleDo_statement = 13, RuleFor_statement = 14, RuleSwitch_statement = 15, 
    RuleCase_statement = 16, RuleDefault_statement = 17, RuleGoto_statement = 18, 
    RuleLable_statement = 19, RuleThrow_statement = 20, RuleExpression_statement = 21, 
    RuleExpression = 22, RuleAssignment_expr = 23, RuleEquality_expr = 24, 
    RuleComparison_expr = 25, RuleBitshift_expr = 26, RuleAdditive_expr = 27, 
    RuleMultiplicative_expr = 28, RulePostfix_expr = 29, RulePrefix_expr = 30, 
    RulePrimary_expr = 31, RuleAcces_modifiers = 32, RuleThrows_postfix = 33, 
    RuleQuailified_name = 34, RuleAttribute_addition = 35, RuleAttribute = 36, 
    RuleComparision_operator = 37, RuleBitshift_operator = 38, RuleAdditive_operator = 39, 
    RuleMultiplicative_operator = 40, RulePrefix_operator = 41, RulePostfix_operator = 42, 
    RuleCall_operator = 43, RuleIndex_operator = 44, RuleCvu_type = 45, 
    RulePointer_type = 46, RuleArray_type = 47, RuleType = 48, RulePrimitive = 49, 
    RuleIntegral_type = 50, RuleFloating_type = 51, RuleVector_type = 52, 
    RuleParemeter_list = 53, RuleParameter = 54, RuleLitteral = 55, RuleBool_litteral = 56, 
    RuleCvu_decorators = 57, RuleScoperesolution_list = 58, RuleError_recovery = 59
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
  class Namespace_declarationContext;
  class Class_declarationContext;
  class Enum_declarationContext;
  class Attribute_declarationContext;
  class Function_declarationContext;
  class Basic_blockContext;
  class Variable_declarationContext;
  class If_statementContext;
  class Else_statementContext;
  class While_statementContext;
  class Do_statementContext;
  class For_statementContext;
  class Switch_statementContext;
  class Case_statementContext;
  class Default_statementContext;
  class Goto_statementContext;
  class Lable_statementContext;
  class Throw_statementContext;
  class Expression_statementContext;
  class ExpressionContext;
  class Assignment_exprContext;
  class Equality_exprContext;
  class Comparison_exprContext;
  class Bitshift_exprContext;
  class Additive_exprContext;
  class Multiplicative_exprContext;
  class Postfix_exprContext;
  class Prefix_exprContext;
  class Primary_exprContext;
  class Acces_modifiersContext;
  class Throws_postfixContext;
  class Quailified_nameContext;
  class Attribute_additionContext;
  class AttributeContext;
  class Comparision_operatorContext;
  class Bitshift_operatorContext;
  class Additive_operatorContext;
  class Multiplicative_operatorContext;
  class Prefix_operatorContext;
  class Postfix_operatorContext;
  class Call_operatorContext;
  class Index_operatorContext;
  class Cvu_typeContext;
  class Pointer_typeContext;
  class Array_typeContext;
  class TypeContext;
  class PrimitiveContext;
  class Integral_typeContext;
  class Floating_typeContext;
  class Vector_typeContext;
  class Paremeter_listContext;
  class ParameterContext;
  class LitteralContext;
  class Bool_litteralContext;
  class Cvu_decoratorsContext;
  class Scoperesolution_listContext;
  class Error_recoveryContext; 

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
    Namespace_declarationContext *namespace_declaration();
    Class_declarationContext *class_declaration();
    Enum_declarationContext *enum_declaration();
    Attribute_declarationContext *attribute_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Global_statementContext* global_statement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declarationContext *variable_declaration();
    Function_declarationContext *function_declaration();
    Goto_statementContext *goto_statement();
    Lable_statementContext *lable_statement();
    While_statementContext *while_statement();
    If_statementContext *if_statement();
    For_statementContext *for_statement();
    Switch_statementContext *switch_statement();
    Expression_statementContext *expression_statement();
    Error_recoveryContext *error_recovery();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Namespace_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *NamespaceName = nullptr;
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

  class  Class_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *TypeName = nullptr;
    Class_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_blockContext *basic_block();
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *ID();
    Attribute_additionContext *attribute_addition();
    Quailified_nameContext *quailified_name();
    antlr4::tree::TerminalNode *PUBLIC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_declarationContext* class_declaration();

  class  Enum_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *EnumName = nullptr;
    USLParser::PrimitiveContext *EnumType = nullptr;
    Enum_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    Attribute_additionContext *attribute_addition();
    std::vector<antlr4::tree::TerminalNode *> ASSIGN_OP();
    antlr4::tree::TerminalNode* ASSIGN_OP(size_t i);
    std::vector<LitteralContext *> litteral();
    LitteralContext* litteral(size_t i);
    PrimitiveContext *primitive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Enum_declarationContext* enum_declaration();

  class  Attribute_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *AttributeName = nullptr;
    Attribute_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATRIBUTE();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_declarationContext* attribute_declaration();

  class  Function_declarationContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Cvu_typeContext *ReturnType = nullptr;
    antlr4::Token *FunctionName = nullptr;
    Function_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Acces_modifiersContext *acces_modifiers();
    Basic_blockContext *basic_block();
    Cvu_typeContext *cvu_type();
    antlr4::tree::TerminalNode *ID();
    Attribute_additionContext *attribute_addition();
    Paremeter_listContext *paremeter_list();
    antlr4::tree::TerminalNode *CONST();
    Throws_postfixContext *throws_postfix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declarationContext* function_declaration();

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

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Cvu_typeContext *Type = nullptr;
    antlr4::Token *name = nullptr;
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cvu_typeContext *cvu_type();
    antlr4::tree::TerminalNode *ID();
    Acces_modifiersContext *acces_modifiers();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    Basic_blockContext *basic_block();
    Else_statementContext *else_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Else_statementContext : public antlr4::ParserRuleContext {
  public:
    Else_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    If_statementContext *if_statement();
    Basic_blockContext *basic_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_statementContext* else_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExpressionContext *expression();
    Basic_blockContext *basic_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  Do_statementContext : public antlr4::ParserRuleContext {
  public:
    Do_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    Basic_blockContext *basic_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_statementContext* do_statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Basic_blockContext *basic_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

  class  Switch_statementContext : public antlr4::ParserRuleContext {
  public:
    Switch_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    ExpressionContext *expression();
    std::vector<Case_statementContext *> case_statement();
    Case_statementContext* case_statement(size_t i);
    Default_statementContext *default_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Switch_statementContext* switch_statement();

  class  Case_statementContext : public antlr4::ParserRuleContext {
  public:
    Case_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExpressionContext *expression();
    Basic_blockContext *basic_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Case_statementContext* case_statement();

  class  Default_statementContext : public antlr4::ParserRuleContext {
  public:
    Default_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    Basic_blockContext *basic_block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Default_statementContext* default_statement();

  class  Goto_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Target = nullptr;
    Goto_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Goto_statementContext* goto_statement();

  class  Lable_statementContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *Name = nullptr;
    Lable_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LABLE();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Lable_statementContext* lable_statement();

  class  Throw_statementContext : public antlr4::ParserRuleContext {
  public:
    Throw_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throw_statementContext* throw_statement();

  class  Expression_statementContext : public antlr4::ParserRuleContext {
  public:
    Expression_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Expression_statementContext* expression_statement();

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

  class  Assignment_exprContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Equality_exprContext *left = nullptr;
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
    USLParser::Comparison_exprContext *left = nullptr;
    Equality_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Comparison_exprContext *> comparison_expr();
    Comparison_exprContext* comparison_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Equality_exprContext* equality_expr();

  class  Comparison_exprContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Bitshift_exprContext *left = nullptr;
    Comparison_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Bitshift_exprContext *> bitshift_expr();
    Bitshift_exprContext* bitshift_expr(size_t i);
    std::vector<Comparision_operatorContext *> comparision_operator();
    Comparision_operatorContext* comparision_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparison_exprContext* comparison_expr();

  class  Bitshift_exprContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Additive_exprContext *left = nullptr;
    Bitshift_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Additive_exprContext *> additive_expr();
    Additive_exprContext* additive_expr(size_t i);
    std::vector<Bitshift_operatorContext *> bitshift_operator();
    Bitshift_operatorContext* bitshift_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bitshift_exprContext* bitshift_expr();

  class  Additive_exprContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Multiplicative_exprContext *left = nullptr;
    Additive_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multiplicative_exprContext *> multiplicative_expr();
    Multiplicative_exprContext* multiplicative_expr(size_t i);
    std::vector<Additive_operatorContext *> additive_operator();
    Additive_operatorContext* additive_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_exprContext* additive_expr();

  class  Multiplicative_exprContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Postfix_exprContext *left = nullptr;
    Multiplicative_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Postfix_exprContext *> postfix_expr();
    Postfix_exprContext* postfix_expr(size_t i);
    std::vector<Multiplicative_operatorContext *> multiplicative_operator();
    Multiplicative_operatorContext* multiplicative_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_exprContext* multiplicative_expr();

  class  Postfix_exprContext : public antlr4::ParserRuleContext {
  public:
    Postfix_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prefix_exprContext *prefix_expr();
    std::vector<Postfix_operatorContext *> postfix_operator();
    Postfix_operatorContext* postfix_operator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Postfix_exprContext* postfix_expr();

  class  Prefix_exprContext : public antlr4::ParserRuleContext {
  public:
    Prefix_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prefix_operatorContext *prefix_operator();
    Prefix_exprContext *prefix_expr();
    Primary_exprContext *primary_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prefix_exprContext* prefix_expr();

  class  Primary_exprContext : public antlr4::ParserRuleContext {
  public:
    Primary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Quailified_nameContext *quailified_name();
    LitteralContext *litteral();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Primary_exprContext* primary_expr();

  class  Acces_modifiersContext : public antlr4::ParserRuleContext {
  public:
    Acces_modifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PROTECTED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Acces_modifiersContext* acces_modifiers();

  class  Throws_postfixContext : public antlr4::ParserRuleContext {
  public:
    Throws_postfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROWS();
    std::vector<Quailified_nameContext *> quailified_name();
    Quailified_nameContext* quailified_name(size_t i);
    antlr4::tree::TerminalNode *MAYBE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Throws_postfixContext* throws_postfix();

  class  Quailified_nameContext : public antlr4::ParserRuleContext {
  public:
    Quailified_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Scoperesolution_listContext *scoperesolution_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Quailified_nameContext* quailified_name();

  class  Attribute_additionContext : public antlr4::ParserRuleContext {
  public:
    Attribute_additionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attribute_additionContext* attribute_addition();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Quailified_nameContext *quailified_name();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  Comparision_operatorContext : public antlr4::ParserRuleContext {
  public:
    Comparision_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LARGER();
    antlr4::tree::TerminalNode *LESS_EQ();
    antlr4::tree::TerminalNode *LARGER_EQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comparision_operatorContext* comparision_operator();

  class  Bitshift_operatorContext : public antlr4::ParserRuleContext {
  public:
    Bitshift_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *B_LEFT();
    antlr4::tree::TerminalNode *B_RIGHT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bitshift_operatorContext* bitshift_operator();

  class  Additive_operatorContext : public antlr4::ParserRuleContext {
  public:
    Additive_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS_OP();
    antlr4::tree::TerminalNode *MINUS_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Additive_operatorContext* additive_operator();

  class  Multiplicative_operatorContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT_OP();
    antlr4::tree::TerminalNode *DIV_OP();
    antlr4::tree::TerminalNode *MOD_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multiplicative_operatorContext* multiplicative_operator();

  class  Prefix_operatorContext : public antlr4::ParserRuleContext {
  public:
    Prefix_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *HASH_OP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Prefix_operatorContext* prefix_operator();

  class  Postfix_operatorContext : public antlr4::ParserRuleContext {
  public:
    Postfix_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Call_operatorContext *call_operator();
    Index_operatorContext *index_operator();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Postfix_operatorContext* postfix_operator();

  class  Call_operatorContext : public antlr4::ParserRuleContext {
  public:
    Call_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_operatorContext* call_operator();

  class  Index_operatorContext : public antlr4::ParserRuleContext {
  public:
    Index_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Index_operatorContext* index_operator();

  class  Cvu_typeContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Array_typeContext *IsArray = nullptr;
    USLParser::Pointer_typeContext *IsPointer = nullptr;
    Cvu_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cvu_decoratorsContext *cvu_decorators();
    TypeContext *type();
    Array_typeContext *array_type();
    Pointer_typeContext *pointer_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cvu_typeContext* cvu_type();

  class  Pointer_typeContext : public antlr4::ParserRuleContext {
  public:
    Pointer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT_OP();
    Cvu_decoratorsContext *cvu_decorators();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pointer_typeContext* pointer_type();

  class  Array_typeContext : public antlr4::ParserRuleContext {
  public:
    Array_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_typeContext* array_type();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Quailified_nameContext *quailified_name();
    antlr4::tree::TerminalNode *AUTO();
    PrimitiveContext *primitive();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  PrimitiveContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integral_typeContext *integral_type();
    Floating_typeContext *floating_type();
    Vector_typeContext *vector_type();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *NULLPTR_T();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveContext* primitive();

  class  Integral_typeContext : public antlr4::ParserRuleContext {
  public:
    Integral_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *UNSIGNED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integral_typeContext* integral_type();

  class  Floating_typeContext : public antlr4::ParserRuleContext {
  public:
    Floating_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *LONGDOUBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Floating_typeContext* floating_type();

  class  Vector_typeContext : public antlr4::ParserRuleContext {
  public:
    Vector_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *M128();
    antlr4::tree::TerminalNode *M128D();
    antlr4::tree::TerminalNode *M128I();
    antlr4::tree::TerminalNode *M256();
    antlr4::tree::TerminalNode *M256D();
    antlr4::tree::TerminalNode *M256I();
    antlr4::tree::TerminalNode *M512();
    antlr4::tree::TerminalNode *M512D();
    antlr4::tree::TerminalNode *M512I();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Vector_typeContext* vector_type();

  class  Paremeter_listContext : public antlr4::ParserRuleContext {
  public:
    Paremeter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Paremeter_listContext* paremeter_list();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    USLParser::Cvu_typeContext *Type = nullptr;
    antlr4::Token *ParameterName = nullptr;
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cvu_typeContext *cvu_type();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  LitteralContext : public antlr4::ParserRuleContext {
  public:
    LitteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITTERAL();
    antlr4::tree::TerminalNode *FLOAT_LITTERAL();
    antlr4::tree::TerminalNode *STRING_LITTERAL();
    antlr4::tree::TerminalNode *CHAR_LITTERAL();
    Bool_litteralContext *bool_litteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LitteralContext* litteral();

  class  Bool_litteralContext : public antlr4::ParserRuleContext {
  public:
    Bool_litteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOL_LITTERAL_TRUE();
    antlr4::tree::TerminalNode *BOOL_LITTERAL_FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bool_litteralContext* bool_litteral();

  class  Cvu_decoratorsContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *consts = nullptr;
    antlr4::Token *volatiles = nullptr;
    antlr4::Token *unsafes = nullptr;
    Cvu_decoratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CONST();
    antlr4::tree::TerminalNode* CONST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VOLATILE();
    antlr4::tree::TerminalNode* VOLATILE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNSAFE();
    antlr4::tree::TerminalNode* UNSAFE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cvu_decoratorsContext* cvu_decorators();

  class  Scoperesolution_listContext : public antlr4::ParserRuleContext {
  public:
    Scoperesolution_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCOPE_RESSOLUTION_OP();
    antlr4::tree::TerminalNode* SCOPE_RESSOLUTION_OP(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scoperesolution_listContext* scoperesolution_list();

  class  Error_recoveryContext : public antlr4::ParserRuleContext {
  public:
    Error_recoveryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Error_recoveryContext* error_recovery();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

