
// Generated from c:/Users/leo08/source/repos/Leo0806-studios/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2


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
      "switch_statement", "case_statement", "default_statement", "goto_statement", 
      "lable_statement", "throw_statement", "expression_statement", "expression", 
      "assignment_expr", "equality_expr", "comparison_expr", "bitshift_expr", 
      "additive_expr", "multiplicative_expr", "postfix_expr", "prefix_expr", 
      "primary_expr", "classmember_declaration", "acces_modifiers", "throws_postfix", 
      "quailified_name", "attribute_addition", "attribute", "comparision_operator", 
      "bitshift_operator", "additive_operator", "multiplicative_operator", 
      "prefix_operator", "postfix_operator", "call_operator", "index_operator", 
      "cvu_type", "pointer_type", "array_type", "type", "primitive", "integral_type", 
      "floating_type", "vector_type", "paremeter_list", "parameter", "litteral", 
      "bool_litteral", "cvu_decorators", "scoperesolution_list", "error_recovery"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "':'", "';'", "','", "'('", "')'", "'[['", "']]'", 
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
  	4,1,119,601,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,1,0,4,0,124,8,0,11,0,12,0,
  	125,1,0,1,0,1,1,1,1,1,1,1,1,3,1,134,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,144,8,2,1,3,1,3,1,3,1,3,5,3,150,8,3,10,3,12,3,153,9,3,1,3,1,3,1,
  	4,3,4,158,8,4,1,4,1,4,1,4,1,4,3,4,164,8,4,1,4,3,4,167,8,4,1,4,1,4,5,4,
  	171,8,4,10,4,12,4,174,9,4,1,4,1,4,1,4,1,5,3,5,180,8,5,1,5,1,5,1,5,1,5,
  	3,5,186,8,5,1,5,1,5,1,5,1,5,3,5,192,8,5,1,5,1,5,1,5,1,5,3,5,198,8,5,5,
  	5,200,8,5,10,5,12,5,203,9,5,1,5,3,5,206,8,5,1,5,1,5,1,5,1,6,1,6,1,6,1,
  	6,1,6,1,7,3,7,217,8,7,1,7,1,7,1,7,1,7,1,7,3,7,224,8,7,1,7,1,7,3,7,228,
  	8,7,1,7,3,7,231,8,7,1,7,3,7,234,8,7,1,7,3,7,237,8,7,1,7,1,7,1,7,1,8,1,
  	8,5,8,244,8,8,10,8,12,8,247,9,8,1,8,1,8,1,9,3,9,252,8,9,1,9,1,9,1,9,1,
  	9,3,9,258,8,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,5,10,268,8,10,10,
  	10,12,10,271,9,10,1,10,1,10,3,10,275,8,10,1,11,1,11,1,11,3,11,280,8,11,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,3,14,294,
  	8,14,1,14,1,14,3,14,298,8,14,1,14,1,14,3,14,302,8,14,1,14,1,14,1,14,1,
  	15,1,15,1,15,1,15,1,15,1,15,5,15,313,8,15,10,15,12,15,316,9,15,1,15,3,
  	15,319,8,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,
  	18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,1,
  	21,1,22,1,22,1,23,1,23,1,23,3,23,352,8,23,1,24,1,24,1,24,5,24,357,8,24,
  	10,24,12,24,360,9,24,1,25,1,25,1,25,1,25,5,25,366,8,25,10,25,12,25,369,
  	9,25,1,26,1,26,1,26,1,26,5,26,375,8,26,10,26,12,26,378,9,26,1,27,1,27,
  	1,27,1,27,5,27,384,8,27,10,27,12,27,387,9,27,1,28,1,28,1,28,1,28,5,28,
  	393,8,28,10,28,12,28,396,9,28,1,29,1,29,5,29,400,8,29,10,29,12,29,403,
  	9,29,1,30,1,30,1,30,1,30,3,30,409,8,30,1,31,1,31,1,31,1,31,1,31,1,31,
  	3,31,417,8,31,1,32,1,32,3,32,421,8,32,1,33,1,33,1,34,1,34,1,34,1,34,1,
  	34,5,34,430,8,34,10,34,12,34,433,9,34,1,34,1,34,3,34,437,8,34,1,35,3,
  	35,440,8,35,1,35,1,35,1,36,1,36,1,36,1,36,5,36,448,8,36,10,36,12,36,451,
  	9,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,5,37,460,8,37,10,37,12,37,463,
  	9,37,1,37,1,37,3,37,467,8,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,
  	1,42,1,42,1,43,1,43,1,43,1,43,3,43,483,8,43,1,44,1,44,1,44,1,44,5,44,
  	489,8,44,10,44,12,44,492,9,44,3,44,494,8,44,1,44,1,44,1,45,1,45,1,45,
  	1,45,5,45,502,8,45,10,45,12,45,505,9,45,1,45,1,45,1,46,1,46,1,46,3,46,
  	512,8,46,1,46,3,46,515,8,46,1,47,1,47,1,47,1,48,1,48,1,48,1,48,3,48,524,
  	8,48,3,48,526,8,48,1,48,1,48,1,49,1,49,1,49,3,49,533,8,49,1,50,1,50,1,
  	50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,3,50,545,8,50,1,51,3,51,548,8,51,
  	1,51,1,51,1,52,1,52,1,53,1,53,1,54,1,54,1,54,5,54,559,8,54,10,54,12,54,
  	562,9,54,1,55,1,55,1,55,1,56,1,56,1,56,1,56,1,56,3,56,572,8,56,1,57,1,
  	57,1,58,1,58,1,58,5,58,579,8,58,10,58,12,58,582,9,58,1,59,1,59,1,59,5,
  	59,587,8,59,10,59,12,59,590,9,59,1,59,1,59,1,60,4,60,595,8,60,11,60,12,
  	60,596,1,60,1,60,1,60,1,596,0,61,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,
  	74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,
  	116,118,120,0,11,1,0,13,14,1,0,57,59,2,0,106,107,109,110,1,0,103,104,
  	1,0,92,93,1,0,94,96,2,0,97,99,108,108,1,0,18,20,1,0,21,23,1,0,30,38,1,
  	0,41,42,627,0,123,1,0,0,0,2,133,1,0,0,0,4,143,1,0,0,0,6,145,1,0,0,0,8,
  	157,1,0,0,0,10,179,1,0,0,0,12,210,1,0,0,0,14,216,1,0,0,0,16,241,1,0,0,
  	0,18,251,1,0,0,0,20,261,1,0,0,0,22,276,1,0,0,0,24,281,1,0,0,0,26,287,
  	1,0,0,0,28,290,1,0,0,0,30,306,1,0,0,0,32,322,1,0,0,0,34,327,1,0,0,0,36,
  	331,1,0,0,0,38,335,1,0,0,0,40,339,1,0,0,0,42,343,1,0,0,0,44,346,1,0,0,
  	0,46,348,1,0,0,0,48,353,1,0,0,0,50,361,1,0,0,0,52,370,1,0,0,0,54,379,
  	1,0,0,0,56,388,1,0,0,0,58,397,1,0,0,0,60,408,1,0,0,0,62,416,1,0,0,0,64,
  	420,1,0,0,0,66,422,1,0,0,0,68,436,1,0,0,0,70,439,1,0,0,0,72,443,1,0,0,
  	0,74,454,1,0,0,0,76,468,1,0,0,0,78,470,1,0,0,0,80,472,1,0,0,0,82,474,
  	1,0,0,0,84,476,1,0,0,0,86,482,1,0,0,0,88,484,1,0,0,0,90,497,1,0,0,0,92,
  	508,1,0,0,0,94,516,1,0,0,0,96,519,1,0,0,0,98,532,1,0,0,0,100,544,1,0,
  	0,0,102,547,1,0,0,0,104,551,1,0,0,0,106,553,1,0,0,0,108,555,1,0,0,0,110,
  	563,1,0,0,0,112,571,1,0,0,0,114,573,1,0,0,0,116,580,1,0,0,0,118,583,1,
  	0,0,0,120,594,1,0,0,0,122,124,3,2,1,0,123,122,1,0,0,0,124,125,1,0,0,0,
  	125,123,1,0,0,0,125,126,1,0,0,0,126,127,1,0,0,0,127,128,5,0,0,1,128,1,
  	1,0,0,0,129,134,3,6,3,0,130,134,3,8,4,0,131,134,3,10,5,0,132,134,3,12,
  	6,0,133,129,1,0,0,0,133,130,1,0,0,0,133,131,1,0,0,0,133,132,1,0,0,0,134,
  	3,1,0,0,0,135,144,3,18,9,0,136,144,3,36,18,0,137,144,3,38,19,0,138,144,
  	3,24,12,0,139,144,3,20,10,0,140,144,3,28,14,0,141,144,3,30,15,0,142,144,
  	3,42,21,0,143,135,1,0,0,0,143,136,1,0,0,0,143,137,1,0,0,0,143,138,1,0,
  	0,0,143,139,1,0,0,0,143,140,1,0,0,0,143,141,1,0,0,0,143,142,1,0,0,0,144,
  	5,1,0,0,0,145,146,5,12,0,0,146,147,5,119,0,0,147,151,5,1,0,0,148,150,
  	3,2,1,0,149,148,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,
  	0,152,154,1,0,0,0,153,151,1,0,0,0,154,155,5,2,0,0,155,7,1,0,0,0,156,158,
  	3,72,36,0,157,156,1,0,0,0,157,158,1,0,0,0,158,159,1,0,0,0,159,160,7,0,
  	0,0,160,166,5,119,0,0,161,163,5,3,0,0,162,164,5,57,0,0,163,162,1,0,0,
  	0,163,164,1,0,0,0,164,165,1,0,0,0,165,167,3,70,35,0,166,161,1,0,0,0,166,
  	167,1,0,0,0,167,168,1,0,0,0,168,172,5,1,0,0,169,171,3,64,32,0,170,169,
  	1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,175,1,0,0,
  	0,174,172,1,0,0,0,175,176,5,2,0,0,176,177,5,4,0,0,177,9,1,0,0,0,178,180,
  	3,72,36,0,179,178,1,0,0,0,179,180,1,0,0,0,180,181,1,0,0,0,181,182,5,15,
  	0,0,182,185,5,119,0,0,183,184,5,3,0,0,184,186,3,100,50,0,185,183,1,0,
  	0,0,185,186,1,0,0,0,186,187,1,0,0,0,187,188,5,1,0,0,188,191,5,119,0,0,
  	189,190,5,91,0,0,190,192,3,112,56,0,191,189,1,0,0,0,191,192,1,0,0,0,192,
  	201,1,0,0,0,193,194,5,5,0,0,194,197,5,119,0,0,195,196,5,91,0,0,196,198,
  	3,112,56,0,197,195,1,0,0,0,197,198,1,0,0,0,198,200,1,0,0,0,199,193,1,
  	0,0,0,200,203,1,0,0,0,201,199,1,0,0,0,201,202,1,0,0,0,202,205,1,0,0,0,
  	203,201,1,0,0,0,204,206,5,5,0,0,205,204,1,0,0,0,205,206,1,0,0,0,206,207,
  	1,0,0,0,207,208,5,2,0,0,208,209,5,4,0,0,209,11,1,0,0,0,210,211,5,16,0,
  	0,211,212,5,119,0,0,212,213,5,1,0,0,213,214,5,2,0,0,214,13,1,0,0,0,215,
  	217,3,72,36,0,216,215,1,0,0,0,216,217,1,0,0,0,217,218,1,0,0,0,218,219,
  	3,66,33,0,219,220,3,92,46,0,220,221,5,119,0,0,221,223,5,6,0,0,222,224,
  	3,108,54,0,223,222,1,0,0,0,223,224,1,0,0,0,224,225,1,0,0,0,225,227,5,
  	7,0,0,226,228,5,83,0,0,227,226,1,0,0,0,227,228,1,0,0,0,228,230,1,0,0,
  	0,229,231,5,82,0,0,230,229,1,0,0,0,230,231,1,0,0,0,231,233,1,0,0,0,232,
  	234,5,70,0,0,233,232,1,0,0,0,233,234,1,0,0,0,234,236,1,0,0,0,235,237,
  	3,68,34,0,236,235,1,0,0,0,236,237,1,0,0,0,237,238,1,0,0,0,238,239,3,16,
  	8,0,239,240,5,4,0,0,240,15,1,0,0,0,241,245,5,1,0,0,242,244,3,4,2,0,243,
  	242,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,0,245,246,1,0,0,0,246,248,1,
  	0,0,0,247,245,1,0,0,0,248,249,5,2,0,0,249,17,1,0,0,0,250,252,3,66,33,
  	0,251,250,1,0,0,0,251,252,1,0,0,0,252,253,1,0,0,0,253,254,3,92,46,0,254,
  	257,5,119,0,0,255,256,5,91,0,0,256,258,3,44,22,0,257,255,1,0,0,0,257,
  	258,1,0,0,0,258,259,1,0,0,0,259,260,5,4,0,0,260,19,1,0,0,0,261,262,5,
  	44,0,0,262,263,5,6,0,0,263,264,3,44,22,0,264,265,5,7,0,0,265,269,5,1,
  	0,0,266,268,3,4,2,0,267,266,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,269,
  	270,1,0,0,0,270,272,1,0,0,0,271,269,1,0,0,0,272,274,5,2,0,0,273,275,3,
  	22,11,0,274,273,1,0,0,0,274,275,1,0,0,0,275,21,1,0,0,0,276,279,5,45,0,
  	0,277,280,3,20,10,0,278,280,3,16,8,0,279,277,1,0,0,0,279,278,1,0,0,0,
  	280,23,1,0,0,0,281,282,5,46,0,0,282,283,5,6,0,0,283,284,3,44,22,0,284,
  	285,5,7,0,0,285,286,3,16,8,0,286,25,1,0,0,0,287,288,5,47,0,0,288,289,
  	3,16,8,0,289,27,1,0,0,0,290,291,5,54,0,0,291,293,5,6,0,0,292,294,3,18,
  	9,0,293,292,1,0,0,0,293,294,1,0,0,0,294,295,1,0,0,0,295,297,5,4,0,0,296,
  	298,3,44,22,0,297,296,1,0,0,0,297,298,1,0,0,0,298,299,1,0,0,0,299,301,
  	5,4,0,0,300,302,3,44,22,0,301,300,1,0,0,0,301,302,1,0,0,0,302,303,1,0,
  	0,0,303,304,5,7,0,0,304,305,3,16,8,0,305,29,1,0,0,0,306,307,5,48,0,0,
  	307,308,5,6,0,0,308,309,3,44,22,0,309,310,5,7,0,0,310,314,5,1,0,0,311,
  	313,3,32,16,0,312,311,1,0,0,0,313,316,1,0,0,0,314,312,1,0,0,0,314,315,
  	1,0,0,0,315,318,1,0,0,0,316,314,1,0,0,0,317,319,3,34,17,0,318,317,1,0,
  	0,0,318,319,1,0,0,0,319,320,1,0,0,0,320,321,5,2,0,0,321,31,1,0,0,0,322,
  	323,5,49,0,0,323,324,3,44,22,0,324,325,5,3,0,0,325,326,3,16,8,0,326,33,
  	1,0,0,0,327,328,5,52,0,0,328,329,5,3,0,0,329,330,3,16,8,0,330,35,1,0,
  	0,0,331,332,5,50,0,0,332,333,5,119,0,0,333,334,5,4,0,0,334,37,1,0,0,0,
  	335,336,5,53,0,0,336,337,5,119,0,0,337,338,5,4,0,0,338,39,1,0,0,0,339,
  	340,5,75,0,0,340,341,3,44,22,0,341,342,5,4,0,0,342,41,1,0,0,0,343,344,
  	3,44,22,0,344,345,5,4,0,0,345,43,1,0,0,0,346,347,3,46,23,0,347,45,1,0,
  	0,0,348,351,3,48,24,0,349,350,5,91,0,0,350,352,3,46,23,0,351,349,1,0,
  	0,0,351,352,1,0,0,0,352,47,1,0,0,0,353,358,3,50,25,0,354,355,5,105,0,
  	0,355,357,3,50,25,0,356,354,1,0,0,0,357,360,1,0,0,0,358,356,1,0,0,0,358,
  	359,1,0,0,0,359,49,1,0,0,0,360,358,1,0,0,0,361,367,3,52,26,0,362,363,
  	3,76,38,0,363,364,3,52,26,0,364,366,1,0,0,0,365,362,1,0,0,0,366,369,1,
  	0,0,0,367,365,1,0,0,0,367,368,1,0,0,0,368,51,1,0,0,0,369,367,1,0,0,0,
  	370,376,3,54,27,0,371,372,3,78,39,0,372,373,3,54,27,0,373,375,1,0,0,0,
  	374,371,1,0,0,0,375,378,1,0,0,0,376,374,1,0,0,0,376,377,1,0,0,0,377,53,
  	1,0,0,0,378,376,1,0,0,0,379,385,3,56,28,0,380,381,3,80,40,0,381,382,3,
  	56,28,0,382,384,1,0,0,0,383,380,1,0,0,0,384,387,1,0,0,0,385,383,1,0,0,
  	0,385,386,1,0,0,0,386,55,1,0,0,0,387,385,1,0,0,0,388,394,3,58,29,0,389,
  	390,3,82,41,0,390,391,3,58,29,0,391,393,1,0,0,0,392,389,1,0,0,0,393,396,
  	1,0,0,0,394,392,1,0,0,0,394,395,1,0,0,0,395,57,1,0,0,0,396,394,1,0,0,
  	0,397,401,3,60,30,0,398,400,3,86,43,0,399,398,1,0,0,0,400,403,1,0,0,0,
  	401,399,1,0,0,0,401,402,1,0,0,0,402,59,1,0,0,0,403,401,1,0,0,0,404,405,
  	3,84,42,0,405,406,3,60,30,0,406,409,1,0,0,0,407,409,3,62,31,0,408,404,
  	1,0,0,0,408,407,1,0,0,0,409,61,1,0,0,0,410,417,3,70,35,0,411,417,3,112,
  	56,0,412,413,5,6,0,0,413,414,3,44,22,0,414,415,5,7,0,0,415,417,1,0,0,
  	0,416,410,1,0,0,0,416,411,1,0,0,0,416,412,1,0,0,0,417,63,1,0,0,0,418,
  	421,3,14,7,0,419,421,3,18,9,0,420,418,1,0,0,0,420,419,1,0,0,0,421,65,
  	1,0,0,0,422,423,7,1,0,0,423,67,1,0,0,0,424,425,5,76,0,0,425,426,5,6,0,
  	0,426,431,3,70,35,0,427,428,5,5,0,0,428,430,3,70,35,0,429,427,1,0,0,0,
  	430,433,1,0,0,0,431,429,1,0,0,0,431,432,1,0,0,0,432,437,1,0,0,0,433,431,
  	1,0,0,0,434,435,5,77,0,0,435,437,5,7,0,0,436,424,1,0,0,0,436,434,1,0,
  	0,0,437,69,1,0,0,0,438,440,3,118,59,0,439,438,1,0,0,0,439,440,1,0,0,0,
  	440,441,1,0,0,0,441,442,5,119,0,0,442,71,1,0,0,0,443,444,5,8,0,0,444,
  	449,3,74,37,0,445,446,5,5,0,0,446,448,3,74,37,0,447,445,1,0,0,0,448,451,
  	1,0,0,0,449,447,1,0,0,0,449,450,1,0,0,0,450,452,1,0,0,0,451,449,1,0,0,
  	0,452,453,5,9,0,0,453,73,1,0,0,0,454,466,3,70,35,0,455,456,5,6,0,0,456,
  	461,3,44,22,0,457,458,5,5,0,0,458,460,3,44,22,0,459,457,1,0,0,0,460,463,
  	1,0,0,0,461,459,1,0,0,0,461,462,1,0,0,0,462,464,1,0,0,0,463,461,1,0,0,
  	0,464,465,5,7,0,0,465,467,1,0,0,0,466,455,1,0,0,0,466,467,1,0,0,0,467,
  	75,1,0,0,0,468,469,7,2,0,0,469,77,1,0,0,0,470,471,7,3,0,0,471,79,1,0,
  	0,0,472,473,7,4,0,0,473,81,1,0,0,0,474,475,7,5,0,0,475,83,1,0,0,0,476,
  	477,7,6,0,0,477,85,1,0,0,0,478,483,3,88,44,0,479,483,3,90,45,0,480,483,
  	5,98,0,0,481,483,5,99,0,0,482,478,1,0,0,0,482,479,1,0,0,0,482,480,1,0,
  	0,0,482,481,1,0,0,0,483,87,1,0,0,0,484,493,5,6,0,0,485,490,3,44,22,0,
  	486,487,5,5,0,0,487,489,3,44,22,0,488,486,1,0,0,0,489,492,1,0,0,0,490,
  	488,1,0,0,0,490,491,1,0,0,0,491,494,1,0,0,0,492,490,1,0,0,0,493,485,1,
  	0,0,0,493,494,1,0,0,0,494,495,1,0,0,0,495,496,5,7,0,0,496,89,1,0,0,0,
  	497,498,5,10,0,0,498,503,3,44,22,0,499,500,5,5,0,0,500,502,3,44,22,0,
  	501,499,1,0,0,0,502,505,1,0,0,0,503,501,1,0,0,0,503,504,1,0,0,0,504,506,
  	1,0,0,0,505,503,1,0,0,0,506,507,5,11,0,0,507,91,1,0,0,0,508,509,3,116,
  	58,0,509,511,3,98,49,0,510,512,3,96,48,0,511,510,1,0,0,0,511,512,1,0,
  	0,0,512,514,1,0,0,0,513,515,3,94,47,0,514,513,1,0,0,0,514,515,1,0,0,0,
  	515,93,1,0,0,0,516,517,5,94,0,0,517,518,3,116,58,0,518,95,1,0,0,0,519,
  	525,5,10,0,0,520,523,3,44,22,0,521,522,5,5,0,0,522,524,3,44,22,0,523,
  	521,1,0,0,0,523,524,1,0,0,0,524,526,1,0,0,0,525,520,1,0,0,0,525,526,1,
  	0,0,0,526,527,1,0,0,0,527,528,5,11,0,0,528,97,1,0,0,0,529,533,3,70,35,
  	0,530,533,5,86,0,0,531,533,3,100,50,0,532,529,1,0,0,0,532,530,1,0,0,0,
  	532,531,1,0,0,0,533,99,1,0,0,0,534,545,3,102,51,0,535,545,3,104,52,0,
  	536,545,3,106,53,0,537,545,5,25,0,0,538,545,5,24,0,0,539,545,5,26,0,0,
  	540,545,5,17,0,0,541,545,5,29,0,0,542,545,5,28,0,0,543,545,5,27,0,0,544,
  	534,1,0,0,0,544,535,1,0,0,0,544,536,1,0,0,0,544,537,1,0,0,0,544,538,1,
  	0,0,0,544,539,1,0,0,0,544,540,1,0,0,0,544,541,1,0,0,0,544,542,1,0,0,0,
  	544,543,1,0,0,0,545,101,1,0,0,0,546,548,5,81,0,0,547,546,1,0,0,0,547,
  	548,1,0,0,0,548,549,1,0,0,0,549,550,7,7,0,0,550,103,1,0,0,0,551,552,7,
  	8,0,0,552,105,1,0,0,0,553,554,7,9,0,0,554,107,1,0,0,0,555,560,3,110,55,
  	0,556,557,5,5,0,0,557,559,3,110,55,0,558,556,1,0,0,0,559,562,1,0,0,0,
  	560,558,1,0,0,0,560,561,1,0,0,0,561,109,1,0,0,0,562,560,1,0,0,0,563,564,
  	3,92,46,0,564,565,5,119,0,0,565,111,1,0,0,0,566,572,5,112,0,0,567,572,
  	5,114,0,0,568,572,5,116,0,0,569,572,5,115,0,0,570,572,3,114,57,0,571,
  	566,1,0,0,0,571,567,1,0,0,0,571,568,1,0,0,0,571,569,1,0,0,0,571,570,1,
  	0,0,0,572,113,1,0,0,0,573,574,7,10,0,0,574,115,1,0,0,0,575,579,5,83,0,
  	0,576,579,5,82,0,0,577,579,5,70,0,0,578,575,1,0,0,0,578,576,1,0,0,0,578,
  	577,1,0,0,0,579,582,1,0,0,0,580,578,1,0,0,0,580,581,1,0,0,0,581,117,1,
  	0,0,0,582,580,1,0,0,0,583,588,5,119,0,0,584,585,5,111,0,0,585,587,5,119,
  	0,0,586,584,1,0,0,0,587,590,1,0,0,0,588,586,1,0,0,0,588,589,1,0,0,0,589,
  	591,1,0,0,0,590,588,1,0,0,0,591,592,5,111,0,0,592,119,1,0,0,0,593,595,
  	9,0,0,0,594,593,1,0,0,0,595,596,1,0,0,0,596,597,1,0,0,0,596,594,1,0,0,
  	0,597,598,1,0,0,0,598,599,5,4,0,0,599,121,1,0,0,0,64,125,133,143,151,
  	157,163,166,172,179,185,191,197,201,205,216,223,227,230,233,236,245,251,
  	257,269,274,279,293,297,301,314,318,351,358,367,376,385,394,401,408,416,
  	420,431,436,439,449,461,466,482,490,493,503,511,514,523,525,532,544,547,
  	560,571,578,580,588,596
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
    setState(123); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(122);
      global_statement();
      setState(125); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 127232) != 0));
    setState(127);
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
    setState(133);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(129);
      namespace_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(130);
      class_declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(131);
      enum_declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(132);
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
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(135);
      variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(136);
      goto_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(137);
      lable_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(138);
      while_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(139);
      if_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(140);
      for_statement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(141);
      switch_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(142);
      expression_statement();
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
    setState(145);
    match(USLParser::NAMESPACE);
    setState(146);
    antlrcpp::downCast<Namespace_declarationContext *>(_localctx)->NamespaceName = match(USLParser::ID);
    setState(147);
    match(USLParser::T__0);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 127232) != 0)) {
      setState(148);
      global_statement();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(USLParser::T__1);
   
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

std::vector<USLParser::Classmember_declarationContext *> USLParser::Class_declarationContext::classmember_declaration() {
  return getRuleContexts<USLParser::Classmember_declarationContext>();
}

USLParser::Classmember_declarationContext* USLParser::Class_declarationContext::classmember_declaration(size_t i) {
  return getRuleContext<USLParser::Classmember_declarationContext>(i);
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
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(156);
      attribute_addition();
    }
    setState(159);
    _la = _input->LA(1);
    if (!(_la == USLParser::CLASS

    || _la == USLParser::STRUCT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(160);
    antlrcpp::downCast<Class_declarationContext *>(_localctx)->TypeName = match(USLParser::ID);
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__2) {
      setState(161);
      match(USLParser::T__2);
      setState(163);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::PUBLIC) {
        setState(162);
        match(USLParser::PUBLIC);
      }
      setState(165);
      quailified_name();
    }
    setState(168);
    match(USLParser::T__0);
    setState(172);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806866286674176) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 562949953501185) != 0)) {
      setState(169);
      classmember_declaration();
      setState(174);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(175);
    match(USLParser::T__1);
    setState(176);
    match(USLParser::T__3);
   
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
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(178);
      attribute_addition();
    }
    setState(181);
    match(USLParser::ENUM);
    setState(182);
    antlrcpp::downCast<Enum_declarationContext *>(_localctx)->EnumName = match(USLParser::ID);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__2) {
      setState(183);
      match(USLParser::T__2);
      setState(184);
      antlrcpp::downCast<Enum_declarationContext *>(_localctx)->EnumType = primitive();
    }
    setState(187);
    match(USLParser::T__0);
    setState(188);
    match(USLParser::ID);
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(189);
      match(USLParser::ASSIGN_OP);
      setState(190);
      litteral();
    }
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(193);
        match(USLParser::T__4);
        setState(194);
        match(USLParser::ID);
        setState(197);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == USLParser::ASSIGN_OP) {
          setState(195);
          match(USLParser::ASSIGN_OP);
          setState(196);
          litteral();
        } 
      }
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__4) {
      setState(204);
      match(USLParser::T__4);
    }
    setState(207);
    match(USLParser::T__1);
    setState(208);
    match(USLParser::T__3);
   
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
    setState(210);
    match(USLParser::ATRIBUTE);
    setState(211);
    antlrcpp::downCast<Attribute_declarationContext *>(_localctx)->AttributeName = match(USLParser::ID);
    setState(212);
    match(USLParser::T__0);
    setState(213);
    match(USLParser::T__1);
   
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

