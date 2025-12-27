
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2


#include "USLListener.h"
#include "USLVisitor.h"

#include "USLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct USLParserStaticData final {
  USLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  USLParserStaticData(const USLParserStaticData&) = delete;
  USLParserStaticData(USLParserStaticData&&) = delete;
  USLParserStaticData& operator=(const USLParserStaticData&) = delete;
  USLParserStaticData& operator=(USLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag uslParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<USLParserStaticData> uslParserStaticData = nullptr;

void uslParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (uslParserStaticData != nullptr) {
    return;
  }
#else
  assert(uslParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<USLParserStaticData>(
    std::vector<std::string>{
      "program", "global_statement", "statement", "namespace_declaration", 
      "class_declaration", "enum_declaration", "attribute_declaration", 
      "function_declaration", "basic_block", "variable_declaration", "if_statement", 
      "else_statement", "while_statement", "do_statement", "for_statement", 
      "switch_statement", "case_statement", "goto_statement", "lable_statement", 
      "throw_statement", "expression_statement", "expression", "assignment_expr", 
      "equality_expr", "comparison_expr", "bitshift_expr", "additive_expr", 
      "multiplicative_expr", "postfix_expr", "prefix_expr", "primary_expr", 
      "acces_modifiers", "throws_postfix", "quailified_name", "attribute_addition", 
      "attribute", "comparision_operator", "bitshift_operator", "additive_operator", 
      "multiplicative_operator", "prefix_operator", "postfix_operator", 
      "call_operator", "index_operator", "cvu_type", "type", "primitive", 
      "integral_type", "floating_type", "vector_type", "paremeter_list", 
      "parameter", "litteral", "bool_litteral", "cvu_decorators", "scoperesolution_list", 
      "error_recovery"
    },
    std::vector<std::string>{
      "", "';'", "'{'", "'}'", "':'", "','", "'('", "')'", "'[['", "']]'", 
      "'['", "']'", "'namespace'", "'class'", "'struct'", "'enum'", "'atribute'", 
      "'byte'", "'short'", "'int'", "'long'", "'float'", "'double'", "'w_double'", 
      "'hash'", "'string'", "'char'", "'void'", "'nullptr_t'", "'bool'", 
      "'m128'", "'m128i'", "'m128d'", "'m256'", "'m256i'", "'m256d'", "'m512'", 
      "'m512i'", "'m512d'", "'null'", "'nullptr'", "'true'", "'false'", 
      "'template'", "'if'", "'else'", "'while'", "'do'", "'switch'", "'case'", 
      "'goto'", "'break'", "'default'", "'lable'", "'for'", "'async'", "'sync'", 
      "'public'", "'private'", "'protected'", "'__internal'", "'__assume'", 
      "'__norvo'", "'__unroll'", "'__intrinsic'", "'__overlapswith'", "'__jumptable'", 
      "'__vectorize'", "'operator'", "'stack_alloc'", "'unsafe'", "'reinterpret_cast'", 
      "'static_cast'", "'unsafe_cast'", "'const_cast'", "'throw'", "'throws'", 
      "'maybe'", "'return'", "'call'", "'static'", "'unsigned'", "'volatile'", 
      "'const'", "'virtual'", "'override'", "'auto'", "'requires'", "'extern'", 
      "'new'", "'delete'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", 
      "'++'", "'--'", "'*+'", "'->'", "'.'", "'<<'", "'>>'", "'=='", "'<'", 
      "'>'", "'!'", "", "", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "NAMESPACE", "CLASS", 
      "STRUCT", "ENUM", "ATRIBUTE", "BYTE", "SHORT", "INT", "LONG", "FLOAT", 
      "DOUBLE", "LONGDOUBLE", "HASH", "STRING", "CHAR", "VOID", "NULLPTR_T", 
      "BOOL", "M128", "M128I", "M128D", "M256", "M256I", "M256D", "M512", 
      "M512I", "M512D", "NULL", "NULLPTR", "BOOL_LITTERAL_TRUE", "BOOL_LITTERAL_FALSE", 
      "TEMPLATE", "IF", "ELSE", "WHILE", "DO", "SWITCH", "CASE", "GOTO", 
      "BREAK", "DEFAULT", "LABLE", "FOR", "ASYNC", "SYNC", "PUBLIC", "PRIVATE", 
      "PROTECTED", "INTERNAL", "ASSUME", "NORVO", "UNROLL", "INTRINSIC", 
      "OVERLAPSWITH", "JUMPTABLE", "VECTORIZE", "OPPERATOR", "STACK_ALLOC", 
      "UNSAFE", "REINTERPRET_CAST", "STATIC_CAST", "UNSAFE_CAST", "CONST_CAST", 
      "THROW", "THROWS", "MAYBE", "RETURN", "CALL", "STATIC", "UNSIGNED", 
      "VOLATILE", "CONST", "VIRTUAL", "OVERRIDE", "AUTO", "REQUIRES", "EXTERN", 
      "NEW", "DELETE", "ASSIGN_OP", "PLUS_OP", "MINUS_OP", "MULT_OP", "DIV_OP", 
      "MOD_OP", "HASH_OP", "INCREMENT", "DECREMENT", "FMA_OP", "DEREF", 
      "MEMBER_ACCES", "B_LEFT", "B_RIGHT", "EQUALS", "LESS", "LARGER", "NOT", 
      "LESS_EQ", "LARGER_EQ", "SCOPE_RESSOLUTION_OP", "INT_LITTERAL", "UINT_LITTERAL", 
      "FLOAT_LITTERAL", "CHAR_LITTERAL", "STRING_LITTERAL", "COMMENT", "WS", 
      "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,119,542,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,1,0,4,0,116,8,0,11,0,12,0,117,1,0,1,0,1,1,1,1,1,1,1,1,3,1,126,8,1,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,146,8,2,1,3,1,3,1,3,1,3,5,3,152,8,3,10,3,12,3,155,9,3,1,3,1,3,1,
  	4,3,4,160,8,4,1,4,1,4,1,4,1,4,3,4,166,8,4,1,4,3,4,169,8,4,1,4,1,4,1,4,
  	1,5,3,5,175,8,5,1,5,1,5,1,5,1,5,3,5,181,8,5,1,5,1,5,1,5,1,5,3,5,187,8,
  	5,1,5,1,5,1,5,1,5,3,5,193,8,5,5,5,195,8,5,10,5,12,5,198,9,5,1,5,3,5,201,
  	8,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,3,7,212,8,7,1,7,1,7,1,7,1,7,1,
  	7,3,7,219,8,7,1,7,1,7,3,7,223,8,7,1,7,3,7,226,8,7,1,7,1,7,1,8,1,8,5,8,
  	232,8,8,10,8,12,8,235,9,8,1,8,1,8,1,9,3,9,240,8,9,1,9,1,9,1,9,1,9,3,9,
  	246,8,9,1,10,1,10,1,10,1,10,1,10,1,10,3,10,254,8,10,1,11,1,11,1,11,3,
  	11,259,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,5,
  	15,286,8,15,10,15,12,15,289,9,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,
  	17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,
  	22,1,22,3,22,314,8,22,1,23,1,23,1,23,5,23,319,8,23,10,23,12,23,322,9,
  	23,1,24,1,24,1,24,1,24,5,24,328,8,24,10,24,12,24,331,9,24,1,25,1,25,1,
  	25,1,25,5,25,337,8,25,10,25,12,25,340,9,25,1,26,1,26,1,26,1,26,5,26,346,
  	8,26,10,26,12,26,349,9,26,1,27,1,27,1,27,1,27,5,27,355,8,27,10,27,12,
  	27,358,9,27,1,28,1,28,5,28,362,8,28,10,28,12,28,365,9,28,1,29,1,29,1,
  	29,1,29,3,29,371,8,29,1,30,1,30,1,30,1,30,1,30,1,30,3,30,379,8,30,1,31,
  	1,31,1,32,1,32,1,32,1,32,1,32,5,32,388,8,32,10,32,12,32,391,9,32,1,32,
  	1,32,3,32,395,8,32,1,33,3,33,398,8,33,1,33,1,33,1,34,1,34,1,34,1,34,5,
  	34,406,8,34,10,34,12,34,409,9,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,5,
  	35,418,8,35,10,35,12,35,421,9,35,1,35,1,35,3,35,425,8,35,1,36,1,36,1,
  	37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,41,1,41,3,41,441,8,
  	41,1,42,1,42,1,42,1,42,5,42,447,8,42,10,42,12,42,450,9,42,1,42,1,42,1,
  	43,1,43,1,43,1,43,5,43,458,8,43,10,43,12,43,461,9,43,1,43,1,43,1,44,1,
  	44,1,44,1,45,1,45,1,45,3,45,471,8,45,1,46,1,46,1,46,1,46,1,46,1,46,1,
  	46,1,46,1,46,1,46,3,46,483,8,46,1,47,3,47,486,8,47,1,47,1,47,1,47,3,47,
  	491,8,47,1,48,1,48,1,49,1,49,1,50,1,50,1,50,5,50,500,8,50,10,50,12,50,
  	503,9,50,1,51,1,51,1,51,1,52,1,52,1,52,1,52,1,52,3,52,513,8,52,1,53,1,
  	53,1,54,1,54,1,54,5,54,520,8,54,10,54,12,54,523,9,54,1,55,1,55,1,55,5,
  	55,528,8,55,10,55,12,55,531,9,55,1,55,1,55,1,56,4,56,536,8,56,11,56,12,
  	56,537,1,56,1,56,1,56,1,537,0,57,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,
  	74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,0,
  	10,1,0,13,14,1,0,57,59,2,0,106,107,109,110,1,0,103,104,1,0,92,93,1,0,
  	94,96,2,0,97,99,108,108,1,0,21,23,1,0,30,38,1,0,41,42,562,0,115,1,0,0,
  	0,2,125,1,0,0,0,4,145,1,0,0,0,6,147,1,0,0,0,8,159,1,0,0,0,10,174,1,0,
  	0,0,12,205,1,0,0,0,14,211,1,0,0,0,16,229,1,0,0,0,18,239,1,0,0,0,20,247,
  	1,0,0,0,22,255,1,0,0,0,24,260,1,0,0,0,26,266,1,0,0,0,28,269,1,0,0,0,30,
  	279,1,0,0,0,32,292,1,0,0,0,34,297,1,0,0,0,36,300,1,0,0,0,38,303,1,0,0,
  	0,40,306,1,0,0,0,42,308,1,0,0,0,44,310,1,0,0,0,46,315,1,0,0,0,48,323,
  	1,0,0,0,50,332,1,0,0,0,52,341,1,0,0,0,54,350,1,0,0,0,56,359,1,0,0,0,58,
  	370,1,0,0,0,60,378,1,0,0,0,62,380,1,0,0,0,64,394,1,0,0,0,66,397,1,0,0,
  	0,68,401,1,0,0,0,70,412,1,0,0,0,72,426,1,0,0,0,74,428,1,0,0,0,76,430,
  	1,0,0,0,78,432,1,0,0,0,80,434,1,0,0,0,82,440,1,0,0,0,84,442,1,0,0,0,86,
  	453,1,0,0,0,88,464,1,0,0,0,90,470,1,0,0,0,92,482,1,0,0,0,94,490,1,0,0,
  	0,96,492,1,0,0,0,98,494,1,0,0,0,100,496,1,0,0,0,102,504,1,0,0,0,104,512,
  	1,0,0,0,106,514,1,0,0,0,108,521,1,0,0,0,110,524,1,0,0,0,112,535,1,0,0,
  	0,114,116,3,2,1,0,115,114,1,0,0,0,116,117,1,0,0,0,117,115,1,0,0,0,117,
  	118,1,0,0,0,118,119,1,0,0,0,119,120,5,0,0,1,120,1,1,0,0,0,121,126,3,6,
  	3,0,122,126,3,8,4,0,123,126,3,10,5,0,124,126,3,12,6,0,125,121,1,0,0,0,
  	125,122,1,0,0,0,125,123,1,0,0,0,125,124,1,0,0,0,126,3,1,0,0,0,127,128,
  	3,18,9,0,128,129,5,1,0,0,129,146,1,0,0,0,130,146,3,14,7,0,131,132,3,34,
  	17,0,132,133,5,1,0,0,133,146,1,0,0,0,134,135,3,36,18,0,135,136,5,1,0,
  	0,136,146,1,0,0,0,137,146,3,24,12,0,138,146,3,20,10,0,139,146,3,28,14,
  	0,140,146,3,30,15,0,141,142,3,40,20,0,142,143,5,1,0,0,143,146,1,0,0,0,
  	144,146,3,112,56,0,145,127,1,0,0,0,145,130,1,0,0,0,145,131,1,0,0,0,145,
  	134,1,0,0,0,145,137,1,0,0,0,145,138,1,0,0,0,145,139,1,0,0,0,145,140,1,
  	0,0,0,145,141,1,0,0,0,145,144,1,0,0,0,146,5,1,0,0,0,147,148,5,12,0,0,
  	148,149,5,119,0,0,149,153,5,2,0,0,150,152,3,2,1,0,151,150,1,0,0,0,152,
  	155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,156,1,0,0,0,155,153,1,
  	0,0,0,156,157,5,3,0,0,157,7,1,0,0,0,158,160,3,68,34,0,159,158,1,0,0,0,
  	159,160,1,0,0,0,160,161,1,0,0,0,161,162,7,0,0,0,162,168,5,119,0,0,163,
  	165,5,4,0,0,164,166,5,57,0,0,165,164,1,0,0,0,165,166,1,0,0,0,166,167,
  	1,0,0,0,167,169,3,66,33,0,168,163,1,0,0,0,168,169,1,0,0,0,169,170,1,0,
  	0,0,170,171,3,16,8,0,171,172,5,1,0,0,172,9,1,0,0,0,173,175,3,68,34,0,
  	174,173,1,0,0,0,174,175,1,0,0,0,175,176,1,0,0,0,176,177,5,15,0,0,177,
  	180,5,119,0,0,178,179,5,4,0,0,179,181,3,92,46,0,180,178,1,0,0,0,180,181,
  	1,0,0,0,181,182,1,0,0,0,182,183,5,2,0,0,183,186,5,119,0,0,184,185,5,91,
  	0,0,185,187,3,104,52,0,186,184,1,0,0,0,186,187,1,0,0,0,187,196,1,0,0,
  	0,188,189,5,5,0,0,189,192,5,119,0,0,190,191,5,91,0,0,191,193,3,104,52,
  	0,192,190,1,0,0,0,192,193,1,0,0,0,193,195,1,0,0,0,194,188,1,0,0,0,195,
  	198,1,0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,200,1,0,0,0,198,196,1,
  	0,0,0,199,201,5,5,0,0,200,199,1,0,0,0,200,201,1,0,0,0,201,202,1,0,0,0,
  	202,203,5,3,0,0,203,204,5,1,0,0,204,11,1,0,0,0,205,206,5,16,0,0,206,207,
  	5,119,0,0,207,208,5,2,0,0,208,209,5,3,0,0,209,13,1,0,0,0,210,212,3,68,
  	34,0,211,210,1,0,0,0,211,212,1,0,0,0,212,213,1,0,0,0,213,214,3,62,31,
  	0,214,215,3,88,44,0,215,216,5,119,0,0,216,218,5,6,0,0,217,219,3,100,50,
  	0,218,217,1,0,0,0,218,219,1,0,0,0,219,220,1,0,0,0,220,222,5,7,0,0,221,
  	223,5,83,0,0,222,221,1,0,0,0,222,223,1,0,0,0,223,225,1,0,0,0,224,226,
  	3,64,32,0,225,224,1,0,0,0,225,226,1,0,0,0,226,227,1,0,0,0,227,228,3,16,
  	8,0,228,15,1,0,0,0,229,233,5,2,0,0,230,232,3,4,2,0,231,230,1,0,0,0,232,
  	235,1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,236,1,0,0,0,235,233,1,
  	0,0,0,236,237,5,3,0,0,237,17,1,0,0,0,238,240,3,62,31,0,239,238,1,0,0,
  	0,239,240,1,0,0,0,240,241,1,0,0,0,241,242,3,88,44,0,242,245,5,119,0,0,
  	243,244,5,91,0,0,244,246,3,42,21,0,245,243,1,0,0,0,245,246,1,0,0,0,246,
  	19,1,0,0,0,247,248,5,44,0,0,248,249,5,6,0,0,249,250,3,42,21,0,250,251,
  	5,7,0,0,251,253,3,16,8,0,252,254,3,22,11,0,253,252,1,0,0,0,253,254,1,
  	0,0,0,254,21,1,0,0,0,255,258,5,45,0,0,256,259,3,20,10,0,257,259,3,16,
  	8,0,258,256,1,0,0,0,258,257,1,0,0,0,259,23,1,0,0,0,260,261,5,46,0,0,261,
  	262,5,6,0,0,262,263,3,42,21,0,263,264,5,7,0,0,264,265,3,16,8,0,265,25,
  	1,0,0,0,266,267,5,47,0,0,267,268,3,16,8,0,268,27,1,0,0,0,269,270,5,54,
  	0,0,270,271,5,6,0,0,271,272,3,42,21,0,272,273,5,1,0,0,273,274,3,42,21,
  	0,274,275,5,1,0,0,275,276,3,42,21,0,276,277,5,7,0,0,277,278,3,16,8,0,
  	278,29,1,0,0,0,279,280,5,48,0,0,280,281,5,6,0,0,281,282,3,42,21,0,282,
  	283,5,7,0,0,283,287,5,2,0,0,284,286,3,32,16,0,285,284,1,0,0,0,286,289,
  	1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,0,288,290,1,0,0,0,289,287,1,0,0,
  	0,290,291,5,3,0,0,291,31,1,0,0,0,292,293,5,49,0,0,293,294,3,42,21,0,294,
  	295,5,4,0,0,295,296,3,16,8,0,296,33,1,0,0,0,297,298,5,50,0,0,298,299,
  	5,119,0,0,299,35,1,0,0,0,300,301,5,53,0,0,301,302,5,119,0,0,302,37,1,
  	0,0,0,303,304,5,75,0,0,304,305,3,42,21,0,305,39,1,0,0,0,306,307,3,42,
  	21,0,307,41,1,0,0,0,308,309,3,44,22,0,309,43,1,0,0,0,310,313,3,46,23,
  	0,311,312,5,91,0,0,312,314,3,44,22,0,313,311,1,0,0,0,313,314,1,0,0,0,
  	314,45,1,0,0,0,315,320,3,48,24,0,316,317,5,105,0,0,317,319,3,48,24,0,
  	318,316,1,0,0,0,319,322,1,0,0,0,320,318,1,0,0,0,320,321,1,0,0,0,321,47,
  	1,0,0,0,322,320,1,0,0,0,323,329,3,50,25,0,324,325,3,72,36,0,325,326,3,
  	50,25,0,326,328,1,0,0,0,327,324,1,0,0,0,328,331,1,0,0,0,329,327,1,0,0,
  	0,329,330,1,0,0,0,330,49,1,0,0,0,331,329,1,0,0,0,332,338,3,52,26,0,333,
  	334,3,74,37,0,334,335,3,52,26,0,335,337,1,0,0,0,336,333,1,0,0,0,337,340,
  	1,0,0,0,338,336,1,0,0,0,338,339,1,0,0,0,339,51,1,0,0,0,340,338,1,0,0,
  	0,341,347,3,54,27,0,342,343,3,76,38,0,343,344,3,54,27,0,344,346,1,0,0,
  	0,345,342,1,0,0,0,346,349,1,0,0,0,347,345,1,0,0,0,347,348,1,0,0,0,348,
  	53,1,0,0,0,349,347,1,0,0,0,350,356,3,56,28,0,351,352,3,78,39,0,352,353,
  	3,56,28,0,353,355,1,0,0,0,354,351,1,0,0,0,355,358,1,0,0,0,356,354,1,0,
  	0,0,356,357,1,0,0,0,357,55,1,0,0,0,358,356,1,0,0,0,359,363,3,58,29,0,
  	360,362,3,82,41,0,361,360,1,0,0,0,362,365,1,0,0,0,363,361,1,0,0,0,363,
  	364,1,0,0,0,364,57,1,0,0,0,365,363,1,0,0,0,366,367,3,80,40,0,367,368,
  	3,58,29,0,368,371,1,0,0,0,369,371,3,60,30,0,370,366,1,0,0,0,370,369,1,
  	0,0,0,371,59,1,0,0,0,372,379,3,66,33,0,373,379,3,104,52,0,374,375,5,6,
  	0,0,375,376,3,42,21,0,376,377,5,7,0,0,377,379,1,0,0,0,378,372,1,0,0,0,
  	378,373,1,0,0,0,378,374,1,0,0,0,379,61,1,0,0,0,380,381,7,1,0,0,381,63,
  	1,0,0,0,382,383,5,76,0,0,383,384,5,6,0,0,384,389,3,66,33,0,385,386,5,
  	5,0,0,386,388,3,66,33,0,387,385,1,0,0,0,388,391,1,0,0,0,389,387,1,0,0,
  	0,389,390,1,0,0,0,390,395,1,0,0,0,391,389,1,0,0,0,392,393,5,77,0,0,393,
  	395,5,7,0,0,394,382,1,0,0,0,394,392,1,0,0,0,395,65,1,0,0,0,396,398,3,
  	110,55,0,397,396,1,0,0,0,397,398,1,0,0,0,398,399,1,0,0,0,399,400,5,119,
  	0,0,400,67,1,0,0,0,401,402,5,8,0,0,402,407,3,70,35,0,403,404,5,5,0,0,
  	404,406,3,70,35,0,405,403,1,0,0,0,406,409,1,0,0,0,407,405,1,0,0,0,407,
  	408,1,0,0,0,408,410,1,0,0,0,409,407,1,0,0,0,410,411,5,9,0,0,411,69,1,
  	0,0,0,412,424,3,66,33,0,413,414,5,6,0,0,414,419,3,42,21,0,415,416,5,5,
  	0,0,416,418,3,42,21,0,417,415,1,0,0,0,418,421,1,0,0,0,419,417,1,0,0,0,
  	419,420,1,0,0,0,420,422,1,0,0,0,421,419,1,0,0,0,422,423,5,7,0,0,423,425,
  	1,0,0,0,424,413,1,0,0,0,424,425,1,0,0,0,425,71,1,0,0,0,426,427,7,2,0,
  	0,427,73,1,0,0,0,428,429,7,3,0,0,429,75,1,0,0,0,430,431,7,4,0,0,431,77,
  	1,0,0,0,432,433,7,5,0,0,433,79,1,0,0,0,434,435,7,6,0,0,435,81,1,0,0,0,
  	436,441,3,84,42,0,437,441,3,86,43,0,438,441,5,98,0,0,439,441,5,99,0,0,
  	440,436,1,0,0,0,440,437,1,0,0,0,440,438,1,0,0,0,440,439,1,0,0,0,441,83,
  	1,0,0,0,442,443,5,6,0,0,443,448,3,42,21,0,444,445,5,5,0,0,445,447,3,42,
  	21,0,446,444,1,0,0,0,447,450,1,0,0,0,448,446,1,0,0,0,448,449,1,0,0,0,
  	449,451,1,0,0,0,450,448,1,0,0,0,451,452,5,7,0,0,452,85,1,0,0,0,453,454,
  	5,10,0,0,454,459,3,42,21,0,455,456,5,5,0,0,456,458,3,42,21,0,457,455,
  	1,0,0,0,458,461,1,0,0,0,459,457,1,0,0,0,459,460,1,0,0,0,460,462,1,0,0,
  	0,461,459,1,0,0,0,462,463,5,11,0,0,463,87,1,0,0,0,464,465,3,108,54,0,
  	465,466,3,90,45,0,466,89,1,0,0,0,467,471,3,66,33,0,468,471,5,86,0,0,469,
  	471,3,92,46,0,470,467,1,0,0,0,470,468,1,0,0,0,470,469,1,0,0,0,471,91,
  	1,0,0,0,472,483,3,94,47,0,473,483,3,96,48,0,474,483,3,98,49,0,475,483,
  	5,25,0,0,476,483,5,24,0,0,477,483,5,26,0,0,478,483,5,17,0,0,479,483,5,
  	29,0,0,480,483,5,28,0,0,481,483,5,27,0,0,482,472,1,0,0,0,482,473,1,0,
  	0,0,482,474,1,0,0,0,482,475,1,0,0,0,482,476,1,0,0,0,482,477,1,0,0,0,482,
  	478,1,0,0,0,482,479,1,0,0,0,482,480,1,0,0,0,482,481,1,0,0,0,483,93,1,
  	0,0,0,484,486,5,81,0,0,485,484,1,0,0,0,485,486,1,0,0,0,486,487,1,0,0,
  	0,487,491,5,18,0,0,488,491,5,19,0,0,489,491,5,20,0,0,490,485,1,0,0,0,
  	490,488,1,0,0,0,490,489,1,0,0,0,491,95,1,0,0,0,492,493,7,7,0,0,493,97,
  	1,0,0,0,494,495,7,8,0,0,495,99,1,0,0,0,496,501,3,102,51,0,497,498,5,5,
  	0,0,498,500,3,102,51,0,499,497,1,0,0,0,500,503,1,0,0,0,501,499,1,0,0,
  	0,501,502,1,0,0,0,502,101,1,0,0,0,503,501,1,0,0,0,504,505,3,88,44,0,505,
  	506,5,119,0,0,506,103,1,0,0,0,507,513,5,112,0,0,508,513,5,114,0,0,509,
  	513,5,116,0,0,510,513,5,115,0,0,511,513,3,106,53,0,512,507,1,0,0,0,512,
  	508,1,0,0,0,512,509,1,0,0,0,512,510,1,0,0,0,512,511,1,0,0,0,513,105,1,
  	0,0,0,514,515,7,9,0,0,515,107,1,0,0,0,516,520,5,83,0,0,517,520,5,82,0,
  	0,518,520,5,70,0,0,519,516,1,0,0,0,519,517,1,0,0,0,519,518,1,0,0,0,520,
  	523,1,0,0,0,521,519,1,0,0,0,521,522,1,0,0,0,522,109,1,0,0,0,523,521,1,
  	0,0,0,524,529,5,119,0,0,525,526,5,111,0,0,526,528,5,119,0,0,527,525,1,
  	0,0,0,528,531,1,0,0,0,529,527,1,0,0,0,529,530,1,0,0,0,530,532,1,0,0,0,
  	531,529,1,0,0,0,532,533,5,111,0,0,533,111,1,0,0,0,534,536,9,0,0,0,535,
  	534,1,0,0,0,536,537,1,0,0,0,537,538,1,0,0,0,537,535,1,0,0,0,538,539,1,
  	0,0,0,539,540,5,1,0,0,540,113,1,0,0,0,51,117,125,145,153,159,165,168,
  	174,180,186,192,196,200,211,218,222,225,233,239,245,253,258,287,313,320,
  	329,338,347,356,363,370,378,389,394,397,407,419,424,440,448,459,470,482,
  	485,490,501,512,519,521,529,537
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  uslParserStaticData = std::move(staticData);
}

}

USLParser::USLParser(TokenStream *input) : USLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

USLParser::USLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  USLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *uslParserStaticData->atn, uslParserStaticData->decisionToDFA, uslParserStaticData->sharedContextCache, options);
}

