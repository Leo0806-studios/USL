
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, NAMESPACE = 11, CLASS = 12, ENUM = 13, 
    ATRIBUTE = 14, BYTE = 15, SHORT = 16, INT = 17, LONG = 18, FLOAT = 19, 
    DOUBLE = 20, LONGDOUBLE = 21, HASH = 22, STRING = 23, CHAR = 24, VOID = 25, 
    NULLPTR_T = 26, BOOL = 27, M128 = 28, M128I = 29, M128D = 30, M256 = 31, 
    M256I = 32, M256D = 33, M512 = 34, M512I = 35, M512D = 36, NULL_ = 37, 
    NULLPTR = 38, BOOL_LITTERAL = 39, TEMPLATE = 40, ASYNC = 41, SYNC = 42, 
    INTERNAL = 43, OPPERATOR = 44, STACK_ALLOC = 45, UNSAFE = 46, REINTERPRET_CAST = 47, 
    STATIC_CAST = 48, UNSAFE_CAST = 49, CONST_CAST = 50, THROWS = 51, MAYBE = 52, 
    RETURN = 53, CALL = 54, STATIC = 55, UNSIGNED = 56, VOLATILE = 57, CONST = 58, 
    VIRTUAL = 59, OVERRIDE = 60, CUSTOM_OP = 61, CUSTOM_KEYWORD = 62, CUSTOM_CONTROL = 63, 
    NOEXCEPT = 64, REQUIRES = 65, AUTO = 66, EXTERN = 67, DECLSPEC = 68, 
    DLLEXPORT = 69, DLLIMPORT = 70, NEW = 71, UNSAFE_NEW = 72, UNSAFE_DELETE = 73, 
    INTRINSIC = 74, NORVO = 75, OVERLAPSWITH = 76, JUMPTABLE = 77, UNROLL = 78, 
    VECTORIZE = 79, TEST = 80, ASSIGN_OP = 81, PLUS_OP = 82, MINUS_OP = 83, 
    MULT_OP = 84, DIV_OP = 85, MOD_OP = 86, HASH_OP = 87, FMA_OP = 88, DEREF = 89, 
    INCREMENT = 90, DECREMENT = 91, B_LEFT = 92, B_RIGHT = 93, EQUALS = 94, 
    LESS = 95, LARGER = 96, NOT = 97, LESS_EQ = 98, LARGER_EQ = 99, SCOPE_RESSOLUTION_OP = 100, 
    INT_LITTERAL = 101, UINT_LITTERAL = 102, FLOAT_LITTERAL = 103, CHAR_LITTERAL = 104, 
    STRING_LITTERAL = 105, COMMENT = 106, WS = 107, ID = 108, CUSTOM_OP_SYMBOLS = 109
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