tree::TerminalNode* USLParser::Function_declarationContext::VOLATILE() {
  return getToken(USLParser::VOLATILE, 0);
}

tree::TerminalNode* USLParser::Function_declarationContext::UNSAFE() {
  return getToken(USLParser::UNSAFE, 0);
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
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(215);
      attribute_addition();
    }
    setState(218);
    acces_modifiers();
    setState(219);
    antlrcpp::downCast<Function_declarationContext *>(_localctx)->ReturnType = cvu_type();
    setState(220);
    antlrcpp::downCast<Function_declarationContext *>(_localctx)->FunctionName = match(USLParser::ID);
    setState(221);
    match(USLParser::T__5);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 549755682816) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 562949953501185) != 0)) {
      setState(222);
      paremeter_list();
    }
    setState(225);
    match(USLParser::T__6);
    setState(227);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::CONST) {
      setState(226);
      match(USLParser::CONST);
    }
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::VOLATILE) {
      setState(229);
      match(USLParser::VOLATILE);
    }
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::UNSAFE) {
      setState(232);
      match(USLParser::UNSAFE);
    }
    setState(236);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::THROWS

    || _la == USLParser::MAYBE) {
      setState(235);
      throws_postfix();
    }
    setState(238);
    basic_block();
    setState(239);
    match(USLParser::T__3);
   
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
    setState(241);
    match(USLParser::T__0);
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1037330396934438976) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 690769119754241) != 0)) {
      setState(242);
      statement();
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(248);
    match(USLParser::T__1);
   
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
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806316530991104) != 0)) {
      setState(250);
      acces_modifiers();
    }
    setState(253);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->Type = cvu_type();
    setState(254);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->name = match(USLParser::ID);
    setState(257);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(255);
      match(USLParser::ASSIGN_OP);
      setState(256);
      expression();
    }
    setState(259);
    match(USLParser::T__3);
   
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