USLParser::~USLParser() {
  delete _interpreter;
}

const atn::ATN& USLParser::getATN() const {
  return *uslParserStaticData->atn;
}

std::string USLParser::getGrammarFileName() const {
  return "USL.g4";
}

const std::vector<std::string>& USLParser::getRuleNames() const {
  return uslParserStaticData->ruleNames;
}

const dfa::Vocabulary& USLParser::getVocabulary() const {
  return uslParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView USLParser::getSerializedATN() const {
  return uslParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

USLParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::ProgramContext::EOF() {
  return getToken(USLParser::EOF, 0);
}

std::vector<USLParser::Global_statementContext *> USLParser::ProgramContext::global_statement() {
  return getRuleContexts<USLParser::Global_statementContext>();
}

USLParser::Global_statementContext* USLParser::ProgramContext::global_statement(size_t i) {
  return getRuleContext<USLParser::Global_statementContext>(i);
}


size_t USLParser::ProgramContext::getRuleIndex() const {
  return USLParser::RuleProgram;
}

void USLParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void USLParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any USLParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ProgramContext* USLParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, USLParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(114);
      global_statement();
      setState(117); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 127232) != 0));
    setState(119);
    match(USLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_statementContext ------------------------------------------------------------------

USLParser::Global_statementContext::Global_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Namespace_declarationContext* USLParser::Global_statementContext::namespace_declaration() {
  return getRuleContext<USLParser::Namespace_declarationContext>(0);
}

USLParser::Class_declarationContext* USLParser::Global_statementContext::class_declaration() {
  return getRuleContext<USLParser::Class_declarationContext>(0);
}

USLParser::Enum_declarationContext* USLParser::Global_statementContext::enum_declaration() {
  return getRuleContext<USLParser::Enum_declarationContext>(0);
}

USLParser::Attribute_declarationContext* USLParser::Global_statementContext::attribute_declaration() {
  return getRuleContext<USLParser::Attribute_declarationContext>(0);
}


size_t USLParser::Global_statementContext::getRuleIndex() const {
  return USLParser::RuleGlobal_statement;
}

void USLParser::Global_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobal_statement(this);
}

