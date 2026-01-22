
// Generated from c:/Users/leo08/source/repos/Leo0806-studios/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
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

  explicit USLLexer(antlr4::CharStream *input);

  ~USLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