std::vector<USLParser::StatementContext *> USLParser::If_statementContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::If_statementContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
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
    setState(261);
    match(USLParser::IF);
    setState(262);
    match(USLParser::T__5);
    setState(263);
    expression();
    setState(264);
    match(USLParser::T__6);
    setState(265);
    match(USLParser::T__0);
    setState(269);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1037330396934438976) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 690769119754241) != 0)) {
      setState(266);
      statement();
      setState(271);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(272);
    match(USLParser::T__1);
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ELSE) {
      setState(273);
      else_statement();
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
    setState(276);
    match(USLParser::ELSE);
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::IF: {
        setState(277);
        if_statement();
        break;
      }

      case USLParser::T__0: {
        setState(278);
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
    setState(281);
    match(USLParser::WHILE);
    setState(282);
    match(USLParser::T__5);
    setState(283);
    expression();
    setState(284);
    match(USLParser::T__6);
    setState(285);
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
    setState(287);
    match(USLParser::DO);
    setState(288);
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

USLParser::Basic_blockContext* USLParser::For_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}

USLParser::Variable_declarationContext* USLParser::For_statementContext::variable_declaration() {
  return getRuleContext<USLParser::Variable_declarationContext>(0);
}

std::vector<USLParser::ExpressionContext *> USLParser::For_statementContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::For_statementContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
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
    setState(290);
    match(USLParser::FOR);
    setState(291);
    match(USLParser::T__5);
    setState(293);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1008806866286673920) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 562949953501185) != 0)) {
      setState(292);
      antlrcpp::downCast<For_statementContext *>(_localctx)->Initializer = variable_declaration();
    }
    setState(295);
    match(USLParser::T__3);
    setState(297);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597069766720) != 0) || ((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 5146631) != 0)) {
      setState(296);
      antlrcpp::downCast<For_statementContext *>(_localctx)->Conditional = expression();
    }
    setState(299);
    match(USLParser::T__3);
    setState(301);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597069766720) != 0) || ((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 5146631) != 0)) {
      setState(300);
      antlrcpp::downCast<For_statementContext *>(_localctx)->PostItteration = expression();
    }
    setState(303);
    match(USLParser::T__6);
    setState(304);
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