void USLParser::Global_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobal_statement(this);
}


std::any USLParser::Global_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitGlobal_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Global_statementContext* USLParser::global_statement() {
  Global_statementContext *_localctx = _tracker.createInstance<Global_statementContext>(_ctx, getState());
  enterRule(_localctx, 2, USLParser::RuleGlobal_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(125);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(121);
      namespace_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(122);
      class_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(123);
      enum_declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(124);
      attribute_declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

USLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Variable_declarationContext* USLParser::StatementContext::variable_declaration() {
  return getRuleContext<USLParser::Variable_declarationContext>(0);
}

USLParser::Function_declarationContext* USLParser::StatementContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}

USLParser::Goto_statementContext* USLParser::StatementContext::goto_statement() {
  return getRuleContext<USLParser::Goto_statementContext>(0);
}

USLParser::Lable_statementContext* USLParser::StatementContext::lable_statement() {
  return getRuleContext<USLParser::Lable_statementContext>(0);
}

USLParser::While_statementContext* USLParser::StatementContext::while_statement() {
  return getRuleContext<USLParser::While_statementContext>(0);
}

USLParser::If_statementContext* USLParser::StatementContext::if_statement() {
  return getRuleContext<USLParser::If_statementContext>(0);
}

USLParser::For_statementContext* USLParser::StatementContext::for_statement() {
  return getRuleContext<USLParser::For_statementContext>(0);
}

USLParser::Switch_statementContext* USLParser::StatementContext::switch_statement() {
  return getRuleContext<USLParser::Switch_statementContext>(0);
}

USLParser::Expression_statementContext* USLParser::StatementContext::expression_statement() {
  return getRuleContext<USLParser::Expression_statementContext>(0);
}

USLParser::Error_recoveryContext* USLParser::StatementContext::error_recovery() {
  return getRuleContext<USLParser::Error_recoveryContext>(0);
}


size_t USLParser::StatementContext::getRuleIndex() const {
  return USLParser::RuleStatement;
}

void USLParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void USLParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any USLParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::StatementContext* USLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, USLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(127);
      variable_declaration();
      setState(128);
      match(USLParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(130);
      function_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(131);
      goto_statement();
      setState(132);
      match(USLParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(134);
      lable_statement();
      setState(135);
      match(USLParser::T__0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(137);
      while_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(138);
      if_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(139);
      for_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(140);
      switch_statement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(141);
      expression_statement();
      setState(142);
      match(USLParser::T__0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(144);
      error_recovery();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declarationContext ------------------------------------------------------------------

USLParser::Namespace_declarationContext::Namespace_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Namespace_declarationContext::NAMESPACE() {
  return getToken(USLParser::NAMESPACE, 0);
}

tree::TerminalNode* USLParser::Namespace_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

std::vector<USLParser::Global_statementContext *> USLParser::Namespace_declarationContext::global_statement() {
  return getRuleContexts<USLParser::Global_statementContext>();
}

USLParser::Global_statementContext* USLParser::Namespace_declarationContext::global_statement(size_t i) {
  return getRuleContext<USLParser::Global_statementContext>(i);
}


size_t USLParser::Namespace_declarationContext::getRuleIndex() const {
  return USLParser::RuleNamespace_declaration;
}

void USLParser::Namespace_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespace_declaration(this);
}

void USLParser::Namespace_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespace_declaration(this);
}


std::any USLParser::Namespace_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitNamespace_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Namespace_declarationContext* USLParser::namespace_declaration() {
  Namespace_declarationContext *_localctx = _tracker.createInstance<Namespace_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, USLParser::RuleNamespace_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(USLParser::NAMESPACE);
    setState(148);
    antlrcpp::downCast<Namespace_declarationContext *>(_localctx)->NamespaceName = match(USLParser::ID);
    setState(149);
    match(USLParser::T__1);
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 127232) != 0)) {
      setState(150);
      global_statement();
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(156);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_declarationContext ------------------------------------------------------------------

USLParser::Class_declarationContext::Class_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Basic_blockContext* USLParser::Class_declarationContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}

tree::TerminalNode* USLParser::Class_declarationContext::CLASS() {
  return getToken(USLParser::CLASS, 0);
}

tree::TerminalNode* USLParser::Class_declarationContext::STRUCT() {
  return getToken(USLParser::STRUCT, 0);
}

tree::TerminalNode* USLParser::Class_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Attribute_additionContext* USLParser::Class_declarationContext::attribute_addition() {
  return getRuleContext<USLParser::Attribute_additionContext>(0);
}

USLParser::Quailified_nameContext* USLParser::Class_declarationContext::quailified_name() {
  return getRuleContext<USLParser::Quailified_nameContext>(0);
}

tree::TerminalNode* USLParser::Class_declarationContext::PUBLIC() {
  return getToken(USLParser::PUBLIC, 0);
}


size_t USLParser::Class_declarationContext::getRuleIndex() const {
  return USLParser::RuleClass_declaration;
}

void USLParser::Class_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_declaration(this);
}

void USLParser::Class_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_declaration(this);
}


std::any USLParser::Class_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitClass_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Class_declarationContext* USLParser::class_declaration() {
  Class_declarationContext *_localctx = _tracker.createInstance<Class_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, USLParser::RuleClass_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(158);
      attribute_addition();
    }
    setState(161);
    _la = _input->LA(1);
    if (!(_la == USLParser::CLASS

    || _la == USLParser::STRUCT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(162);
    antlrcpp::downCast<Class_declarationContext *>(_localctx)->TypeName = match(USLParser::ID);
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__3) {
      setState(163);
      match(USLParser::T__3);
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::PUBLIC) {
        setState(164);
        match(USLParser::PUBLIC);
      }
      setState(167);
      quailified_name();
    }
    setState(170);
    basic_block();
    setState(171);
    match(USLParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_declarationContext ------------------------------------------------------------------

USLParser::Enum_declarationContext::Enum_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Enum_declarationContext::ENUM() {
  return getToken(USLParser::ENUM, 0);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::Enum_declarationContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

USLParser::Attribute_additionContext* USLParser::Enum_declarationContext::attribute_addition() {
  return getRuleContext<USLParser::Attribute_additionContext>(0);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::ASSIGN_OP() {
  return getTokens(USLParser::ASSIGN_OP);
}

tree::TerminalNode* USLParser::Enum_declarationContext::ASSIGN_OP(size_t i) {
  return getToken(USLParser::ASSIGN_OP, i);
}

std::vector<USLParser::LitteralContext *> USLParser::Enum_declarationContext::litteral() {
  return getRuleContexts<USLParser::LitteralContext>();
}

USLParser::LitteralContext* USLParser::Enum_declarationContext::litteral(size_t i) {
  return getRuleContext<USLParser::LitteralContext>(i);
}

USLParser::PrimitiveContext* USLParser::Enum_declarationContext::primitive() {
  return getRuleContext<USLParser::PrimitiveContext>(0);
}


size_t USLParser::Enum_declarationContext::getRuleIndex() const {
  return USLParser::RuleEnum_declaration;
}

void USLParser::Enum_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnum_declaration(this);
}

void USLParser::Enum_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnum_declaration(this);
}


std::any USLParser::Enum_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitEnum_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Enum_declarationContext* USLParser::enum_declaration() {
  Enum_declarationContext *_localctx = _tracker.createInstance<Enum_declarationContext>(_ctx, getState());
  enterRule(_localctx, 10, USLParser::RuleEnum_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(173);
      attribute_addition();
    }
    setState(176);
    match(USLParser::ENUM);
    setState(177);
    antlrcpp::downCast<Enum_declarationContext *>(_localctx)->EnumName = match(USLParser::ID);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__3) {
      setState(178);
      match(USLParser::T__3);
      setState(179);
      antlrcpp::downCast<Enum_declarationContext *>(_localctx)->EnumType = primitive();
    }
    setState(182);
    match(USLParser::T__1);
    setState(183);
    match(USLParser::ID);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(184);
      match(USLParser::ASSIGN_OP);
      setState(185);
      litteral();
    }
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(188);
        match(USLParser::T__4);
        setState(189);
        match(USLParser::ID);
        setState(192);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == USLParser::ASSIGN_OP) {
          setState(190);
          match(USLParser::ASSIGN_OP);
          setState(191);
          litteral();
        } 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__4) {
      setState(199);
      match(USLParser::T__4);
    }
    setState(202);
    match(USLParser::T__2);
    setState(203);
    match(USLParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_declarationContext ------------------------------------------------------------------

USLParser::Attribute_declarationContext::Attribute_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Attribute_declarationContext::ATRIBUTE() {
  return getToken(USLParser::ATRIBUTE, 0);
}

tree::TerminalNode* USLParser::Attribute_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::Attribute_declarationContext::getRuleIndex() const {
  return USLParser::RuleAttribute_declaration;
}

void USLParser::Attribute_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_declaration(this);
}

