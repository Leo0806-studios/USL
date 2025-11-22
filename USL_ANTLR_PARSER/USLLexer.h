
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, NAMESPACE = 11, CLASS = 12, ENUM = 13, 
    ATRIBUTE = 14, BYTE = 15, UBYTE = 16, SHORT = 17, USHORT = 18, INT = 19, 
    UINT = 20, LONG = 21, ULONG = 22, FLOAT = 23, DOUBLE = 24, HASH = 25, 
    STRING = 26, CHAR = 27, VOID = 28, NULL_ = 29, BOOL = 30, TEMPLATE = 31, 
    ASYNC = 32, SYNC = 33, INTERNAL = 34, OPPERATOR = 35, UNSAFE = 36, STACK_ALLOC = 37, 
    REINTERPRET_CAST = 38, STATIC_CAST = 39, UNSAFE_CAST = 40, CUSTOM_OP = 41, 
    CUSTOM_KEYWORD = 42, CUSTOM_CONTROL = 43, TYPE_QUALIFYERS = 44, STATIC = 45, 
    VIRTUAL = 46, NOEXCEPT = 47, OVERRIDE = 48, NULLPTR = 49, RETURN = 50, 
    REQUIRES = 51, AUTO = 52, CALL = 53, EXTERN = 54, DECLSPEC = 55, DLLEXPORT = 56, 
    DLLIMPORT = 57, NEW = 58, UNSAFE_NEW = 59, UNSAFE_DELETE = 60, INTRINSIC = 61, 
    NORVO = 62, OVERLAPSWITH = 63, JUMPTABLE = 64, UNROLL = 65, VECTORIZE = 66, 
    TEST = 67, ASSIGN_OP = 68, PLUS_OP = 69, MINUS_OP = 70, MULT_OP = 71, 
    DIV_OP = 72, MOD_OP = 73, HASH_OP = 74, DEREF = 75, INCREMENT = 76, 
    DECREMENT = 77, B_LEFT = 78, B_RIGHT = 79, EQUALS = 80, LESS = 81, LARGER = 82, 
    NOT = 83, LESS_EQ = 84, LARGER_EQ = 85, SCOPE_RESSOLUTION_OP = 86, INT_LITTERAL = 87, 
    UINT_LITTERAL = 88, FLOAT_LITTERAL = 89, CHAR_LITTERAL = 90, STRING_LITTERAL = 91, 
    BOOL_LITTERAL = 92, COMMENT = 93, WS = 94, ID = 95, CUSTOM_OP_SYMBOLS = 96
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

