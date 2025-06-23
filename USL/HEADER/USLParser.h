
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, NAMESPACE = 10, CLASS = 11, ENUM = 12, ATRIBUTE = 13, 
    BYTE = 14, UBYTE = 15, SHORT = 16, USHORT = 17, INT = 18, UINT = 19, 
    LONG = 20, ULONG = 21, FLOAT = 22, DOUBLE = 23, HASH = 24, STRING = 25, 
    CHAR = 26, VOID = 27, NULL_ = 28, BOOL = 29, TEMPLATE = 30, ASYNC = 31, 
    SYNC = 32, INTERNAL = 33, OPPERATOR = 34, UNSAFE = 35, STACK_ALLOC = 36, 
    REINTERPRET_CAST = 37, STATIC_CAST = 38, UNSAFE_CAST = 39, CUSTOM_OP = 40, 
    CUSTOM_KEYWORD = 41, CUSTOM_CONTROL = 42, TYPE_QUALIFYERS = 43, STATIC = 44, 
    VIRTUAL = 45, NOEXCEPT = 46, OVERRIDE = 47, NULLPTR = 48, RETURN = 49, 
    REQUIRES = 50, AUTO = 51, CALL = 52, EXTERN = 53, DECLSPEC = 54, DLLEXPORT = 55, 
    DLLIMPORT = 56, NEW = 57, UNSAFE_NEW = 58, UNSAFE_DELETE = 59, INTRINSIC = 60, 
    NORVO = 61, OVERLAPSWITH = 62, JUMPTABLE = 63, UNROLL = 64, VECTORIZE = 65, 
    ASSIGN_OP = 66, PLUS_OP = 67, MINUS_OP = 68, MULT_OP = 69, DIV_OP = 70, 
    MOD_OP = 71, HASH_OP = 72, DEREF = 73, INCREMENT = 74, DECREMENT = 75, 
    B_LEFT = 76, B_RIGHT = 77, EQUALS = 78, LESS = 79, LARGER = 80, NOT = 81, 
    LESS_EQ = 82, LARGER_EQ = 83, SCOPE_RESSOLUTION_OP = 84, INT_LITTERAL = 85, 
    UINT_LITTERAL = 86, FLOAT_LITTERAL = 87, CHAR_LITTERAL = 88, STRING_LITTERAL = 89, 
    BOOL_LITTERAL = 90, COMMENT = 91, WS = 92, ID = 93, CUSTOM_OP_SYMBOLS = 94
  };

  enum {
    RuleProgram = 0, RuleGlobal_statement = 1, RuleStatement = 2, RuleExpression = 3, 
    RuleBasic_block = 4, RuleClass_delcaration = 5, RuleNamespace_declaration = 6, 
    RuleAtribute_declaration = 7, RuleFunction_declaration = 8, RuleIntrinsic_function_pre_declaration = 9, 
    RuleExtern_function_pre_declaration = 10, RuleExter_function_declaratio = 11, 
    RuleEnum_declaration = 12, RuleVar_declaration = 13, RuleCustom_opperator_sym = 14, 
    RuleNoexcept_specifyer = 15, RuleAssignment_expr = 16, RuleEquality_expr = 17, 
    RuleComparison_expr = 18, RuleBitshift_expr = 19, RuleAdditive_expr = 20, 
    RuleMultiplicative_expr = 21, RuleUnary_expr = 22, RulePrimary_expr = 23, 
    RuleFunction_call = 24, RuleAtribute_constructor = 25, RuleAtrribute_requires = 26, 
    RuleImplements_function = 27, RuleImplements_Var = 28, RulePrimitives = 29, 
    RuleIntegral_type = 30, RuleSigned_inegral_type = 31, RuleUnsigned_integral_type = 32, 
    RuleLitteral = 33, RuleType = 34, RuleParameter = 35, RuleParameterList = 36, 
    RuleClassmember_declaration = 37, RuleOperator_symbols = 38, RuleScope_ressolution = 39, 
    RuleAtribute_parameter = 40, RuleAtribute_parameter_list = 41, RuleAtribute_decorators = 42, 
    RuleExtern_spec = 43, RuleId_with_scope = 44, RuleFunction_call_parameters = 45
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
  class Class_delcarationContext;
  class Namespace_declarationContext;
  class Atribute_declarationContext;
  class Function_declarationContext;
  class Intrinsic_function_pre_declarationContext;
  class Extern_function_pre_declarationContext;
  class Exter_function_declaratioContext;
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
  class Signed_inegral_typeContext;
  class Unsigned_integral_typeContext;
  class LitteralContext;
  class TypeContext;
  class ParameterContext;
  class ParameterListContext;
  class Classmember_declarationContext;
  class Operator_symbolsContext;
  class Scope_ressolutionContext;
  class Atribute_parameterContext;
  class Atribute_parameter_listContext;
  class Atribute_decoratorsContext;
  class Extern_specContext;
  class Id_with_scopeContext;
  class Function_call_parametersContext; 

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
    Class_delcarationContext *class_delcaration();
    Namespace_declarationContext *namespace_declaration();
    Enum_declarationContext *enum_declaration();
    Atribute_declarationContext *atribute_declaration();
    Intrinsic_function_pre_declarationContext *intrinsic_function_pre_declaration();
    Extern_function_pre_declarationContext *extern_function_pre_declaration();

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

  class  Class_delcarationContext : public antlr4::ParserRuleContext {
  public:
    Class_delcarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *ID();
    Atribute_decoratorsContext *atribute_decorators();
    std::vector<Classmember_declarationContext *> classmember_declaration();
    Classmember_declarationContext* classmember_declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Class_delcarationContext* class_delcaration();

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

  class  Intrinsic_function_pre_declarationContext : public antlr4::ParserRuleContext {
  public:
    Intrinsic_function_pre_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTRINSIC();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *VOID();
    TypeContext *type();
    antlr4::tree::TerminalNode *TYPE_QUALIFYERS();
    ParameterListContext *parameterList();
    Noexcept_specifyerContext *noexcept_specifyer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Intrinsic_function_pre_declarationContext* intrinsic_function_pre_declaration();

  class  Extern_function_pre_declarationContext : public antlr4::ParserRuleContext {
  public:
    Extern_function_pre_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extern_specContext *extern_spec();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *VOID();
    TypeContext *type();
    antlr4::tree::TerminalNode *TYPE_QUALIFYERS();
    ParameterListContext *parameterList();
    Noexcept_specifyerContext *noexcept_specifyer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_function_pre_declarationContext* extern_function_pre_declaration();

  class  Exter_function_declaratioContext : public antlr4::ParserRuleContext {
  public:
    Exter_function_declaratioContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Extern_specContext *extern_spec();
    Function_declarationContext *function_declaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exter_function_declaratioContext* exter_function_declaratio();

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
    USLParser::ExpressionContext *construct = nullptr;
    USLParser::ExpressionContext *construct_assign = nullptr;
    Var_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *TYPE_QUALIFYERS();
    antlr4::tree::TerminalNode *ASSIGN_OP();
    ExpressionContext *expression();

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
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);

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
    USLParser::Additive_exprContext *left = nullptr;
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
    USLParser::Multiplicative_exprContext *left = nullptr;
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
    USLParser::Unary_exprContext *left = nullptr;
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
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();
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
    Id_with_scopeContext *id_with_scope();
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
    Id_with_scopeContext *id_with_scope();
    Function_call_parametersContext *function_call_parameters();

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
    antlr4::tree::TerminalNode *UBYTE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *USHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *UINT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *ULONG();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();
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
    Signed_inegral_typeContext *signed_inegral_type();
    Unsigned_integral_typeContext *unsigned_integral_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integral_typeContext* integral_type();

  class  Signed_inegral_typeContext : public antlr4::ParserRuleContext {
  public:
    Signed_inegral_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Signed_inegral_typeContext* signed_inegral_type();

  class  Unsigned_integral_typeContext : public antlr4::ParserRuleContext {
  public:
    Unsigned_integral_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UBYTE();
    antlr4::tree::TerminalNode *USHORT();
    antlr4::tree::TerminalNode *UINT();
    antlr4::tree::TerminalNode *ULONG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unsigned_integral_typeContext* unsigned_integral_type();

  class  LitteralContext : public antlr4::ParserRuleContext {
  public:
    LitteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITTERAL();
    antlr4::tree::TerminalNode *INT_LITTERAL();
    antlr4::tree::TerminalNode *UINT_LITTERAL();
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

  class  Atribute_parameterContext : public antlr4::ParserRuleContext {
  public:
    Atribute_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    LitteralContext *litteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atribute_parameterContext* atribute_parameter();

  class  Atribute_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Atribute_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Atribute_parameterContext *> atribute_parameter();
    Atribute_parameterContext* atribute_parameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atribute_parameter_listContext* atribute_parameter_list();

  class  Atribute_decoratorsContext : public antlr4::ParserRuleContext {
  public:
    Atribute_decoratorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<Atribute_parameter_listContext *> atribute_parameter_list();
    Atribute_parameter_listContext* atribute_parameter_list(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atribute_decoratorsContext* atribute_decorators();

  class  Extern_specContext : public antlr4::ParserRuleContext {
  public:
    Extern_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *STRING_LITTERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Extern_specContext* extern_spec();

  class  Id_with_scopeContext : public antlr4::ParserRuleContext {
  public:
    Id_with_scopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Scope_ressolutionContext *scope_ressolution();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_with_scopeContext* id_with_scope();

  class  Function_call_parametersContext : public antlr4::ParserRuleContext {
  public:
    Function_call_parametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_call_parametersContext* function_call_parameters();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