void USLParser::Attribute_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_declaration(this);
}


std::any USLParser::Attribute_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAttribute_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Attribute_declarationContext* USLParser::attribute_declaration() {
  Attribute_declarationContext *_localctx = _tracker.createInstance<Attribute_declarationContext>(_ctx, getState());
  enterRule(_localctx, 12, USLParser::RuleAttribute_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(USLParser::ATRIBUTE);
    setState(206);
    antlrcpp::downCast<Attribute_declarationContext *>(_localctx)->AttributeName = match(USLParser::ID);
    setState(207);
    match(USLParser::T__1);
    setState(208);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declarationContext ------------------------------------------------------------------

USLParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Acces_modifiersContext* USLParser::Function_declarationContext::acces_modifiers() {
  return getRuleContext<USLParser::Acces_modifiersContext>(0);
}

USLParser::Basic_blockContext* USLParser::Function_declarationContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}

USLParser::Cvu_typeContext* USLParser::Function_declarationContext::cvu_type() {
  return getRuleContext<USLParser::Cvu_typeContext>(0);
}

tree::TerminalNode* USLParser::Function_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Attribute_additionContext* USLParser::Function_declarationContext::attribute_addition() {
  return getRuleContext<USLParser::Attribute_additionContext>(0);
}

USLParser::Paremeter_listContext* USLParser::Function_declarationContext::paremeter_list() {
  return getRuleContext<USLParser::Paremeter_listContext>(0);
}

tree::TerminalNode* USLParser::Function_declarationContext::CONST() {
  return getToken(USLParser::CONST, 0);
}

USLParser::Throws_postfixContext* USLParser::Function_declarationContext::throws_postfix() {
  return getRuleContext<USLParser::Throws_postfixContext>(0);
}


size_t USLParser::Function_declarationContext::getRuleIndex() const {
  return USLParser::RuleFunction_declaration;
}

void USLParser::Function_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declaration(this);
}

void USLParser::Function_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declaration(this);
}


std::any USLParser::Function_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFunction_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Function_declarationContext* USLParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, USLParser::RuleFunction_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(210);
      attribute_addition();
    }
    setState(213);
    acces_modifiers();
    setState(214);
    antlrcpp::downCast<Function_declarationContext *>(_localctx)->ReturnType = cvu_type();
    setState(215);
    antlrcpp::downCast<Function_declarationContext *>(_localctx)->FunctionName = match(USLParser::ID);
    setState(216);
    match(USLParser::T__5);
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 549755682816) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 562949953501185) != 0)) {
      setState(217);
      paremeter_list();
    }
    setState(220);
    match(USLParser::T__6);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::CONST) {
      setState(221);
      match(USLParser::CONST);
    }
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::THROWS

    || _la == USLParser::MAYBE) {
      setState(224);
      throws_postfix();
    }
    setState(227);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_blockContext ------------------------------------------------------------------

USLParser::Basic_blockContext::Basic_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::StatementContext *> USLParser::Basic_blockContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Basic_blockContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::Basic_blockContext::getRuleIndex() const {
  return USLParser::RuleBasic_block;
}

void USLParser::Basic_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasic_block(this);
}

void USLParser::Basic_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasic_block(this);
}


std::any USLParser::Basic_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitBasic_block(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Basic_blockContext* USLParser::basic_block() {
  Basic_blockContext *_localctx = _tracker.createInstance<Basic_blockContext>(_ctx, getState());
  enterRule(_localctx, 16, USLParser::RuleBasic_block);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(USLParser::T__1);
    setState(233);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(230);
        statement(); 
      }
      setState(235);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(236);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declarationContext ------------------------------------------------------------------

USLParser::Variable_declarationContext::Variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Cvu_typeContext* USLParser::Variable_declarationContext::cvu_type() {
  return getRuleContext<USLParser::Cvu_typeContext>(0);
}

tree::TerminalNode* USLParser::Variable_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Acces_modifiersContext* USLParser::Variable_declarationContext::acces_modifiers() {
  return getRuleContext<USLParser::Acces_modifiersContext>(0);
}

tree::TerminalNode* USLParser::Variable_declarationContext::ASSIGN_OP() {
  return getToken(USLParser::ASSIGN_OP, 0);
}

USLParser::ExpressionContext* USLParser::Variable_declarationContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::Variable_declarationContext::getRuleIndex() const {
  return USLParser::RuleVariable_declaration;
}

void USLParser::Variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration(this);
}

void USLParser::Variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration(this);
}


std::any USLParser::Variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Variable_declarationContext* USLParser::variable_declaration() {
  Variable_declarationContext *_localctx = _tracker.createInstance<Variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 18, USLParser::RuleVariable_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316530991104) != 0)) {
      setState(238);
      acces_modifiers();
    }
    setState(241);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->Type = cvu_type();
    setState(242);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->name = match(USLParser::ID);
    setState(245);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(243);
      match(USLParser::ASSIGN_OP);
      setState(244);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

USLParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::If_statementContext::IF() {
  return getToken(USLParser::IF, 0);
}

USLParser::ExpressionContext* USLParser::If_statementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

USLParser::Basic_blockContext* USLParser::If_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}

USLParser::Else_statementContext* USLParser::If_statementContext::else_statement() {
  return getRuleContext<USLParser::Else_statementContext>(0);
}


size_t USLParser::If_statementContext::getRuleIndex() const {
  return USLParser::RuleIf_statement;
}

void USLParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void USLParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any USLParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::If_statementContext* USLParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, USLParser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(USLParser::IF);
    setState(248);
    match(USLParser::T__5);
    setState(249);
    expression();
    setState(250);
    match(USLParser::T__6);
    setState(251);
    basic_block();
    setState(253);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(252);
      else_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statementContext ------------------------------------------------------------------

USLParser::Else_statementContext::Else_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Else_statementContext::ELSE() {
  return getToken(USLParser::ELSE, 0);
}

USLParser::If_statementContext* USLParser::Else_statementContext::if_statement() {
  return getRuleContext<USLParser::If_statementContext>(0);
}

USLParser::Basic_blockContext* USLParser::Else_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::Else_statementContext::getRuleIndex() const {
  return USLParser::RuleElse_statement;
}

void USLParser::Else_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_statement(this);
}

void USLParser::Else_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_statement(this);
}


std::any USLParser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Else_statementContext* USLParser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, USLParser::RuleElse_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    match(USLParser::ELSE);
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::IF: {
        setState(256);
        if_statement();
        break;
      }

      case USLParser::T__1: {
        setState(257);
        basic_block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

USLParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::While_statementContext::WHILE() {
  return getToken(USLParser::WHILE, 0);
}

USLParser::ExpressionContext* USLParser::While_statementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

USLParser::Basic_blockContext* USLParser::While_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::While_statementContext::getRuleIndex() const {
  return USLParser::RuleWhile_statement;
}

void USLParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void USLParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


std::any USLParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::While_statementContext* USLParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, USLParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    match(USLParser::WHILE);
    setState(261);
    match(USLParser::T__5);
    setState(262);
    expression();
    setState(263);
    match(USLParser::T__6);
    setState(264);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_statementContext ------------------------------------------------------------------

USLParser::Do_statementContext::Do_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Do_statementContext::DO() {
  return getToken(USLParser::DO, 0);
}

USLParser::Basic_blockContext* USLParser::Do_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::Do_statementContext::getRuleIndex() const {
  return USLParser::RuleDo_statement;
}

void USLParser::Do_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_statement(this);
}

void USLParser::Do_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_statement(this);
}


std::any USLParser::Do_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitDo_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Do_statementContext* USLParser::do_statement() {
  Do_statementContext *_localctx = _tracker.createInstance<Do_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, USLParser::RuleDo_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(USLParser::DO);
    setState(267);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

USLParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::For_statementContext::FOR() {
  return getToken(USLParser::FOR, 0);
}

std::vector<USLParser::ExpressionContext *> USLParser::For_statementContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::For_statementContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}

USLParser::Basic_blockContext* USLParser::For_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::For_statementContext::getRuleIndex() const {
  return USLParser::RuleFor_statement;
}

void USLParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void USLParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


std::any USLParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::For_statementContext* USLParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, USLParser::RuleFor_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(USLParser::FOR);
    setState(270);
    match(USLParser::T__5);
    setState(271);
    expression();
    setState(272);
    match(USLParser::T__0);
    setState(273);
    expression();
    setState(274);
    match(USLParser::T__0);
    setState(275);
    expression();
    setState(276);
    match(USLParser::T__6);
    setState(277);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Switch_statementContext ------------------------------------------------------------------

USLParser::Switch_statementContext::Switch_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Switch_statementContext::SWITCH() {
  return getToken(USLParser::SWITCH, 0);
}

USLParser::ExpressionContext* USLParser::Switch_statementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

std::vector<USLParser::Case_statementContext *> USLParser::Switch_statementContext::case_statement() {
  return getRuleContexts<USLParser::Case_statementContext>();
}

USLParser::Case_statementContext* USLParser::Switch_statementContext::case_statement(size_t i) {
  return getRuleContext<USLParser::Case_statementContext>(i);
}


size_t USLParser::Switch_statementContext::getRuleIndex() const {
  return USLParser::RuleSwitch_statement;
}

void USLParser::Switch_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch_statement(this);
}

void USLParser::Switch_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch_statement(this);
}


std::any USLParser::Switch_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitSwitch_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Switch_statementContext* USLParser::switch_statement() {
  Switch_statementContext *_localctx = _tracker.createInstance<Switch_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, USLParser::RuleSwitch_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(USLParser::SWITCH);
    setState(280);
    match(USLParser::T__5);
    setState(281);
    expression();
    setState(282);
    match(USLParser::T__6);
    setState(283);
    match(USLParser::T__1);
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::CASE) {
      setState(284);
      case_statement();
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(290);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Case_statementContext ------------------------------------------------------------------

USLParser::Case_statementContext::Case_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Case_statementContext::CASE() {
  return getToken(USLParser::CASE, 0);
}

USLParser::ExpressionContext* USLParser::Case_statementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

USLParser::Basic_blockContext* USLParser::Case_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::Case_statementContext::getRuleIndex() const {
  return USLParser::RuleCase_statement;
}

void USLParser::Case_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase_statement(this);
}

void USLParser::Case_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase_statement(this);
}


std::any USLParser::Case_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCase_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Case_statementContext* USLParser::case_statement() {
  Case_statementContext *_localctx = _tracker.createInstance<Case_statementContext>(_ctx, getState());
  enterRule(_localctx, 32, USLParser::RuleCase_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(USLParser::CASE);
    setState(293);
    expression();
    setState(294);
    match(USLParser::T__3);
    setState(295);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Goto_statementContext ------------------------------------------------------------------

USLParser::Goto_statementContext::Goto_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Goto_statementContext::GOTO() {
  return getToken(USLParser::GOTO, 0);
}

tree::TerminalNode* USLParser::Goto_statementContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::Goto_statementContext::getRuleIndex() const {
  return USLParser::RuleGoto_statement;
}

void USLParser::Goto_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGoto_statement(this);
}

void USLParser::Goto_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGoto_statement(this);
}