USLParser::Default_statementContext* USLParser::Switch_statementContext::default_statement() {
  return getRuleContext<USLParser::Default_statementContext>(0);
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
    setState(306);
    match(USLParser::SWITCH);
    setState(307);
    match(USLParser::T__5);
    setState(308);
    expression();
    setState(309);
    match(USLParser::T__6);
    setState(310);
    match(USLParser::T__0);
    setState(314);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::CASE) {
      setState(311);
      case_statement();
      setState(316);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::DEFAULT) {
      setState(317);
      default_statement();
    }
    setState(320);
    match(USLParser::T__1);
   
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
    setState(322);
    match(USLParser::CASE);
    setState(323);
    expression();
    setState(324);
    match(USLParser::T__2);
    setState(325);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Default_statementContext ------------------------------------------------------------------

USLParser::Default_statementContext::Default_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Default_statementContext::DEFAULT() {
  return getToken(USLParser::DEFAULT, 0);
}

USLParser::Basic_blockContext* USLParser::Default_statementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::Default_statementContext::getRuleIndex() const {
  return USLParser::RuleDefault_statement;
}

void USLParser::Default_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault_statement(this);
}

void USLParser::Default_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault_statement(this);
}


std::any USLParser::Default_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitDefault_statement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Default_statementContext* USLParser::default_statement() {
  Default_statementContext *_localctx = _tracker.createInstance<Default_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, USLParser::RuleDefault_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(USLParser::DEFAULT);
    setState(328);
    match(USLParser::T__2);
    setState(329);
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
  enterRule(_localctx, 36, USLParser::RuleGoto_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(USLParser::GOTO);
    setState(332);
    antlrcpp::downCast<Goto_statementContext *>(_localctx)->Target = match(USLParser::ID);
    setState(333);
    match(USLParser::T__3);
   
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
  enterRule(_localctx, 38, USLParser::RuleLable_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(USLParser::LABLE);
    setState(336);
    antlrcpp::downCast<Lable_statementContext *>(_localctx)->Name = match(USLParser::ID);
    setState(337);
    match(USLParser::T__3);
   
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
  enterRule(_localctx, 40, USLParser::RuleThrow_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(USLParser::THROW);
    setState(340);
    expression();
    setState(341);
    match(USLParser::T__3);
   
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
  enterRule(_localctx, 42, USLParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    expression();
    setState(344);
    match(USLParser::T__3);
   
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
  enterRule(_localctx, 44, USLParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
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
  enterRule(_localctx, 46, USLParser::RuleAssignment_expr);
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
    setState(348);
    antlrcpp::downCast<Assignment_exprContext *>(_localctx)->left = equality_expr();
    setState(351);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(349);
      match(USLParser::ASSIGN_OP);
      setState(350);
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
  enterRule(_localctx, 48, USLParser::RuleEquality_expr);
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
    setState(353);
    antlrcpp::downCast<Equality_exprContext *>(_localctx)->left = comparison_expr();
    setState(358);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::EQUALS) {
      setState(354);
      match(USLParser::EQUALS);
      setState(355);
      comparison_expr();
      setState(360);
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
  enterRule(_localctx, 50, USLParser::RuleComparison_expr);
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
    setState(361);
    antlrcpp::downCast<Comparison_exprContext *>(_localctx)->left = bitshift_expr();
    setState(367);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 106) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 106)) & 27) != 0)) {
      setState(362);
      comparision_operator();
      setState(363);
      bitshift_expr();
      setState(369);
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
  enterRule(_localctx, 52, USLParser::RuleBitshift_expr);
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
    setState(370);
    antlrcpp::downCast<Bitshift_exprContext *>(_localctx)->left = additive_expr();
    setState(376);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::B_LEFT

    || _la == USLParser::B_RIGHT) {
      setState(371);
      bitshift_operator();
      setState(372);
      additive_expr();
      setState(378);
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
  enterRule(_localctx, 54, USLParser::RuleAdditive_expr);
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
    setState(379);
    antlrcpp::downCast<Additive_exprContext *>(_localctx)->left = multiplicative_expr();
    setState(385);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::PLUS_OP

    || _la == USLParser::MINUS_OP) {
      setState(380);
      additive_operator();
      setState(381);
      multiplicative_expr();
      setState(387);
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
  enterRule(_localctx, 56, USLParser::RuleMultiplicative_expr);
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
    setState(388);
    antlrcpp::downCast<Multiplicative_exprContext *>(_localctx)->left = postfix_expr();
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 94) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 94)) & 7) != 0)) {
      setState(389);
      multiplicative_operator();
      setState(390);
      postfix_expr();
      setState(396);
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
  enterRule(_localctx, 58, USLParser::RulePostfix_expr);
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
    setState(397);
    prefix_expr();
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__5

    || _la == USLParser::T__9 || _la == USLParser::INCREMENT

    || _la == USLParser::DECREMENT) {
      setState(398);
      postfix_operator();
      setState(403);
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
  enterRule(_localctx, 60, USLParser::RulePrefix_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(408);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::HASH_OP:
      case USLParser::INCREMENT:
      case USLParser::DECREMENT:
      case USLParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(404);
        prefix_operator();
        setState(405);
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
        setState(407);
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
  enterRule(_localctx, 62, USLParser::RulePrimary_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(410);
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
        setState(411);
        litteral();
        break;
      }

      case USLParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(412);
        match(USLParser::T__5);
        setState(413);
        expression();
        setState(414);
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

//----------------- Classmember_declarationContext ------------------------------------------------------------------

USLParser::Classmember_declarationContext::Classmember_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Function_declarationContext* USLParser::Classmember_declarationContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}

USLParser::Variable_declarationContext* USLParser::Classmember_declarationContext::variable_declaration() {
  return getRuleContext<USLParser::Variable_declarationContext>(0);
}


size_t USLParser::Classmember_declarationContext::getRuleIndex() const {
  return USLParser::RuleClassmember_declaration;
}

void USLParser::Classmember_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassmember_declaration(this);
}