std::any USLParser::Goto_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitGoto_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Goto_statementContext* USLParser::goto_statement() {
  Goto_statementContext *_localctx = _tracker.createInstance<Goto_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, USLParser::RuleGoto_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(USLParser::GOTO);
    setState(298);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Lable_statementContext ------------------------------------------------------------------

USLParser::Lable_statementContext::Lable_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Lable_statementContext::LABLE() {
  return getToken(USLParser::LABLE, 0);
}

tree::TerminalNode* USLParser::Lable_statementContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::Lable_statementContext::getRuleIndex() const {
  return USLParser::RuleLable_statement;
}

void USLParser::Lable_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLable_statement(this);
}

void USLParser::Lable_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLable_statement(this);
}


std::any USLParser::Lable_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitLable_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Lable_statementContext* USLParser::lable_statement() {
  Lable_statementContext *_localctx = _tracker.createInstance<Lable_statementContext>(_ctx, getState());
  enterRule(_localctx, 36, USLParser::RuleLable_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(USLParser::LABLE);
    setState(301);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throw_statementContext ------------------------------------------------------------------

USLParser::Throw_statementContext::Throw_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Throw_statementContext::THROW() {
  return getToken(USLParser::THROW, 0);
}

USLParser::ExpressionContext* USLParser::Throw_statementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::Throw_statementContext::getRuleIndex() const {
  return USLParser::RuleThrow_statement;
}

void USLParser::Throw_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrow_statement(this);
}

void USLParser::Throw_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrow_statement(this);
}


std::any USLParser::Throw_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitThrow_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Throw_statementContext* USLParser::throw_statement() {
  Throw_statementContext *_localctx = _tracker.createInstance<Throw_statementContext>(_ctx, getState());
  enterRule(_localctx, 38, USLParser::RuleThrow_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(USLParser::THROW);
    setState(304);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

USLParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::ExpressionContext* USLParser::Expression_statementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::Expression_statementContext::getRuleIndex() const {
  return USLParser::RuleExpression_statement;
}

void USLParser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void USLParser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}


std::any USLParser::Expression_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExpression_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Expression_statementContext* USLParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 40, USLParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

USLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Assignment_exprContext* USLParser::ExpressionContext::assignment_expr() {
  return getRuleContext<USLParser::Assignment_exprContext>(0);
}


size_t USLParser::ExpressionContext::getRuleIndex() const {
  return USLParser::RuleExpression;
}

void USLParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void USLParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any USLParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ExpressionContext* USLParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 42, USLParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    assignment_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_exprContext ------------------------------------------------------------------

USLParser::Assignment_exprContext::Assignment_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Equality_exprContext* USLParser::Assignment_exprContext::equality_expr() {
  return getRuleContext<USLParser::Equality_exprContext>(0);
}

tree::TerminalNode* USLParser::Assignment_exprContext::ASSIGN_OP() {
  return getToken(USLParser::ASSIGN_OP, 0);
}

USLParser::Assignment_exprContext* USLParser::Assignment_exprContext::assignment_expr() {
  return getRuleContext<USLParser::Assignment_exprContext>(0);
}


size_t USLParser::Assignment_exprContext::getRuleIndex() const {
  return USLParser::RuleAssignment_expr;
}

void USLParser::Assignment_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_expr(this);
}

void USLParser::Assignment_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_expr(this);
}


std::any USLParser::Assignment_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAssignment_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Assignment_exprContext* USLParser::assignment_expr() {
  Assignment_exprContext *_localctx = _tracker.createInstance<Assignment_exprContext>(_ctx, getState());
  enterRule(_localctx, 44, USLParser::RuleAssignment_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    antlrcpp::downCast<Assignment_exprContext *>(_localctx)->left = equality_expr();
    setState(313);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(311);
      match(USLParser::ASSIGN_OP);
      setState(312);
      assignment_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equality_exprContext ------------------------------------------------------------------

USLParser::Equality_exprContext::Equality_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Comparison_exprContext *> USLParser::Equality_exprContext::comparison_expr() {
  return getRuleContexts<USLParser::Comparison_exprContext>();
}

USLParser::Comparison_exprContext* USLParser::Equality_exprContext::comparison_expr(size_t i) {
  return getRuleContext<USLParser::Comparison_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Equality_exprContext::EQUALS() {
  return getTokens(USLParser::EQUALS);
}

tree::TerminalNode* USLParser::Equality_exprContext::EQUALS(size_t i) {
  return getToken(USLParser::EQUALS, i);
}


size_t USLParser::Equality_exprContext::getRuleIndex() const {
  return USLParser::RuleEquality_expr;
}

void USLParser::Equality_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_expr(this);
}

void USLParser::Equality_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_expr(this);
}


std::any USLParser::Equality_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitEquality_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Equality_exprContext* USLParser::equality_expr() {
  Equality_exprContext *_localctx = _tracker.createInstance<Equality_exprContext>(_ctx, getState());
  enterRule(_localctx, 46, USLParser::RuleEquality_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    antlrcpp::downCast<Equality_exprContext *>(_localctx)->left = comparison_expr();
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::EQUALS) {
      setState(316);
      match(USLParser::EQUALS);
      setState(317);
      comparison_expr();
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_exprContext ------------------------------------------------------------------

USLParser::Comparison_exprContext::Comparison_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Bitshift_exprContext *> USLParser::Comparison_exprContext::bitshift_expr() {
  return getRuleContexts<USLParser::Bitshift_exprContext>();
}

USLParser::Bitshift_exprContext* USLParser::Comparison_exprContext::bitshift_expr(size_t i) {
  return getRuleContext<USLParser::Bitshift_exprContext>(i);
}

std::vector<USLParser::Comparision_operatorContext *> USLParser::Comparison_exprContext::comparision_operator() {
  return getRuleContexts<USLParser::Comparision_operatorContext>();
}

USLParser::Comparision_operatorContext* USLParser::Comparison_exprContext::comparision_operator(size_t i) {
  return getRuleContext<USLParser::Comparision_operatorContext>(i);
}


size_t USLParser::Comparison_exprContext::getRuleIndex() const {
  return USLParser::RuleComparison_expr;
}

void USLParser::Comparison_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_expr(this);
}

void USLParser::Comparison_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_expr(this);
}


std::any USLParser::Comparison_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitComparison_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Comparison_exprContext* USLParser::comparison_expr() {
  Comparison_exprContext *_localctx = _tracker.createInstance<Comparison_exprContext>(_ctx, getState());
  enterRule(_localctx, 48, USLParser::RuleComparison_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    antlrcpp::downCast<Comparison_exprContext *>(_localctx)->left = bitshift_expr();
    setState(329);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 106) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 106)) & 27) != 0)) {
      setState(324);
      comparision_operator();
      setState(325);
      bitshift_expr();
      setState(331);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bitshift_exprContext ------------------------------------------------------------------

USLParser::Bitshift_exprContext::Bitshift_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Additive_exprContext *> USLParser::Bitshift_exprContext::additive_expr() {
  return getRuleContexts<USLParser::Additive_exprContext>();
}

USLParser::Additive_exprContext* USLParser::Bitshift_exprContext::additive_expr(size_t i) {
  return getRuleContext<USLParser::Additive_exprContext>(i);
}

std::vector<USLParser::Bitshift_operatorContext *> USLParser::Bitshift_exprContext::bitshift_operator() {
  return getRuleContexts<USLParser::Bitshift_operatorContext>();
}

USLParser::Bitshift_operatorContext* USLParser::Bitshift_exprContext::bitshift_operator(size_t i) {
  return getRuleContext<USLParser::Bitshift_operatorContext>(i);
}


size_t USLParser::Bitshift_exprContext::getRuleIndex() const {
  return USLParser::RuleBitshift_expr;
}

void USLParser::Bitshift_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitshift_expr(this);
}

void USLParser::Bitshift_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitshift_expr(this);
}


std::any USLParser::Bitshift_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitBitshift_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Bitshift_exprContext* USLParser::bitshift_expr() {
  Bitshift_exprContext *_localctx = _tracker.createInstance<Bitshift_exprContext>(_ctx, getState());
  enterRule(_localctx, 50, USLParser::RuleBitshift_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    antlrcpp::downCast<Bitshift_exprContext *>(_localctx)->left = additive_expr();
    setState(338);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::B_LEFT

    || _la == USLParser::B_RIGHT) {
      setState(333);
      bitshift_operator();
      setState(334);
      additive_expr();
      setState(340);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_exprContext ------------------------------------------------------------------

USLParser::Additive_exprContext::Additive_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Multiplicative_exprContext *> USLParser::Additive_exprContext::multiplicative_expr() {
  return getRuleContexts<USLParser::Multiplicative_exprContext>();
}

USLParser::Multiplicative_exprContext* USLParser::Additive_exprContext::multiplicative_expr(size_t i) {
  return getRuleContext<USLParser::Multiplicative_exprContext>(i);
}

std::vector<USLParser::Additive_operatorContext *> USLParser::Additive_exprContext::additive_operator() {
  return getRuleContexts<USLParser::Additive_operatorContext>();
}

USLParser::Additive_operatorContext* USLParser::Additive_exprContext::additive_operator(size_t i) {
  return getRuleContext<USLParser::Additive_operatorContext>(i);
}


size_t USLParser::Additive_exprContext::getRuleIndex() const {
  return USLParser::RuleAdditive_expr;
}

void USLParser::Additive_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_expr(this);
}

void USLParser::Additive_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_expr(this);
}


std::any USLParser::Additive_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAdditive_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Additive_exprContext* USLParser::additive_expr() {
  Additive_exprContext *_localctx = _tracker.createInstance<Additive_exprContext>(_ctx, getState());
  enterRule(_localctx, 52, USLParser::RuleAdditive_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    antlrcpp::downCast<Additive_exprContext *>(_localctx)->left = multiplicative_expr();
    setState(347);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::PLUS_OP

    || _la == USLParser::MINUS_OP) {
      setState(342);
      additive_operator();
      setState(343);
      multiplicative_expr();
      setState(349);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_exprContext ------------------------------------------------------------------

USLParser::Multiplicative_exprContext::Multiplicative_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Postfix_exprContext *> USLParser::Multiplicative_exprContext::postfix_expr() {
  return getRuleContexts<USLParser::Postfix_exprContext>();
}

USLParser::Postfix_exprContext* USLParser::Multiplicative_exprContext::postfix_expr(size_t i) {
  return getRuleContext<USLParser::Postfix_exprContext>(i);
}

std::vector<USLParser::Multiplicative_operatorContext *> USLParser::Multiplicative_exprContext::multiplicative_operator() {
  return getRuleContexts<USLParser::Multiplicative_operatorContext>();
}

USLParser::Multiplicative_operatorContext* USLParser::Multiplicative_exprContext::multiplicative_operator(size_t i) {
  return getRuleContext<USLParser::Multiplicative_operatorContext>(i);
}


size_t USLParser::Multiplicative_exprContext::getRuleIndex() const {
  return USLParser::RuleMultiplicative_expr;
}

void USLParser::Multiplicative_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_expr(this);
}

void USLParser::Multiplicative_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_expr(this);
}


std::any USLParser::Multiplicative_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Multiplicative_exprContext* USLParser::multiplicative_expr() {
  Multiplicative_exprContext *_localctx = _tracker.createInstance<Multiplicative_exprContext>(_ctx, getState());
  enterRule(_localctx, 54, USLParser::RuleMultiplicative_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    antlrcpp::downCast<Multiplicative_exprContext *>(_localctx)->left = postfix_expr();
    setState(356);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 94) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 94)) & 7) != 0)) {
      setState(351);
      multiplicative_operator();
      setState(352);
      postfix_expr();
      setState(358);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_exprContext ------------------------------------------------------------------

USLParser::Postfix_exprContext::Postfix_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Prefix_exprContext* USLParser::Postfix_exprContext::prefix_expr() {
  return getRuleContext<USLParser::Prefix_exprContext>(0);
}

std::vector<USLParser::Postfix_operatorContext *> USLParser::Postfix_exprContext::postfix_operator() {
  return getRuleContexts<USLParser::Postfix_operatorContext>();
}

USLParser::Postfix_operatorContext* USLParser::Postfix_exprContext::postfix_operator(size_t i) {
  return getRuleContext<USLParser::Postfix_operatorContext>(i);
}


size_t USLParser::Postfix_exprContext::getRuleIndex() const {
  return USLParser::RulePostfix_expr;
}

void USLParser::Postfix_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_expr(this);
}

void USLParser::Postfix_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_expr(this);
}


std::any USLParser::Postfix_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPostfix_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Postfix_exprContext* USLParser::postfix_expr() {
  Postfix_exprContext *_localctx = _tracker.createInstance<Postfix_exprContext>(_ctx, getState());
  enterRule(_localctx, 56, USLParser::RulePostfix_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    prefix_expr();
    setState(363);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__5

    || _la == USLParser::T__9 || _la == USLParser::INCREMENT

    || _la == USLParser::DECREMENT) {
      setState(360);
      postfix_operator();
      setState(365);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Prefix_exprContext ------------------------------------------------------------------

USLParser::Prefix_exprContext::Prefix_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Prefix_operatorContext* USLParser::Prefix_exprContext::prefix_operator() {
  return getRuleContext<USLParser::Prefix_operatorContext>(0);
}

USLParser::Prefix_exprContext* USLParser::Prefix_exprContext::prefix_expr() {
  return getRuleContext<USLParser::Prefix_exprContext>(0);
}

USLParser::Primary_exprContext* USLParser::Prefix_exprContext::primary_expr() {
  return getRuleContext<USLParser::Primary_exprContext>(0);
}


size_t USLParser::Prefix_exprContext::getRuleIndex() const {
  return USLParser::RulePrefix_expr;
}

void USLParser::Prefix_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefix_expr(this);
}

void USLParser::Prefix_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefix_expr(this);
}


std::any USLParser::Prefix_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPrefix_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Prefix_exprContext* USLParser::prefix_expr() {
  Prefix_exprContext *_localctx = _tracker.createInstance<Prefix_exprContext>(_ctx, getState());
  enterRule(_localctx, 58, USLParser::RulePrefix_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(370);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::HASH_OP:
      case USLParser::INCREMENT:
      case USLParser::DECREMENT:
      case USLParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(366);
        prefix_operator();
        setState(367);
        prefix_expr();
        break;
      }

      case USLParser::T__5:
      case USLParser::BOOL_LITTERAL_TRUE:
      case USLParser::BOOL_LITTERAL_FALSE:
      case USLParser::INT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL:
      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(369);
        primary_expr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_exprContext ------------------------------------------------------------------

USLParser::Primary_exprContext::Primary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Quailified_nameContext* USLParser::Primary_exprContext::quailified_name() {
  return getRuleContext<USLParser::Quailified_nameContext>(0);
}

USLParser::LitteralContext* USLParser::Primary_exprContext::litteral() {
  return getRuleContext<USLParser::LitteralContext>(0);
}

USLParser::ExpressionContext* USLParser::Primary_exprContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::Primary_exprContext::getRuleIndex() const {
  return USLParser::RulePrimary_expr;
}

void USLParser::Primary_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_expr(this);
}

void USLParser::Primary_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_expr(this);
}


std::any USLParser::Primary_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPrimary_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Primary_exprContext* USLParser::primary_expr() {
  Primary_exprContext *_localctx = _tracker.createInstance<Primary_exprContext>(_ctx, getState());
  enterRule(_localctx, 60, USLParser::RulePrimary_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(372);
        quailified_name();
        break;
      }

      case USLParser::BOOL_LITTERAL_TRUE:
      case USLParser::BOOL_LITTERAL_FALSE:
      case USLParser::INT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL: {
        enterOuterAlt(_localctx, 2);
        setState(373);
        litteral();
        break;
      }

      case USLParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(374);
        match(USLParser::T__5);
        setState(375);
        expression();
        setState(376);
        match(USLParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Acces_modifiersContext ------------------------------------------------------------------

USLParser::Acces_modifiersContext::Acces_modifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Acces_modifiersContext::PUBLIC() {
  return getToken(USLParser::PUBLIC, 0);
}

tree::TerminalNode* USLParser::Acces_modifiersContext::PRIVATE() {
  return getToken(USLParser::PRIVATE, 0);
}

tree::TerminalNode* USLParser::Acces_modifiersContext::PROTECTED() {
  return getToken(USLParser::PROTECTED, 0);
}


size_t USLParser::Acces_modifiersContext::getRuleIndex() const {
  return USLParser::RuleAcces_modifiers;
}

void USLParser::Acces_modifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAcces_modifiers(this);
}

void USLParser::Acces_modifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAcces_modifiers(this);
}


std::any USLParser::Acces_modifiersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAcces_modifiers(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Acces_modifiersContext* USLParser::acces_modifiers() {
  Acces_modifiersContext *_localctx = _tracker.createInstance<Acces_modifiersContext>(_ctx, getState());
  enterRule(_localctx, 62, USLParser::RuleAcces_modifiers);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316530991104) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Throws_postfixContext ------------------------------------------------------------------

USLParser::Throws_postfixContext::Throws_postfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Throws_postfixContext::THROWS() {
  return getToken(USLParser::THROWS, 0);
}

std::vector<USLParser::Quailified_nameContext *> USLParser::Throws_postfixContext::quailified_name() {
  return getRuleContexts<USLParser::Quailified_nameContext>();
}

USLParser::Quailified_nameContext* USLParser::Throws_postfixContext::quailified_name(size_t i) {
  return getRuleContext<USLParser::Quailified_nameContext>(i);
}

tree::TerminalNode* USLParser::Throws_postfixContext::MAYBE() {
  return getToken(USLParser::MAYBE, 0);
}


size_t USLParser::Throws_postfixContext::getRuleIndex() const {
  return USLParser::RuleThrows_postfix;
}

void USLParser::Throws_postfixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrows_postfix(this);
}

void USLParser::Throws_postfixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrows_postfix(this);
}