void USLParser::Classmember_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassmember_declaration(this);
}


std::any USLParser::Classmember_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitClassmember_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Classmember_declarationContext* USLParser::classmember_declaration() {
  Classmember_declarationContext *_localctx = _tracker.createInstance<Classmember_declarationContext>(_ctx, getState());
  enterRule(_localctx, 64, USLParser::RuleClassmember_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(420);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(418);
      function_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(419);
      variable_declaration();
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
  enterRule(_localctx, 66, USLParser::RuleAcces_modifiers);
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
    setState(422);
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
  enterRule(_localctx, 68, USLParser::RuleThrows_postfix);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(436);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::THROWS: {
        enterOuterAlt(_localctx, 1);
        setState(424);
        match(USLParser::THROWS);
        setState(425);
        match(USLParser::T__5);

        setState(426);
        quailified_name();
        setState(431);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == USLParser::T__4) {
          setState(427);
          match(USLParser::T__4);
          setState(428);
          quailified_name();
          setState(433);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case USLParser::MAYBE: {
        enterOuterAlt(_localctx, 2);
        setState(434);
        match(USLParser::MAYBE);
        setState(435);
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
  enterRule(_localctx, 70, USLParser::RuleQuailified_name);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(438);
      scoperesolution_list();
      break;
    }

    default:
      break;
    }
    setState(441);
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
  enterRule(_localctx, 72, USLParser::RuleAttribute_addition);
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
    setState(443);
    match(USLParser::T__7);
    setState(444);
    attribute();
    setState(449);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(445);
      match(USLParser::T__4);
      setState(446);
      attribute();
      setState(451);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(452);
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
  enterRule(_localctx, 74, USLParser::RuleAttribute);
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
    setState(454);
    quailified_name();
    setState(466);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__5) {
      setState(455);
      match(USLParser::T__5);
      setState(456);
      expression();
      setState(461);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == USLParser::T__4) {
        setState(457);
        match(USLParser::T__4);
        setState(458);
        expression();
        setState(463);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(464);
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
  enterRule(_localctx, 76, USLParser::RuleComparision_operator);
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
    setState(468);
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
  enterRule(_localctx, 78, USLParser::RuleBitshift_operator);
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
    setState(470);
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
  enterRule(_localctx, 80, USLParser::RuleAdditive_operator);
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
    setState(472);
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
  enterRule(_localctx, 82, USLParser::RuleMultiplicative_operator);
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
    setState(474);
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
  enterRule(_localctx, 84, USLParser::RulePrefix_operator);
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
    setState(476);
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
  enterRule(_localctx, 86, USLParser::RulePostfix_operator);

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
      case USLParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(478);
        call_operator();
        break;
      }

      case USLParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(479);
        index_operator();
        break;
      }

      case USLParser::INCREMENT: {
        enterOuterAlt(_localctx, 3);
        setState(480);
        match(USLParser::INCREMENT);
        break;
      }

      case USLParser::DECREMENT: {
        enterOuterAlt(_localctx, 4);
        setState(481);
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
  enterRule(_localctx, 88, USLParser::RuleCall_operator);
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
    setState(484);
    match(USLParser::T__5);
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597069766720) != 0) || ((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 5146631) != 0)) {
      setState(485);
      expression();
      setState(490);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == USLParser::T__4) {
        setState(486);
        match(USLParser::T__4);
        setState(487);
        expression();
        setState(492);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(495);
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
  enterRule(_localctx, 90, USLParser::RuleIndex_operator);
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
    setState(497);
    match(USLParser::T__9);
    setState(498);
    expression();
    setState(503);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(499);
      match(USLParser::T__4);
      setState(500);
      expression();
      setState(505);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(506);
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

USLParser::Array_typeContext* USLParser::Cvu_typeContext::array_type() {
  return getRuleContext<USLParser::Array_typeContext>(0);
}

USLParser::Pointer_typeContext* USLParser::Cvu_typeContext::pointer_type() {
  return getRuleContext<USLParser::Pointer_typeContext>(0);
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
  enterRule(_localctx, 92, USLParser::RuleCvu_type);
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
    setState(508);
    cvu_decorators();
    setState(509);
    type();
    setState(511);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__9) {
      setState(510);
      antlrcpp::downCast<Cvu_typeContext *>(_localctx)->IsArray = array_type();
    }
    setState(514);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::MULT_OP) {
      setState(513);
      antlrcpp::downCast<Cvu_typeContext *>(_localctx)->IsPointer = pointer_type();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pointer_typeContext ------------------------------------------------------------------

USLParser::Pointer_typeContext::Pointer_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Pointer_typeContext::MULT_OP() {
  return getToken(USLParser::MULT_OP, 0);
}

USLParser::Cvu_decoratorsContext* USLParser::Pointer_typeContext::cvu_decorators() {
  return getRuleContext<USLParser::Cvu_decoratorsContext>(0);
}


size_t USLParser::Pointer_typeContext::getRuleIndex() const {
  return USLParser::RulePointer_type;
}

void USLParser::Pointer_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointer_type(this);
}