std::any USLParser::Throws_postfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitThrows_postfix(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Throws_postfixContext* USLParser::throws_postfix() {
  Throws_postfixContext *_localctx = _tracker.createInstance<Throws_postfixContext>(_ctx, getState());
  enterRule(_localctx, 64, USLParser::RuleThrows_postfix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::THROWS: {
        enterOuterAlt(_localctx, 1);
        setState(382);
        match(USLParser::THROWS);
        setState(383);
        match(USLParser::T__5);

        setState(384);
        quailified_name();
        setState(389);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == USLParser::T__4) {
          setState(385);
          match(USLParser::T__4);
          setState(386);
          quailified_name();
          setState(391);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case USLParser::MAYBE: {
        enterOuterAlt(_localctx, 2);
        setState(392);
        match(USLParser::MAYBE);
        setState(393);
        match(USLParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Quailified_nameContext ------------------------------------------------------------------

USLParser::Quailified_nameContext::Quailified_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Quailified_nameContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Scoperesolution_listContext* USLParser::Quailified_nameContext::scoperesolution_list() {
  return getRuleContext<USLParser::Scoperesolution_listContext>(0);
}


size_t USLParser::Quailified_nameContext::getRuleIndex() const {
  return USLParser::RuleQuailified_name;
}

void USLParser::Quailified_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuailified_name(this);
}

void USLParser::Quailified_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuailified_name(this);
}


std::any USLParser::Quailified_nameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitQuailified_name(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Quailified_nameContext* USLParser::quailified_name() {
  Quailified_nameContext *_localctx = _tracker.createInstance<Quailified_nameContext>(_ctx, getState());
  enterRule(_localctx, 66, USLParser::RuleQuailified_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(396);
      scoperesolution_list();
      break;
    }

    default:
      break;
    }
    setState(399);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Attribute_additionContext ------------------------------------------------------------------

USLParser::Attribute_additionContext::Attribute_additionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::AttributeContext *> USLParser::Attribute_additionContext::attribute() {
  return getRuleContexts<USLParser::AttributeContext>();
}

USLParser::AttributeContext* USLParser::Attribute_additionContext::attribute(size_t i) {
  return getRuleContext<USLParser::AttributeContext>(i);
}


size_t USLParser::Attribute_additionContext::getRuleIndex() const {
  return USLParser::RuleAttribute_addition;
}

void USLParser::Attribute_additionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute_addition(this);
}

void USLParser::Attribute_additionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute_addition(this);
}


std::any USLParser::Attribute_additionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAttribute_addition(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Attribute_additionContext* USLParser::attribute_addition() {
  Attribute_additionContext *_localctx = _tracker.createInstance<Attribute_additionContext>(_ctx, getState());
  enterRule(_localctx, 68, USLParser::RuleAttribute_addition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    match(USLParser::T__7);
    setState(402);
    attribute();
    setState(407);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(403);
      match(USLParser::T__4);
      setState(404);
      attribute();
      setState(409);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(410);
    match(USLParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

USLParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Quailified_nameContext* USLParser::AttributeContext::quailified_name() {
  return getRuleContext<USLParser::Quailified_nameContext>(0);
}

std::vector<USLParser::ExpressionContext *> USLParser::AttributeContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::AttributeContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::AttributeContext::getRuleIndex() const {
  return USLParser::RuleAttribute;
}

void USLParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void USLParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}


std::any USLParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

USLParser::AttributeContext* USLParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 70, USLParser::RuleAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    quailified_name();
    setState(424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__5) {
      setState(413);
      match(USLParser::T__5);
      setState(414);
      expression();
      setState(419);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == USLParser::T__4) {
        setState(415);
        match(USLParser::T__4);
        setState(416);
        expression();
        setState(421);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(422);
      match(USLParser::T__6);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparision_operatorContext ------------------------------------------------------------------

USLParser::Comparision_operatorContext::Comparision_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Comparision_operatorContext::LESS() {
  return getToken(USLParser::LESS, 0);
}

tree::TerminalNode* USLParser::Comparision_operatorContext::LARGER() {
  return getToken(USLParser::LARGER, 0);
}

tree::TerminalNode* USLParser::Comparision_operatorContext::LESS_EQ() {
  return getToken(USLParser::LESS_EQ, 0);
}

tree::TerminalNode* USLParser::Comparision_operatorContext::LARGER_EQ() {
  return getToken(USLParser::LARGER_EQ, 0);
}


size_t USLParser::Comparision_operatorContext::getRuleIndex() const {
  return USLParser::RuleComparision_operator;
}

void USLParser::Comparision_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparision_operator(this);
}

void USLParser::Comparision_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparision_operator(this);
}


std::any USLParser::Comparision_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitComparision_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Comparision_operatorContext* USLParser::comparision_operator() {
  Comparision_operatorContext *_localctx = _tracker.createInstance<Comparision_operatorContext>(_ctx, getState());
  enterRule(_localctx, 72, USLParser::RuleComparision_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    _la = _input->LA(1);
    if (!(((((_la - 106) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 106)) & 27) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bitshift_operatorContext ------------------------------------------------------------------

USLParser::Bitshift_operatorContext::Bitshift_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Bitshift_operatorContext::B_LEFT() {
  return getToken(USLParser::B_LEFT, 0);
}

tree::TerminalNode* USLParser::Bitshift_operatorContext::B_RIGHT() {
  return getToken(USLParser::B_RIGHT, 0);
}


size_t USLParser::Bitshift_operatorContext::getRuleIndex() const {
  return USLParser::RuleBitshift_operator;
}

void USLParser::Bitshift_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitshift_operator(this);
}

void USLParser::Bitshift_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitshift_operator(this);
}


std::any USLParser::Bitshift_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitBitshift_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Bitshift_operatorContext* USLParser::bitshift_operator() {
  Bitshift_operatorContext *_localctx = _tracker.createInstance<Bitshift_operatorContext>(_ctx, getState());
  enterRule(_localctx, 74, USLParser::RuleBitshift_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    _la = _input->LA(1);
    if (!(_la == USLParser::B_LEFT

    || _la == USLParser::B_RIGHT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Additive_operatorContext ------------------------------------------------------------------

USLParser::Additive_operatorContext::Additive_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Additive_operatorContext::PLUS_OP() {
  return getToken(USLParser::PLUS_OP, 0);
}

tree::TerminalNode* USLParser::Additive_operatorContext::MINUS_OP() {
  return getToken(USLParser::MINUS_OP, 0);
}


size_t USLParser::Additive_operatorContext::getRuleIndex() const {
  return USLParser::RuleAdditive_operator;
}

void USLParser::Additive_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_operator(this);
}

void USLParser::Additive_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_operator(this);
}


std::any USLParser::Additive_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAdditive_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Additive_operatorContext* USLParser::additive_operator() {
  Additive_operatorContext *_localctx = _tracker.createInstance<Additive_operatorContext>(_ctx, getState());
  enterRule(_localctx, 76, USLParser::RuleAdditive_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    _la = _input->LA(1);
    if (!(_la == USLParser::PLUS_OP

    || _la == USLParser::MINUS_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_operatorContext ------------------------------------------------------------------

USLParser::Multiplicative_operatorContext::Multiplicative_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Multiplicative_operatorContext::MULT_OP() {
  return getToken(USLParser::MULT_OP, 0);
}

tree::TerminalNode* USLParser::Multiplicative_operatorContext::DIV_OP() {
  return getToken(USLParser::DIV_OP, 0);
}

tree::TerminalNode* USLParser::Multiplicative_operatorContext::MOD_OP() {
  return getToken(USLParser::MOD_OP, 0);
}


size_t USLParser::Multiplicative_operatorContext::getRuleIndex() const {
  return USLParser::RuleMultiplicative_operator;
}

void USLParser::Multiplicative_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_operator(this);
}

void USLParser::Multiplicative_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_operator(this);
}


std::any USLParser::Multiplicative_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Multiplicative_operatorContext* USLParser::multiplicative_operator() {
  Multiplicative_operatorContext *_localctx = _tracker.createInstance<Multiplicative_operatorContext>(_ctx, getState());
  enterRule(_localctx, 78, USLParser::RuleMultiplicative_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    _la = _input->LA(1);
    if (!(((((_la - 94) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 94)) & 7) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Prefix_operatorContext ------------------------------------------------------------------

USLParser::Prefix_operatorContext::Prefix_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Prefix_operatorContext::INCREMENT() {
  return getToken(USLParser::INCREMENT, 0);
}

tree::TerminalNode* USLParser::Prefix_operatorContext::DECREMENT() {
  return getToken(USLParser::DECREMENT, 0);
}

tree::TerminalNode* USLParser::Prefix_operatorContext::NOT() {
  return getToken(USLParser::NOT, 0);
}

tree::TerminalNode* USLParser::Prefix_operatorContext::HASH_OP() {
  return getToken(USLParser::HASH_OP, 0);
}


size_t USLParser::Prefix_operatorContext::getRuleIndex() const {
  return USLParser::RulePrefix_operator;
}

void USLParser::Prefix_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefix_operator(this);
}

void USLParser::Prefix_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefix_operator(this);
}


std::any USLParser::Prefix_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPrefix_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Prefix_operatorContext* USLParser::prefix_operator() {
  Prefix_operatorContext *_localctx = _tracker.createInstance<Prefix_operatorContext>(_ctx, getState());
  enterRule(_localctx, 80, USLParser::RulePrefix_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    _la = _input->LA(1);
    if (!(((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 2055) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_operatorContext ------------------------------------------------------------------

USLParser::Postfix_operatorContext::Postfix_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Call_operatorContext* USLParser::Postfix_operatorContext::call_operator() {
  return getRuleContext<USLParser::Call_operatorContext>(0);
}

USLParser::Index_operatorContext* USLParser::Postfix_operatorContext::index_operator() {
  return getRuleContext<USLParser::Index_operatorContext>(0);
}

tree::TerminalNode* USLParser::Postfix_operatorContext::INCREMENT() {
  return getToken(USLParser::INCREMENT, 0);
}

tree::TerminalNode* USLParser::Postfix_operatorContext::DECREMENT() {
  return getToken(USLParser::DECREMENT, 0);
}


size_t USLParser::Postfix_operatorContext::getRuleIndex() const {
  return USLParser::RulePostfix_operator;
}

void USLParser::Postfix_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_operator(this);
}

void USLParser::Postfix_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_operator(this);
}


std::any USLParser::Postfix_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPostfix_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Postfix_operatorContext* USLParser::postfix_operator() {
  Postfix_operatorContext *_localctx = _tracker.createInstance<Postfix_operatorContext>(_ctx, getState());
  enterRule(_localctx, 82, USLParser::RulePostfix_operator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(440);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(436);
        call_operator();
        break;
      }

      case USLParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(437);
        index_operator();
        break;
      }

      case USLParser::INCREMENT: {
        enterOuterAlt(_localctx, 3);
        setState(438);
        match(USLParser::INCREMENT);
        break;
      }

      case USLParser::DECREMENT: {
        enterOuterAlt(_localctx, 4);
        setState(439);
        match(USLParser::DECREMENT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_operatorContext ------------------------------------------------------------------

USLParser::Call_operatorContext::Call_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ExpressionContext *> USLParser::Call_operatorContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Call_operatorContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::Call_operatorContext::getRuleIndex() const {
  return USLParser::RuleCall_operator;
}

void USLParser::Call_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_operator(this);
}

void USLParser::Call_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_operator(this);
}


std::any USLParser::Call_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCall_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Call_operatorContext* USLParser::call_operator() {
  Call_operatorContext *_localctx = _tracker.createInstance<Call_operatorContext>(_ctx, getState());
  enterRule(_localctx, 84, USLParser::RuleCall_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(442);
    match(USLParser::T__5);
    setState(443);
    expression();
    setState(448);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(444);
      match(USLParser::T__4);
      setState(445);
      expression();
      setState(450);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(451);
    match(USLParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Index_operatorContext ------------------------------------------------------------------

USLParser::Index_operatorContext::Index_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ExpressionContext *> USLParser::Index_operatorContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Index_operatorContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::Index_operatorContext::getRuleIndex() const {
  return USLParser::RuleIndex_operator;
}

void USLParser::Index_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex_operator(this);
}

void USLParser::Index_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex_operator(this);
}


std::any USLParser::Index_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitIndex_operator(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Index_operatorContext* USLParser::index_operator() {
  Index_operatorContext *_localctx = _tracker.createInstance<Index_operatorContext>(_ctx, getState());
  enterRule(_localctx, 86, USLParser::RuleIndex_operator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(USLParser::T__9);
    setState(454);
    expression();
    setState(459);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(455);
      match(USLParser::T__4);
      setState(456);
      expression();
      setState(461);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(462);
    match(USLParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cvu_typeContext ------------------------------------------------------------------

USLParser::Cvu_typeContext::Cvu_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Cvu_decoratorsContext* USLParser::Cvu_typeContext::cvu_decorators() {
  return getRuleContext<USLParser::Cvu_decoratorsContext>(0);
}

USLParser::TypeContext* USLParser::Cvu_typeContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}


size_t USLParser::Cvu_typeContext::getRuleIndex() const {
  return USLParser::RuleCvu_type;
}

void USLParser::Cvu_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvu_type(this);
}

void USLParser::Cvu_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvu_type(this);
}


std::any USLParser::Cvu_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCvu_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Cvu_typeContext* USLParser::cvu_type() {
  Cvu_typeContext *_localctx = _tracker.createInstance<Cvu_typeContext>(_ctx, getState());
  enterRule(_localctx, 88, USLParser::RuleCvu_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    cvu_decorators();
    setState(465);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

USLParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Quailified_nameContext* USLParser::TypeContext::quailified_name() {
  return getRuleContext<USLParser::Quailified_nameContext>(0);
}

tree::TerminalNode* USLParser::TypeContext::AUTO() {
  return getToken(USLParser::AUTO, 0);
}

USLParser::PrimitiveContext* USLParser::TypeContext::primitive() {
  return getRuleContext<USLParser::PrimitiveContext>(0);
}


size_t USLParser::TypeContext::getRuleIndex() const {
  return USLParser::RuleType;
}

void USLParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void USLParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any USLParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

USLParser::TypeContext* USLParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 90, USLParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(470);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(467);
        quailified_name();
        break;
      }

      case USLParser::AUTO: {
        enterOuterAlt(_localctx, 2);
        setState(468);
        match(USLParser::AUTO);
        break;
      }

      case USLParser::BYTE:
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::LONGDOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::VOID:
      case USLParser::NULLPTR_T:
      case USLParser::BOOL:
      case USLParser::M128:
      case USLParser::M128I:
      case USLParser::M128D:
      case USLParser::M256:
      case USLParser::M256I:
      case USLParser::M256D:
      case USLParser::M512:
      case USLParser::M512I:
      case USLParser::M512D:
      case USLParser::UNSIGNED: {
        enterOuterAlt(_localctx, 3);
        setState(469);
        primitive();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitiveContext ------------------------------------------------------------------

USLParser::PrimitiveContext::PrimitiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Integral_typeContext* USLParser::PrimitiveContext::integral_type() {
  return getRuleContext<USLParser::Integral_typeContext>(0);
}

USLParser::Floating_typeContext* USLParser::PrimitiveContext::floating_type() {
  return getRuleContext<USLParser::Floating_typeContext>(0);
}

USLParser::Vector_typeContext* USLParser::PrimitiveContext::vector_type() {
  return getRuleContext<USLParser::Vector_typeContext>(0);
}

tree::TerminalNode* USLParser::PrimitiveContext::STRING() {
  return getToken(USLParser::STRING, 0);
}

tree::TerminalNode* USLParser::PrimitiveContext::HASH() {
  return getToken(USLParser::HASH, 0);
}

tree::TerminalNode* USLParser::PrimitiveContext::CHAR() {
  return getToken(USLParser::CHAR, 0);
}

tree::TerminalNode* USLParser::PrimitiveContext::BYTE() {
  return getToken(USLParser::BYTE, 0);
}

tree::TerminalNode* USLParser::PrimitiveContext::BOOL() {
  return getToken(USLParser::BOOL, 0);
}

tree::TerminalNode* USLParser::PrimitiveContext::NULLPTR_T() {
  return getToken(USLParser::NULLPTR_T, 0);
}

tree::TerminalNode* USLParser::PrimitiveContext::VOID() {
  return getToken(USLParser::VOID, 0);
}


size_t USLParser::PrimitiveContext::getRuleIndex() const {
  return USLParser::RulePrimitive;
}

void USLParser::PrimitiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitive(this);
}

void USLParser::PrimitiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitive(this);
}


std::any USLParser::PrimitiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPrimitive(this);
  else
    return visitor->visitChildren(this);
}

USLParser::PrimitiveContext* USLParser::primitive() {
  PrimitiveContext *_localctx = _tracker.createInstance<PrimitiveContext>(_ctx, getState());
  enterRule(_localctx, 92, USLParser::RulePrimitive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(482);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG:
      case USLParser::UNSIGNED: {
        enterOuterAlt(_localctx, 1);
        setState(472);
        integral_type();
        break;
      }

      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::LONGDOUBLE: {
        enterOuterAlt(_localctx, 2);
        setState(473);
        floating_type();
        break;
      }

      case USLParser::M128:
      case USLParser::M128I:
      case USLParser::M128D:
      case USLParser::M256:
      case USLParser::M256I:
      case USLParser::M256D:
      case USLParser::M512:
      case USLParser::M512I:
      case USLParser::M512D: {
        enterOuterAlt(_localctx, 3);
        setState(474);
        vector_type();
        break;
      }

      case USLParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(475);
        match(USLParser::STRING);
        break;
      }

      case USLParser::HASH: {
        enterOuterAlt(_localctx, 5);
        setState(476);
        match(USLParser::HASH);
        break;
      }

      case USLParser::CHAR: {
        enterOuterAlt(_localctx, 6);
        setState(477);
        match(USLParser::CHAR);
        break;
      }

      case USLParser::BYTE: {
        enterOuterAlt(_localctx, 7);
        setState(478);
        match(USLParser::BYTE);
        break;
      }

      case USLParser::BOOL: {
        enterOuterAlt(_localctx, 8);
        setState(479);
        match(USLParser::BOOL);
        break;
      }

      case USLParser::NULLPTR_T: {
        enterOuterAlt(_localctx, 9);
        setState(480);
        match(USLParser::NULLPTR_T);
        break;
      }

      case USLParser::VOID: {
        enterOuterAlt(_localctx, 10);
        setState(481);
        match(USLParser::VOID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integral_typeContext ------------------------------------------------------------------

USLParser::Integral_typeContext::Integral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Integral_typeContext::SHORT() {
  return getToken(USLParser::SHORT, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::UNSIGNED() {
  return getToken(USLParser::UNSIGNED, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::LONG() {
  return getToken(USLParser::LONG, 0);
}


size_t USLParser::Integral_typeContext::getRuleIndex() const {
  return USLParser::RuleIntegral_type;
}

void USLParser::Integral_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegral_type(this);
}

void USLParser::Integral_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegral_type(this);
}


std::any USLParser::Integral_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitIntegral_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Integral_typeContext* USLParser::integral_type() {
  Integral_typeContext *_localctx = _tracker.createInstance<Integral_typeContext>(_ctx, getState());
  enterRule(_localctx, 94, USLParser::RuleIntegral_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(490);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::SHORT:
      case USLParser::UNSIGNED: {
        enterOuterAlt(_localctx, 1);
        setState(485);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == USLParser::UNSIGNED) {
          setState(484);
          match(USLParser::UNSIGNED);
        }
        setState(487);
        match(USLParser::SHORT);
        break;
      }

      case USLParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(488);
        match(USLParser::INT);
        break;
      }

      case USLParser::LONG: {
        enterOuterAlt(_localctx, 3);
        setState(489);
        match(USLParser::LONG);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Floating_typeContext ------------------------------------------------------------------

USLParser::Floating_typeContext::Floating_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Floating_typeContext::FLOAT() {
  return getToken(USLParser::FLOAT, 0);
}

tree::TerminalNode* USLParser::Floating_typeContext::DOUBLE() {
  return getToken(USLParser::DOUBLE, 0);
}

tree::TerminalNode* USLParser::Floating_typeContext::LONGDOUBLE() {
  return getToken(USLParser::LONGDOUBLE, 0);
}


size_t USLParser::Floating_typeContext::getRuleIndex() const {
  return USLParser::RuleFloating_type;
}

void USLParser::Floating_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloating_type(this);
}

void USLParser::Floating_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloating_type(this);
}


std::any USLParser::Floating_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFloating_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Floating_typeContext* USLParser::floating_type() {
  Floating_typeContext *_localctx = _tracker.createInstance<Floating_typeContext>(_ctx, getState());
  enterRule(_localctx, 96, USLParser::RuleFloating_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(492);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 14680064) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Vector_typeContext ------------------------------------------------------------------

USLParser::Vector_typeContext::Vector_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Vector_typeContext::M128() {
  return getToken(USLParser::M128, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M128D() {
  return getToken(USLParser::M128D, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M128I() {
  return getToken(USLParser::M128I, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M256() {
  return getToken(USLParser::M256, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M256D() {
  return getToken(USLParser::M256D, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M256I() {
  return getToken(USLParser::M256I, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M512() {
  return getToken(USLParser::M512, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M512D() {
  return getToken(USLParser::M512D, 0);
}

tree::TerminalNode* USLParser::Vector_typeContext::M512I() {
  return getToken(USLParser::M512I, 0);
}


size_t USLParser::Vector_typeContext::getRuleIndex() const {
  return USLParser::RuleVector_type;
}

void USLParser::Vector_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVector_type(this);
}

void USLParser::Vector_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVector_type(this);
}


std::any USLParser::Vector_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitVector_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Vector_typeContext* USLParser::vector_type() {
  Vector_typeContext *_localctx = _tracker.createInstance<Vector_typeContext>(_ctx, getState());
  enterRule(_localctx, 98, USLParser::RuleVector_type);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 548682072064) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Paremeter_listContext ------------------------------------------------------------------

USLParser::Paremeter_listContext::Paremeter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ParameterContext *> USLParser::Paremeter_listContext::parameter() {
  return getRuleContexts<USLParser::ParameterContext>();
}

USLParser::ParameterContext* USLParser::Paremeter_listContext::parameter(size_t i) {
  return getRuleContext<USLParser::ParameterContext>(i);
}


size_t USLParser::Paremeter_listContext::getRuleIndex() const {
  return USLParser::RuleParemeter_list;
}

void USLParser::Paremeter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParemeter_list(this);
}

void USLParser::Paremeter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParemeter_list(this);
}


std::any USLParser::Paremeter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitParemeter_list(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Paremeter_listContext* USLParser::paremeter_list() {
  Paremeter_listContext *_localctx = _tracker.createInstance<Paremeter_listContext>(_ctx, getState());
  enterRule(_localctx, 100, USLParser::RuleParemeter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    parameter();
    setState(501);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(497);
      match(USLParser::T__4);
      setState(498);
      parameter();
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

USLParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Cvu_typeContext* USLParser::ParameterContext::cvu_type() {
  return getRuleContext<USLParser::Cvu_typeContext>(0);
}

tree::TerminalNode* USLParser::ParameterContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::ParameterContext::getRuleIndex() const {
  return USLParser::RuleParameter;
}

void USLParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void USLParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any USLParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ParameterContext* USLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 102, USLParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    antlrcpp::downCast<ParameterContext *>(_localctx)->Type = cvu_type();
    setState(505);
    antlrcpp::downCast<ParameterContext *>(_localctx)->ParameterName = match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LitteralContext ------------------------------------------------------------------

USLParser::LitteralContext::LitteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::LitteralContext::INT_LITTERAL() {
  return getToken(USLParser::INT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::FLOAT_LITTERAL() {
  return getToken(USLParser::FLOAT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::STRING_LITTERAL() {
  return getToken(USLParser::STRING_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::CHAR_LITTERAL() {
  return getToken(USLParser::CHAR_LITTERAL, 0);
}

USLParser::Bool_litteralContext* USLParser::LitteralContext::bool_litteral() {
  return getRuleContext<USLParser::Bool_litteralContext>(0);
}


size_t USLParser::LitteralContext::getRuleIndex() const {
  return USLParser::RuleLitteral;
}

void USLParser::LitteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLitteral(this);
}

void USLParser::LitteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLitteral(this);
}


std::any USLParser::LitteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitLitteral(this);
  else
    return visitor->visitChildren(this);
}

USLParser::LitteralContext* USLParser::litteral() {
  LitteralContext *_localctx = _tracker.createInstance<LitteralContext>(_ctx, getState());
  enterRule(_localctx, 104, USLParser::RuleLitteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(512);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::INT_LITTERAL: {
        enterOuterAlt(_localctx, 1);
        setState(507);
        match(USLParser::INT_LITTERAL);
        break;
      }

      case USLParser::FLOAT_LITTERAL: {
        enterOuterAlt(_localctx, 2);
        setState(508);
        match(USLParser::FLOAT_LITTERAL);
        break;
      }

      case USLParser::STRING_LITTERAL: {
        enterOuterAlt(_localctx, 3);
        setState(509);
        match(USLParser::STRING_LITTERAL);
        break;
      }

      case USLParser::CHAR_LITTERAL: {
        enterOuterAlt(_localctx, 4);
        setState(510);
        match(USLParser::CHAR_LITTERAL);
        break;
      }

      case USLParser::BOOL_LITTERAL_TRUE:
      case USLParser::BOOL_LITTERAL_FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(511);
        bool_litteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_litteralContext ------------------------------------------------------------------

USLParser::Bool_litteralContext::Bool_litteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Bool_litteralContext::BOOL_LITTERAL_TRUE() {
  return getToken(USLParser::BOOL_LITTERAL_TRUE, 0);
}

tree::TerminalNode* USLParser::Bool_litteralContext::BOOL_LITTERAL_FALSE() {
  return getToken(USLParser::BOOL_LITTERAL_FALSE, 0);
}


size_t USLParser::Bool_litteralContext::getRuleIndex() const {
  return USLParser::RuleBool_litteral;
}

void USLParser::Bool_litteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_litteral(this);
}

void USLParser::Bool_litteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_litteral(this);
}


std::any USLParser::Bool_litteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitBool_litteral(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Bool_litteralContext* USLParser::bool_litteral() {
  Bool_litteralContext *_localctx = _tracker.createInstance<Bool_litteralContext>(_ctx, getState());
  enterRule(_localctx, 106, USLParser::RuleBool_litteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    _la = _input->LA(1);
    if (!(_la == USLParser::BOOL_LITTERAL_TRUE

    || _la == USLParser::BOOL_LITTERAL_FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cvu_decoratorsContext ------------------------------------------------------------------

USLParser::Cvu_decoratorsContext::Cvu_decoratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::Cvu_decoratorsContext::CONST() {
  return getTokens(USLParser::CONST);
}

tree::TerminalNode* USLParser::Cvu_decoratorsContext::CONST(size_t i) {
  return getToken(USLParser::CONST, i);
}

std::vector<tree::TerminalNode *> USLParser::Cvu_decoratorsContext::VOLATILE() {
  return getTokens(USLParser::VOLATILE);
}

tree::TerminalNode* USLParser::Cvu_decoratorsContext::VOLATILE(size_t i) {
  return getToken(USLParser::VOLATILE, i);
}

std::vector<tree::TerminalNode *> USLParser::Cvu_decoratorsContext::UNSAFE() {
  return getTokens(USLParser::UNSAFE);
}

tree::TerminalNode* USLParser::Cvu_decoratorsContext::UNSAFE(size_t i) {
  return getToken(USLParser::UNSAFE, i);
}


size_t USLParser::Cvu_decoratorsContext::getRuleIndex() const {
  return USLParser::RuleCvu_decorators;
}

void USLParser::Cvu_decoratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCvu_decorators(this);
}

void USLParser::Cvu_decoratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCvu_decorators(this);
}


std::any USLParser::Cvu_decoratorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCvu_decorators(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Cvu_decoratorsContext* USLParser::cvu_decorators() {
  Cvu_decoratorsContext *_localctx = _tracker.createInstance<Cvu_decoratorsContext>(_ctx, getState());
  enterRule(_localctx, 108, USLParser::RuleCvu_decorators);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 12289) != 0)) {
      setState(519);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case USLParser::CONST: {
          setState(516);
          antlrcpp::downCast<Cvu_decoratorsContext *>(_localctx)->consts = match(USLParser::CONST);
          break;
        }

        case USLParser::VOLATILE: {
          setState(517);
          antlrcpp::downCast<Cvu_decoratorsContext *>(_localctx)->volatiles = match(USLParser::VOLATILE);
          break;
        }

        case USLParser::UNSAFE: {
          setState(518);
          antlrcpp::downCast<Cvu_decoratorsContext *>(_localctx)->unsafes = match(USLParser::UNSAFE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(523);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Scoperesolution_listContext ------------------------------------------------------------------

USLParser::Scoperesolution_listContext::Scoperesolution_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::Scoperesolution_listContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::Scoperesolution_listContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

std::vector<tree::TerminalNode *> USLParser::Scoperesolution_listContext::SCOPE_RESSOLUTION_OP() {
  return getTokens(USLParser::SCOPE_RESSOLUTION_OP);
}

tree::TerminalNode* USLParser::Scoperesolution_listContext::SCOPE_RESSOLUTION_OP(size_t i) {
  return getToken(USLParser::SCOPE_RESSOLUTION_OP, i);
}


size_t USLParser::Scoperesolution_listContext::getRuleIndex() const {
  return USLParser::RuleScoperesolution_list;
}

void USLParser::Scoperesolution_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScoperesolution_list(this);
}

void USLParser::Scoperesolution_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScoperesolution_list(this);
}


std::any USLParser::Scoperesolution_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitScoperesolution_list(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Scoperesolution_listContext* USLParser::scoperesolution_list() {
  Scoperesolution_listContext *_localctx = _tracker.createInstance<Scoperesolution_listContext>(_ctx, getState());
  enterRule(_localctx, 110, USLParser::RuleScoperesolution_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(524);
    match(USLParser::ID);
    setState(529);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(525);
        match(USLParser::SCOPE_RESSOLUTION_OP);
        setState(526);
        match(USLParser::ID); 
      }
      setState(531);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(532);
    match(USLParser::SCOPE_RESSOLUTION_OP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Error_recoveryContext ------------------------------------------------------------------

USLParser::Error_recoveryContext::Error_recoveryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t USLParser::Error_recoveryContext::getRuleIndex() const {
  return USLParser::RuleError_recovery;
}

void USLParser::Error_recoveryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterError_recovery(this);
}

void USLParser::Error_recoveryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitError_recovery(this);
}


std::any USLParser::Error_recoveryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitError_recovery(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Error_recoveryContext* USLParser::error_recovery() {
  Error_recoveryContext *_localctx = _tracker.createInstance<Error_recoveryContext>(_ctx, getState());
  enterRule(_localctx, 112, USLParser::RuleError_recovery);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(535); 
    _errHandler->sync(this);
    alt = 1 + 1;
    do {
      switch (alt) {
        case 1 + 1: {
              setState(534);
              matchWildcard();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(537); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    } while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(539);
    match(USLParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void USLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  uslParserInitialize();
#else
  ::antlr4::internal::call_once(uslParserOnceFlag, uslParserInitialize);
#endif
}