void USLParser::Pointer_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointer_type(this);
}


std::any USLParser::Pointer_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPointer_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Pointer_typeContext* USLParser::pointer_type() {
  Pointer_typeContext *_localctx = _tracker.createInstance<Pointer_typeContext>(_ctx, getState());
  enterRule(_localctx, 94, USLParser::RulePointer_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    match(USLParser::MULT_OP);
    setState(517);
    cvu_decorators();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

USLParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ExpressionContext *> USLParser::Array_typeContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Array_typeContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::Array_typeContext::getRuleIndex() const {
  return USLParser::RuleArray_type;
}

void USLParser::Array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_type(this);
}

void USLParser::Array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_type(this);
}


std::any USLParser::Array_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitArray_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Array_typeContext* USLParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 96, USLParser::RuleArray_type);
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
    setState(519);
    match(USLParser::T__9);
    setState(525);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597069766720) != 0) || ((((_la - 97) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 97)) & 5146631) != 0)) {
      setState(520);
      expression();
      setState(523);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::T__4) {
        setState(521);
        match(USLParser::T__4);
        setState(522);
        expression();
      }
    }
    setState(527);
    match(USLParser::T__10);
   
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
  enterRule(_localctx, 98, USLParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(532);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(529);
        quailified_name();
        break;
      }

      case USLParser::AUTO: {
        enterOuterAlt(_localctx, 2);
        setState(530);
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
        setState(531);
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
  enterRule(_localctx, 100, USLParser::RulePrimitive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(544);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG:
      case USLParser::UNSIGNED: {
        enterOuterAlt(_localctx, 1);
        setState(534);
        integral_type();
        break;
      }

      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::LONGDOUBLE: {
        enterOuterAlt(_localctx, 2);
        setState(535);
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
        setState(536);
        vector_type();
        break;
      }

      case USLParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(537);
        match(USLParser::STRING);
        break;
      }

      case USLParser::HASH: {
        enterOuterAlt(_localctx, 5);
        setState(538);
        match(USLParser::HASH);
        break;
      }

      case USLParser::CHAR: {
        enterOuterAlt(_localctx, 6);
        setState(539);
        match(USLParser::CHAR);
        break;
      }

      case USLParser::BYTE: {
        enterOuterAlt(_localctx, 7);
        setState(540);
        match(USLParser::BYTE);
        break;
      }

      case USLParser::BOOL: {
        enterOuterAlt(_localctx, 8);
        setState(541);
        match(USLParser::BOOL);
        break;
      }

      case USLParser::NULLPTR_T: {
        enterOuterAlt(_localctx, 9);
        setState(542);
        match(USLParser::NULLPTR_T);
        break;
      }

      case USLParser::VOID: {
        enterOuterAlt(_localctx, 10);
        setState(543);
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

tree::TerminalNode* USLParser::Integral_typeContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::LONG() {
  return getToken(USLParser::LONG, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::UNSIGNED() {
  return getToken(USLParser::UNSIGNED, 0);
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
  enterRule(_localctx, 102, USLParser::RuleIntegral_type);
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
    setState(547);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::UNSIGNED) {
      setState(546);
      match(USLParser::UNSIGNED);
    }
    setState(549);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1835008) != 0))) {
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
  enterRule(_localctx, 104, USLParser::RuleFloating_type);
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
    setState(551);
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
  enterRule(_localctx, 106, USLParser::RuleVector_type);
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
    setState(553);
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
  enterRule(_localctx, 108, USLParser::RuleParemeter_list);
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
    setState(555);
    parameter();
    setState(560);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__4) {
      setState(556);
      match(USLParser::T__4);
      setState(557);
      parameter();
      setState(562);
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
  enterRule(_localctx, 110, USLParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    antlrcpp::downCast<ParameterContext *>(_localctx)->Type = cvu_type();
    setState(564);
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
  enterRule(_localctx, 112, USLParser::RuleLitteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(571);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::INT_LITTERAL: {
        enterOuterAlt(_localctx, 1);
        setState(566);
        match(USLParser::INT_LITTERAL);
        break;
      }

      case USLParser::FLOAT_LITTERAL: {
        enterOuterAlt(_localctx, 2);
        setState(567);
        match(USLParser::FLOAT_LITTERAL);
        break;
      }

      case USLParser::STRING_LITTERAL: {
        enterOuterAlt(_localctx, 3);
        setState(568);
        match(USLParser::STRING_LITTERAL);
        break;
      }

      case USLParser::CHAR_LITTERAL: {
        enterOuterAlt(_localctx, 4);
        setState(569);
        match(USLParser::CHAR_LITTERAL);
        break;
      }

      case USLParser::BOOL_LITTERAL_TRUE:
      case USLParser::BOOL_LITTERAL_FALSE: {
        enterOuterAlt(_localctx, 5);
        setState(570);
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
  enterRule(_localctx, 114, USLParser::RuleBool_litteral);
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
    setState(573);
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
  enterRule(_localctx, 116, USLParser::RuleCvu_decorators);
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
    setState(580);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 12289) != 0)) {
      setState(578);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case USLParser::CONST: {
          setState(575);
          antlrcpp::downCast<Cvu_decoratorsContext *>(_localctx)->consts = match(USLParser::CONST);
          break;
        }

        case USLParser::VOLATILE: {
          setState(576);
          antlrcpp::downCast<Cvu_decoratorsContext *>(_localctx)->volatiles = match(USLParser::VOLATILE);
          break;
        }

        case USLParser::UNSAFE: {
          setState(577);
          antlrcpp::downCast<Cvu_decoratorsContext *>(_localctx)->unsafes = match(USLParser::UNSAFE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(582);
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
  enterRule(_localctx, 118, USLParser::RuleScoperesolution_list);

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
    setState(583);
    match(USLParser::ID);
    setState(588);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(584);
        match(USLParser::SCOPE_RESSOLUTION_OP);
        setState(585);
        match(USLParser::ID); 
      }
      setState(590);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    }
    setState(591);
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
  enterRule(_localctx, 120, USLParser::RuleError_recovery);

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
    setState(594); 
    _errHandler->sync(this);
    alt = 1 + 1;
    do {
      switch (alt) {
        case 1 + 1: {
              setState(593);
              matchWildcard();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(596); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    } while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(598);
    match(USLParser::T__3);
   
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
