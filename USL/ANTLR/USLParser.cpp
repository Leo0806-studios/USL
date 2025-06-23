
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
      "program", "global_statement", "statement", "expression", "basic_block", 
      "class_delcaration", "namespace_declaration", "atribute_declaration", 
      "function_declaration", "intrinsic_function_pre_declaration", "extern_function_pre_declaration", 
      "exter_function_declaratio", "unit_test_declaration", "enum_declaration", 
      "var_declaration", "custom_opperator_sym", "noexcept_specifyer", "assignment_expr", 
      "equality_expr", "comparison_expr", "bitshift_expr", "additive_expr", 
      "multiplicative_expr", "unary_expr", "primary_expr", "function_call", 
      "atribute_constructor", "atrribute_requires", "implements_function", 
      "implements_Var", "primitives", "integral_type", "signed_inegral_type", 
      "unsigned_integral_type", "litteral", "type", "parameter", "parameterList", 
      "classmember_declaration", "operator_symbols", "scope_ressolution", 
      "atribute_parameter", "atribute_parameter_list", "atribute_decorators", 
      "extern_spec", "id_with_scope", "function_call_parameters", "test"
    },
    std::vector<std::string>{
      "", "';'", "'{'", "'}'", "'('", "')'", "':'", "','", "'['", "']'", 
      "'namespace'", "'class'", "'enum'", "'atribute'", "'byte'", "'ubyte'", 
      "'short'", "'ushort'", "'int'", "'uint'", "'long'", "'ulong'", "'float'", 
      "'double'", "'hash'", "'string'", "'char'", "'void'", "'null'", "'bool'", 
      "'template'", "'async'", "'sync'", "'__internal'", "'operator'", "'unsafe'", 
      "'stack_alloc'", "'reinterpret_cast'", "'static_cast'", "'unsafe_cast'", 
      "'def_operator'", "'def_keyword'", "'def_flow'", "", "'static'", "'virtual'", 
      "'noexcept'", "'override'", "'nullptr'", "'return'", "'requires'", 
      "'auto'", "'call'", "'extern'", "'__declspec'", "'dllexport'", "'dllimport'", 
      "'new'", "'unsafe_new'", "'unsafe_delete'", "'__intrinsic'", "'__norvo'", 
      "'__overlapswith'", "'__jumptable'", "'__unroll'", "'__vectorize'", 
      "'__test'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", "'->'", 
      "'++'", "'--'", "'<<'", "'>>'", "'=='", "'<'", "'>'", "'!'", "", "", 
      "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "NAMESPACE", "CLASS", "ENUM", 
      "ATRIBUTE", "BYTE", "UBYTE", "SHORT", "USHORT", "INT", "UINT", "LONG", 
      "ULONG", "FLOAT", "DOUBLE", "HASH", "STRING", "CHAR", "VOID", "NULL", 
      "BOOL", "TEMPLATE", "ASYNC", "SYNC", "INTERNAL", "OPPERATOR", "UNSAFE", 
      "STACK_ALLOC", "REINTERPRET_CAST", "STATIC_CAST", "UNSAFE_CAST", "CUSTOM_OP", 
      "CUSTOM_KEYWORD", "CUSTOM_CONTROL", "TYPE_QUALIFYERS", "STATIC", "VIRTUAL", 
      "NOEXCEPT", "OVERRIDE", "NULLPTR", "RETURN", "REQUIRES", "AUTO", "CALL", 
      "EXTERN", "DECLSPEC", "DLLEXPORT", "DLLIMPORT", "NEW", "UNSAFE_NEW", 
      "UNSAFE_DELETE", "INTRINSIC", "NORVO", "OVERLAPSWITH", "JUMPTABLE", 
      "UNROLL", "VECTORIZE", "TEST", "ASSIGN_OP", "PLUS_OP", "MINUS_OP", 
      "MULT_OP", "DIV_OP", "MOD_OP", "HASH_OP", "DEREF", "INCREMENT", "DECREMENT", 
      "B_LEFT", "B_RIGHT", "EQUALS", "LESS", "LARGER", "NOT", "LESS_EQ", 
      "LARGER_EQ", "SCOPE_RESSOLUTION_OP", "INT_LITTERAL", "UINT_LITTERAL", 
      "FLOAT_LITTERAL", "CHAR_LITTERAL", "STRING_LITTERAL", "BOOL_LITTERAL", 
      "COMMENT", "WS", "ID", "CUSTOM_OP_SYMBOLS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,95,513,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,1,0,4,0,98,8,0,11,
  	0,12,0,99,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,114,8,1,
  	1,2,1,2,1,2,3,2,119,8,2,1,2,1,2,1,3,1,3,1,4,1,4,5,4,127,8,4,10,4,12,4,
  	130,9,4,1,4,1,4,1,5,3,5,135,8,5,1,5,1,5,1,5,1,5,5,5,141,8,5,10,5,12,5,
  	144,9,5,1,5,1,5,1,6,1,6,1,6,1,6,5,6,152,8,6,10,6,12,6,155,9,6,1,6,1,6,
  	1,7,1,7,1,7,1,7,3,7,163,8,7,1,7,3,7,166,8,7,1,7,1,7,1,8,3,8,171,8,8,1,
  	8,5,8,174,8,8,10,8,12,8,177,9,8,1,8,3,8,180,8,8,1,8,1,8,3,8,184,8,8,1,
  	8,1,8,1,8,3,8,189,8,8,1,8,1,8,3,8,193,8,8,1,8,3,8,196,8,8,1,8,1,8,5,8,
  	200,8,8,10,8,12,8,203,9,8,1,8,1,8,1,9,1,9,3,9,209,8,9,1,9,1,9,3,9,213,
  	8,9,1,9,1,9,1,9,3,9,218,8,9,1,9,1,9,3,9,222,8,9,1,10,1,10,3,10,226,8,
  	10,1,10,1,10,3,10,230,8,10,1,10,1,10,1,10,3,10,235,8,10,1,10,1,10,3,10,
  	239,8,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,3,13,250,8,13,1,
  	13,1,13,1,13,1,13,3,13,256,8,13,1,13,1,13,1,13,1,13,3,13,262,8,13,5,13,
  	264,8,13,10,13,12,13,267,9,13,1,13,1,13,1,14,3,14,272,8,14,1,14,3,14,
  	275,8,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,285,8,14,1,15,1,
  	15,1,15,1,15,1,15,1,15,3,15,293,8,15,1,15,1,15,1,15,5,15,298,8,15,10,
  	15,12,15,301,9,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,3,
  	17,313,8,17,1,18,1,18,1,18,5,18,318,8,18,10,18,12,18,321,9,18,1,19,1,
  	19,1,19,5,19,326,8,19,10,19,12,19,329,9,19,1,20,1,20,1,20,5,20,334,8,
  	20,10,20,12,20,337,9,20,1,21,1,21,1,21,5,21,342,8,21,10,21,12,21,345,
  	9,21,1,22,1,22,1,22,5,22,350,8,22,10,22,12,22,353,9,22,1,23,3,23,356,
  	8,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,367,8,24,1,25,
  	1,25,1,25,1,25,3,25,373,8,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,
  	1,27,1,27,1,27,5,27,386,8,27,10,27,12,27,389,9,27,1,27,1,27,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,3,31,406,8,31,
  	1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,3,35,416,8,35,1,35,3,35,419,8,
  	35,1,36,5,36,422,8,36,10,36,12,36,425,9,36,1,36,1,36,1,36,1,37,1,37,1,
  	37,5,37,433,8,37,10,37,12,37,436,9,37,1,38,1,38,3,38,440,8,38,1,38,1,
  	38,1,39,1,39,1,40,1,40,1,40,5,40,449,8,40,10,40,12,40,452,9,40,1,40,1,
  	40,1,41,1,41,3,41,458,8,41,1,42,1,42,1,42,5,42,463,8,42,10,42,12,42,466,
  	9,42,1,43,1,43,1,43,1,43,1,43,1,43,3,43,474,8,43,1,43,1,43,1,43,1,43,
  	1,43,1,43,3,43,482,8,43,3,43,484,8,43,1,43,1,43,1,44,1,44,1,44,1,45,3,
  	45,492,8,45,1,45,1,45,1,46,1,46,1,46,5,46,499,8,46,10,46,12,46,502,9,
  	46,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,1,47,0,0,48,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,
  	56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,0,11,2,0,
  	79,79,82,82,2,0,80,81,83,84,1,0,77,78,1,0,68,69,1,0,70,72,2,0,75,76,82,
  	82,2,0,14,26,29,29,4,0,14,14,16,16,18,18,20,20,4,0,15,15,17,17,19,19,
  	21,21,1,0,86,91,2,0,75,84,95,95,531,0,97,1,0,0,0,2,113,1,0,0,0,4,118,
  	1,0,0,0,6,122,1,0,0,0,8,124,1,0,0,0,10,134,1,0,0,0,12,147,1,0,0,0,14,
  	158,1,0,0,0,16,170,1,0,0,0,18,206,1,0,0,0,20,223,1,0,0,0,22,240,1,0,0,
  	0,24,243,1,0,0,0,26,246,1,0,0,0,28,271,1,0,0,0,30,286,1,0,0,0,32,304,
  	1,0,0,0,34,309,1,0,0,0,36,314,1,0,0,0,38,322,1,0,0,0,40,330,1,0,0,0,42,
  	338,1,0,0,0,44,346,1,0,0,0,46,355,1,0,0,0,48,366,1,0,0,0,50,368,1,0,0,
  	0,52,376,1,0,0,0,54,381,1,0,0,0,56,392,1,0,0,0,58,398,1,0,0,0,60,401,
  	1,0,0,0,62,405,1,0,0,0,64,407,1,0,0,0,66,409,1,0,0,0,68,411,1,0,0,0,70,
  	418,1,0,0,0,72,423,1,0,0,0,74,429,1,0,0,0,76,439,1,0,0,0,78,443,1,0,0,
  	0,80,445,1,0,0,0,82,457,1,0,0,0,84,459,1,0,0,0,86,467,1,0,0,0,88,487,
  	1,0,0,0,90,491,1,0,0,0,92,495,1,0,0,0,94,503,1,0,0,0,96,98,3,2,1,0,97,
  	96,1,0,0,0,98,99,1,0,0,0,99,97,1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,0,
  	101,102,5,0,0,1,102,1,1,0,0,0,103,114,3,10,5,0,104,114,3,12,6,0,105,114,
  	3,26,13,0,106,114,3,14,7,0,107,108,3,18,9,0,108,109,5,1,0,0,109,114,1,
  	0,0,0,110,111,3,20,10,0,111,112,5,1,0,0,112,114,1,0,0,0,113,103,1,0,0,
  	0,113,104,1,0,0,0,113,105,1,0,0,0,113,106,1,0,0,0,113,107,1,0,0,0,113,
  	110,1,0,0,0,114,3,1,0,0,0,115,119,3,28,14,0,116,119,3,16,8,0,117,119,
  	3,6,3,0,118,115,1,0,0,0,118,116,1,0,0,0,118,117,1,0,0,0,119,120,1,0,0,
  	0,120,121,5,1,0,0,121,5,1,0,0,0,122,123,3,34,17,0,123,7,1,0,0,0,124,128,
  	5,2,0,0,125,127,3,4,2,0,126,125,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,
  	0,128,129,1,0,0,0,129,131,1,0,0,0,130,128,1,0,0,0,131,132,5,3,0,0,132,
  	9,1,0,0,0,133,135,3,86,43,0,134,133,1,0,0,0,134,135,1,0,0,0,135,136,1,
  	0,0,0,136,137,5,11,0,0,137,138,5,94,0,0,138,142,5,2,0,0,139,141,3,76,
  	38,0,140,139,1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,
  	143,145,1,0,0,0,144,142,1,0,0,0,145,146,5,3,0,0,146,11,1,0,0,0,147,148,
  	5,10,0,0,148,149,5,94,0,0,149,153,5,2,0,0,150,152,3,2,1,0,151,150,1,0,
  	0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,156,1,0,0,0,155,
  	153,1,0,0,0,156,157,5,3,0,0,157,13,1,0,0,0,158,159,5,13,0,0,159,160,5,
  	94,0,0,160,162,5,2,0,0,161,163,3,52,26,0,162,161,1,0,0,0,162,163,1,0,
  	0,0,163,165,1,0,0,0,164,166,3,54,27,0,165,164,1,0,0,0,165,166,1,0,0,0,
  	166,167,1,0,0,0,167,168,5,3,0,0,168,15,1,0,0,0,169,171,5,44,0,0,170,169,
  	1,0,0,0,170,171,1,0,0,0,171,175,1,0,0,0,172,174,5,43,0,0,173,172,1,0,
  	0,0,174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,179,1,0,0,0,177,
  	175,1,0,0,0,178,180,5,45,0,0,179,178,1,0,0,0,179,180,1,0,0,0,180,183,
  	1,0,0,0,181,184,5,27,0,0,182,184,3,70,35,0,183,181,1,0,0,0,183,182,1,
  	0,0,0,184,185,1,0,0,0,185,186,5,94,0,0,186,188,5,4,0,0,187,189,3,74,37,
  	0,188,187,1,0,0,0,188,189,1,0,0,0,189,190,1,0,0,0,190,192,5,5,0,0,191,
  	193,3,32,16,0,192,191,1,0,0,0,192,193,1,0,0,0,193,195,1,0,0,0,194,196,
  	5,47,0,0,195,194,1,0,0,0,195,196,1,0,0,0,196,197,1,0,0,0,197,201,5,2,
  	0,0,198,200,3,4,2,0,199,198,1,0,0,0,200,203,1,0,0,0,201,199,1,0,0,0,201,
  	202,1,0,0,0,202,204,1,0,0,0,203,201,1,0,0,0,204,205,5,3,0,0,205,17,1,
  	0,0,0,206,208,5,60,0,0,207,209,5,43,0,0,208,207,1,0,0,0,208,209,1,0,0,
  	0,209,212,1,0,0,0,210,213,5,27,0,0,211,213,3,70,35,0,212,210,1,0,0,0,
  	212,211,1,0,0,0,213,214,1,0,0,0,214,215,5,94,0,0,215,217,5,4,0,0,216,
  	218,3,74,37,0,217,216,1,0,0,0,217,218,1,0,0,0,218,219,1,0,0,0,219,221,
  	5,5,0,0,220,222,3,32,16,0,221,220,1,0,0,0,221,222,1,0,0,0,222,19,1,0,
  	0,0,223,225,3,88,44,0,224,226,5,43,0,0,225,224,1,0,0,0,225,226,1,0,0,
  	0,226,229,1,0,0,0,227,230,5,27,0,0,228,230,3,70,35,0,229,227,1,0,0,0,
  	229,228,1,0,0,0,230,231,1,0,0,0,231,232,5,94,0,0,232,234,5,4,0,0,233,
  	235,3,74,37,0,234,233,1,0,0,0,234,235,1,0,0,0,235,236,1,0,0,0,236,238,
  	5,5,0,0,237,239,3,32,16,0,238,237,1,0,0,0,238,239,1,0,0,0,239,21,1,0,
  	0,0,240,241,3,88,44,0,241,242,3,16,8,0,242,23,1,0,0,0,243,244,3,94,47,
  	0,244,245,3,16,8,0,245,25,1,0,0,0,246,249,5,12,0,0,247,248,5,6,0,0,248,
  	250,3,62,31,0,249,247,1,0,0,0,249,250,1,0,0,0,250,251,1,0,0,0,251,252,
  	5,2,0,0,252,255,5,94,0,0,253,254,5,67,0,0,254,256,5,86,0,0,255,253,1,
  	0,0,0,255,256,1,0,0,0,256,265,1,0,0,0,257,258,5,7,0,0,258,261,5,94,0,
  	0,259,260,5,67,0,0,260,262,5,86,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,
  	264,1,0,0,0,263,257,1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,266,1,
  	0,0,0,266,268,1,0,0,0,267,265,1,0,0,0,268,269,5,3,0,0,269,27,1,0,0,0,
  	270,272,5,44,0,0,271,270,1,0,0,0,271,272,1,0,0,0,272,274,1,0,0,0,273,
  	275,5,43,0,0,274,273,1,0,0,0,274,275,1,0,0,0,275,276,1,0,0,0,276,277,
  	3,70,35,0,277,284,5,94,0,0,278,279,5,4,0,0,279,280,3,6,3,0,280,281,5,
  	5,0,0,281,285,1,0,0,0,282,283,5,67,0,0,283,285,3,6,3,0,284,278,1,0,0,
  	0,284,282,1,0,0,0,284,285,1,0,0,0,285,29,1,0,0,0,286,287,5,40,0,0,287,
  	288,5,4,0,0,288,289,5,95,0,0,289,290,5,5,0,0,290,292,5,4,0,0,291,293,
  	3,74,37,0,292,291,1,0,0,0,292,293,1,0,0,0,293,294,1,0,0,0,294,295,5,5,
  	0,0,295,299,5,2,0,0,296,298,3,4,2,0,297,296,1,0,0,0,298,301,1,0,0,0,299,
  	297,1,0,0,0,299,300,1,0,0,0,300,302,1,0,0,0,301,299,1,0,0,0,302,303,5,
  	3,0,0,303,31,1,0,0,0,304,305,5,46,0,0,305,306,5,4,0,0,306,307,5,91,0,
  	0,307,308,5,5,0,0,308,33,1,0,0,0,309,312,3,36,18,0,310,311,5,67,0,0,311,
  	313,3,34,17,0,312,310,1,0,0,0,312,313,1,0,0,0,313,35,1,0,0,0,314,319,
  	3,38,19,0,315,316,7,0,0,0,316,318,3,38,19,0,317,315,1,0,0,0,318,321,1,
  	0,0,0,319,317,1,0,0,0,319,320,1,0,0,0,320,37,1,0,0,0,321,319,1,0,0,0,
  	322,327,3,40,20,0,323,324,7,1,0,0,324,326,3,40,20,0,325,323,1,0,0,0,326,
  	329,1,0,0,0,327,325,1,0,0,0,327,328,1,0,0,0,328,39,1,0,0,0,329,327,1,
  	0,0,0,330,335,3,42,21,0,331,332,7,2,0,0,332,334,3,42,21,0,333,331,1,0,
  	0,0,334,337,1,0,0,0,335,333,1,0,0,0,335,336,1,0,0,0,336,41,1,0,0,0,337,
  	335,1,0,0,0,338,343,3,44,22,0,339,340,7,3,0,0,340,342,3,44,22,0,341,339,
  	1,0,0,0,342,345,1,0,0,0,343,341,1,0,0,0,343,344,1,0,0,0,344,43,1,0,0,
  	0,345,343,1,0,0,0,346,351,3,46,23,0,347,348,7,4,0,0,348,350,3,46,23,0,
  	349,347,1,0,0,0,350,353,1,0,0,0,351,349,1,0,0,0,351,352,1,0,0,0,352,45,
  	1,0,0,0,353,351,1,0,0,0,354,356,7,5,0,0,355,354,1,0,0,0,355,356,1,0,0,
  	0,356,357,1,0,0,0,357,358,3,48,24,0,358,47,1,0,0,0,359,367,3,50,25,0,
  	360,367,3,90,45,0,361,367,3,68,34,0,362,363,5,4,0,0,363,364,3,6,3,0,364,
  	365,5,5,0,0,365,367,1,0,0,0,366,359,1,0,0,0,366,360,1,0,0,0,366,361,1,
  	0,0,0,366,362,1,0,0,0,367,49,1,0,0,0,368,369,5,52,0,0,369,370,3,90,45,
  	0,370,372,5,4,0,0,371,373,3,92,46,0,372,371,1,0,0,0,372,373,1,0,0,0,373,
  	374,1,0,0,0,374,375,5,5,0,0,375,51,1,0,0,0,376,377,3,70,35,0,377,378,
  	5,4,0,0,378,379,3,74,37,0,379,380,5,5,0,0,380,53,1,0,0,0,381,382,5,50,
  	0,0,382,387,5,2,0,0,383,386,3,56,28,0,384,386,3,58,29,0,385,383,1,0,0,
  	0,385,384,1,0,0,0,386,389,1,0,0,0,387,385,1,0,0,0,387,388,1,0,0,0,388,
  	390,1,0,0,0,389,387,1,0,0,0,390,391,5,3,0,0,391,55,1,0,0,0,392,393,3,
  	70,35,0,393,394,5,94,0,0,394,395,5,4,0,0,395,396,3,74,37,0,396,397,5,
  	5,0,0,397,57,1,0,0,0,398,399,3,70,35,0,399,400,5,94,0,0,400,59,1,0,0,
  	0,401,402,7,6,0,0,402,61,1,0,0,0,403,406,3,64,32,0,404,406,3,66,33,0,
  	405,403,1,0,0,0,405,404,1,0,0,0,406,63,1,0,0,0,407,408,7,7,0,0,408,65,
  	1,0,0,0,409,410,7,8,0,0,410,67,1,0,0,0,411,412,7,9,0,0,412,69,1,0,0,0,
  	413,419,3,60,30,0,414,416,3,80,40,0,415,414,1,0,0,0,415,416,1,0,0,0,416,
  	417,1,0,0,0,417,419,5,94,0,0,418,413,1,0,0,0,418,415,1,0,0,0,419,71,1,
  	0,0,0,420,422,5,43,0,0,421,420,1,0,0,0,422,425,1,0,0,0,423,421,1,0,0,
  	0,423,424,1,0,0,0,424,426,1,0,0,0,425,423,1,0,0,0,426,427,3,70,35,0,427,
  	428,5,94,0,0,428,73,1,0,0,0,429,434,3,72,36,0,430,431,5,7,0,0,431,433,
  	3,72,36,0,432,430,1,0,0,0,433,436,1,0,0,0,434,432,1,0,0,0,434,435,1,0,
  	0,0,435,75,1,0,0,0,436,434,1,0,0,0,437,440,3,16,8,0,438,440,3,28,14,0,
  	439,437,1,0,0,0,439,438,1,0,0,0,440,441,1,0,0,0,441,442,5,1,0,0,442,77,
  	1,0,0,0,443,444,7,10,0,0,444,79,1,0,0,0,445,450,5,94,0,0,446,447,5,85,
  	0,0,447,449,5,94,0,0,448,446,1,0,0,0,449,452,1,0,0,0,450,448,1,0,0,0,
  	450,451,1,0,0,0,451,453,1,0,0,0,452,450,1,0,0,0,453,454,5,85,0,0,454,
  	81,1,0,0,0,455,458,5,94,0,0,456,458,3,68,34,0,457,455,1,0,0,0,457,456,
  	1,0,0,0,458,83,1,0,0,0,459,464,3,82,41,0,460,461,5,7,0,0,461,463,3,82,
  	41,0,462,460,1,0,0,0,463,466,1,0,0,0,464,462,1,0,0,0,464,465,1,0,0,0,
  	465,85,1,0,0,0,466,464,1,0,0,0,467,468,5,8,0,0,468,473,5,94,0,0,469,470,
  	5,4,0,0,470,471,3,84,42,0,471,472,5,5,0,0,472,474,1,0,0,0,473,469,1,0,
  	0,0,473,474,1,0,0,0,474,483,1,0,0,0,475,476,5,7,0,0,476,481,5,94,0,0,
  	477,478,5,4,0,0,478,479,3,84,42,0,479,480,5,5,0,0,480,482,1,0,0,0,481,
  	477,1,0,0,0,481,482,1,0,0,0,482,484,1,0,0,0,483,475,1,0,0,0,483,484,1,
  	0,0,0,484,485,1,0,0,0,485,486,5,9,0,0,486,87,1,0,0,0,487,488,5,53,0,0,
  	488,489,5,90,0,0,489,89,1,0,0,0,490,492,3,80,40,0,491,490,1,0,0,0,491,
  	492,1,0,0,0,492,493,1,0,0,0,493,494,5,94,0,0,494,91,1,0,0,0,495,500,3,
  	6,3,0,496,497,5,7,0,0,497,499,3,6,3,0,498,496,1,0,0,0,499,502,1,0,0,0,
  	500,498,1,0,0,0,500,501,1,0,0,0,501,93,1,0,0,0,502,500,1,0,0,0,503,504,
  	5,66,0,0,504,505,5,4,0,0,505,506,5,90,0,0,506,507,5,7,0,0,507,508,5,91,
  	0,0,508,509,5,7,0,0,509,510,5,86,0,0,510,511,5,5,0,0,511,95,1,0,0,0,59,
  	99,113,118,128,134,142,153,162,165,170,175,179,183,188,192,195,201,208,
  	212,217,221,225,229,234,238,249,255,261,265,271,274,284,292,299,312,319,
  	327,335,343,351,355,366,372,385,387,405,415,418,423,434,439,450,457,464,
  	473,481,483,491,500
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
    setState(97); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(96);
      global_statement();
      setState(99); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1161928703861603584) != 0));
    setState(101);
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

USLParser::Class_delcarationContext* USLParser::Global_statementContext::class_delcaration() {
  return getRuleContext<USLParser::Class_delcarationContext>(0);
}

USLParser::Namespace_declarationContext* USLParser::Global_statementContext::namespace_declaration() {
  return getRuleContext<USLParser::Namespace_declarationContext>(0);
}

USLParser::Enum_declarationContext* USLParser::Global_statementContext::enum_declaration() {
  return getRuleContext<USLParser::Enum_declarationContext>(0);
}

USLParser::Atribute_declarationContext* USLParser::Global_statementContext::atribute_declaration() {
  return getRuleContext<USLParser::Atribute_declarationContext>(0);
}

USLParser::Intrinsic_function_pre_declarationContext* USLParser::Global_statementContext::intrinsic_function_pre_declaration() {
  return getRuleContext<USLParser::Intrinsic_function_pre_declarationContext>(0);
}

USLParser::Extern_function_pre_declarationContext* USLParser::Global_statementContext::extern_function_pre_declaration() {
  return getRuleContext<USLParser::Extern_function_pre_declarationContext>(0);
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
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__7:
      case USLParser::CLASS: {
        enterOuterAlt(_localctx, 1);
        setState(103);
        class_delcaration();
        break;
      }

      case USLParser::NAMESPACE: {
        enterOuterAlt(_localctx, 2);
        setState(104);
        namespace_declaration();
        break;
      }

      case USLParser::ENUM: {
        enterOuterAlt(_localctx, 3);
        setState(105);
        enum_declaration();
        break;
      }

      case USLParser::ATRIBUTE: {
        enterOuterAlt(_localctx, 4);
        setState(106);
        atribute_declaration();
        break;
      }

      case USLParser::INTRINSIC: {
        enterOuterAlt(_localctx, 5);
        setState(107);
        intrinsic_function_pre_declaration();
        setState(108);
        match(USLParser::T__0);
        break;
      }

      case USLParser::EXTERN: {
        enterOuterAlt(_localctx, 6);
        setState(110);
        extern_function_pre_declaration();
        setState(111);
        match(USLParser::T__0);
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

//----------------- StatementContext ------------------------------------------------------------------

USLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Var_declarationContext* USLParser::StatementContext::var_declaration() {
  return getRuleContext<USLParser::Var_declarationContext>(0);
}

USLParser::Function_declarationContext* USLParser::StatementContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}

USLParser::ExpressionContext* USLParser::StatementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(115);
      var_declaration();
      break;
    }

    case 2: {
      setState(116);
      function_declaration();
      break;
    }

    case 3: {
      setState(117);
      expression();
      break;
    }

    default:
      break;
    }
    setState(120);
    match(USLParser::T__0);
   
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
  enterRule(_localctx, 6, USLParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    assignment_expr();
   
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
  enterRule(_localctx, 8, USLParser::RuleBasic_block);
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
    setState(124);
    match(USLParser::T__1);
    setState(128);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 653443) != 0)) {
      setState(125);
      statement();
      setState(130);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(131);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_delcarationContext ------------------------------------------------------------------

USLParser::Class_delcarationContext::Class_delcarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Class_delcarationContext::CLASS() {
  return getToken(USLParser::CLASS, 0);
}

tree::TerminalNode* USLParser::Class_delcarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Atribute_decoratorsContext* USLParser::Class_delcarationContext::atribute_decorators() {
  return getRuleContext<USLParser::Atribute_decoratorsContext>(0);
}

std::vector<USLParser::Classmember_declarationContext *> USLParser::Class_delcarationContext::classmember_declaration() {
  return getRuleContexts<USLParser::Classmember_declarationContext>();
}

USLParser::Classmember_declarationContext* USLParser::Class_delcarationContext::classmember_declaration(size_t i) {
  return getRuleContext<USLParser::Classmember_declarationContext>(i);
}


size_t USLParser::Class_delcarationContext::getRuleIndex() const {
  return USLParser::RuleClass_delcaration;
}

void USLParser::Class_delcarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_delcaration(this);
}

void USLParser::Class_delcarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_delcaration(this);
}


std::any USLParser::Class_delcarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitClass_delcaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Class_delcarationContext* USLParser::class_delcaration() {
  Class_delcarationContext *_localctx = _tracker.createInstance<Class_delcarationContext>(_ctx, getState());
  enterRule(_localctx, 10, USLParser::RuleClass_delcaration);
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
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(133);
      atribute_decorators();
    }
    setState(136);
    match(USLParser::CLASS);
    setState(137);
    match(USLParser::ID);
    setState(138);
    match(USLParser::T__1);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 61573456445440) != 0) || _la == USLParser::ID) {
      setState(139);
      classmember_declaration();
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(145);
    match(USLParser::T__2);
   
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
  enterRule(_localctx, 12, USLParser::RuleNamespace_declaration);
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
    match(USLParser::ID);
    setState(149);
    match(USLParser::T__1);
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1161928703861603584) != 0)) {
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

//----------------- Atribute_declarationContext ------------------------------------------------------------------

USLParser::Atribute_declarationContext::Atribute_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Atribute_declarationContext::ATRIBUTE() {
  return getToken(USLParser::ATRIBUTE, 0);
}

tree::TerminalNode* USLParser::Atribute_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Atribute_constructorContext* USLParser::Atribute_declarationContext::atribute_constructor() {
  return getRuleContext<USLParser::Atribute_constructorContext>(0);
}

USLParser::Atrribute_requiresContext* USLParser::Atribute_declarationContext::atrribute_requires() {
  return getRuleContext<USLParser::Atrribute_requiresContext>(0);
}


size_t USLParser::Atribute_declarationContext::getRuleIndex() const {
  return USLParser::RuleAtribute_declaration;
}

void USLParser::Atribute_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribute_declaration(this);
}

void USLParser::Atribute_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribute_declaration(this);
}


std::any USLParser::Atribute_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAtribute_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Atribute_declarationContext* USLParser::atribute_declaration() {
  Atribute_declarationContext *_localctx = _tracker.createInstance<Atribute_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, USLParser::RuleAtribute_declaration);
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
    setState(158);
    match(USLParser::ATRIBUTE);
    setState(159);
    match(USLParser::ID);
    setState(160);
    match(USLParser::T__1);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 671072256) != 0) || _la == USLParser::ID) {
      setState(161);
      atribute_constructor();
    }
    setState(165);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::REQUIRES) {
      setState(164);
      atrribute_requires();
    }
    setState(167);
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

tree::TerminalNode* USLParser::Function_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::Function_declarationContext::VOID() {
  return getToken(USLParser::VOID, 0);
}

USLParser::TypeContext* USLParser::Function_declarationContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Function_declarationContext::STATIC() {
  return getToken(USLParser::STATIC, 0);
}

std::vector<tree::TerminalNode *> USLParser::Function_declarationContext::TYPE_QUALIFYERS() {
  return getTokens(USLParser::TYPE_QUALIFYERS);
}

tree::TerminalNode* USLParser::Function_declarationContext::TYPE_QUALIFYERS(size_t i) {
  return getToken(USLParser::TYPE_QUALIFYERS, i);
}

tree::TerminalNode* USLParser::Function_declarationContext::VIRTUAL() {
  return getToken(USLParser::VIRTUAL, 0);
}

USLParser::ParameterListContext* USLParser::Function_declarationContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

USLParser::Noexcept_specifyerContext* USLParser::Function_declarationContext::noexcept_specifyer() {
  return getRuleContext<USLParser::Noexcept_specifyerContext>(0);
}

tree::TerminalNode* USLParser::Function_declarationContext::OVERRIDE() {
  return getToken(USLParser::OVERRIDE, 0);
}

std::vector<USLParser::StatementContext *> USLParser::Function_declarationContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Function_declarationContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
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
  enterRule(_localctx, 16, USLParser::RuleFunction_declaration);
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
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::STATIC) {
      setState(169);
      match(USLParser::STATIC);
    }
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::TYPE_QUALIFYERS) {
      setState(172);
      match(USLParser::TYPE_QUALIFYERS);
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::VIRTUAL) {
      setState(178);
      match(USLParser::VIRTUAL);
    }
    setState(183);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::VOID: {
        setState(181);
        match(USLParser::VOID);
        break;
      }

      case USLParser::BYTE:
      case USLParser::UBYTE:
      case USLParser::SHORT:
      case USLParser::USHORT:
      case USLParser::INT:
      case USLParser::UINT:
      case USLParser::LONG:
      case USLParser::ULONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::BOOL:
      case USLParser::ID: {
        setState(182);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(185);
    match(USLParser::ID);
    setState(186);
    match(USLParser::T__3);
    setState(188);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796764094464) != 0) || _la == USLParser::ID) {
      setState(187);
      parameterList();
    }
    setState(190);
    match(USLParser::T__4);
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::NOEXCEPT) {
      setState(191);
      noexcept_specifyer();
    }
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::OVERRIDE) {
      setState(194);
      match(USLParser::OVERRIDE);
    }
    setState(197);
    match(USLParser::T__1);
    setState(201);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 653443) != 0)) {
      setState(198);
      statement();
      setState(203);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(204);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Intrinsic_function_pre_declarationContext ------------------------------------------------------------------

USLParser::Intrinsic_function_pre_declarationContext::Intrinsic_function_pre_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Intrinsic_function_pre_declarationContext::INTRINSIC() {
  return getToken(USLParser::INTRINSIC, 0);
}

tree::TerminalNode* USLParser::Intrinsic_function_pre_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::Intrinsic_function_pre_declarationContext::VOID() {
  return getToken(USLParser::VOID, 0);
}

USLParser::TypeContext* USLParser::Intrinsic_function_pre_declarationContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Intrinsic_function_pre_declarationContext::TYPE_QUALIFYERS() {
  return getToken(USLParser::TYPE_QUALIFYERS, 0);
}

USLParser::ParameterListContext* USLParser::Intrinsic_function_pre_declarationContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

USLParser::Noexcept_specifyerContext* USLParser::Intrinsic_function_pre_declarationContext::noexcept_specifyer() {
  return getRuleContext<USLParser::Noexcept_specifyerContext>(0);
}


size_t USLParser::Intrinsic_function_pre_declarationContext::getRuleIndex() const {
  return USLParser::RuleIntrinsic_function_pre_declaration;
}

void USLParser::Intrinsic_function_pre_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntrinsic_function_pre_declaration(this);
}

void USLParser::Intrinsic_function_pre_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntrinsic_function_pre_declaration(this);
}


std::any USLParser::Intrinsic_function_pre_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitIntrinsic_function_pre_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Intrinsic_function_pre_declarationContext* USLParser::intrinsic_function_pre_declaration() {
  Intrinsic_function_pre_declarationContext *_localctx = _tracker.createInstance<Intrinsic_function_pre_declarationContext>(_ctx, getState());
  enterRule(_localctx, 18, USLParser::RuleIntrinsic_function_pre_declaration);
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
    setState(206);
    match(USLParser::INTRINSIC);
    setState(208);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::TYPE_QUALIFYERS) {
      setState(207);
      match(USLParser::TYPE_QUALIFYERS);
    }
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::VOID: {
        setState(210);
        match(USLParser::VOID);
        break;
      }

      case USLParser::BYTE:
      case USLParser::UBYTE:
      case USLParser::SHORT:
      case USLParser::USHORT:
      case USLParser::INT:
      case USLParser::UINT:
      case USLParser::LONG:
      case USLParser::ULONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::BOOL:
      case USLParser::ID: {
        setState(211);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(214);
    match(USLParser::ID);
    setState(215);
    match(USLParser::T__3);
    setState(217);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796764094464) != 0) || _la == USLParser::ID) {
      setState(216);
      parameterList();
    }
    setState(219);
    match(USLParser::T__4);
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::NOEXCEPT) {
      setState(220);
      noexcept_specifyer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extern_function_pre_declarationContext ------------------------------------------------------------------

USLParser::Extern_function_pre_declarationContext::Extern_function_pre_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Extern_specContext* USLParser::Extern_function_pre_declarationContext::extern_spec() {
  return getRuleContext<USLParser::Extern_specContext>(0);
}

tree::TerminalNode* USLParser::Extern_function_pre_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::Extern_function_pre_declarationContext::VOID() {
  return getToken(USLParser::VOID, 0);
}

USLParser::TypeContext* USLParser::Extern_function_pre_declarationContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Extern_function_pre_declarationContext::TYPE_QUALIFYERS() {
  return getToken(USLParser::TYPE_QUALIFYERS, 0);
}

USLParser::ParameterListContext* USLParser::Extern_function_pre_declarationContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

USLParser::Noexcept_specifyerContext* USLParser::Extern_function_pre_declarationContext::noexcept_specifyer() {
  return getRuleContext<USLParser::Noexcept_specifyerContext>(0);
}


size_t USLParser::Extern_function_pre_declarationContext::getRuleIndex() const {
  return USLParser::RuleExtern_function_pre_declaration;
}

void USLParser::Extern_function_pre_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtern_function_pre_declaration(this);
}

void USLParser::Extern_function_pre_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtern_function_pre_declaration(this);
}


std::any USLParser::Extern_function_pre_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExtern_function_pre_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Extern_function_pre_declarationContext* USLParser::extern_function_pre_declaration() {
  Extern_function_pre_declarationContext *_localctx = _tracker.createInstance<Extern_function_pre_declarationContext>(_ctx, getState());
  enterRule(_localctx, 20, USLParser::RuleExtern_function_pre_declaration);
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
    setState(223);
    extern_spec();
    setState(225);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::TYPE_QUALIFYERS) {
      setState(224);
      match(USLParser::TYPE_QUALIFYERS);
    }
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::VOID: {
        setState(227);
        match(USLParser::VOID);
        break;
      }

      case USLParser::BYTE:
      case USLParser::UBYTE:
      case USLParser::SHORT:
      case USLParser::USHORT:
      case USLParser::INT:
      case USLParser::UINT:
      case USLParser::LONG:
      case USLParser::ULONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::BOOL:
      case USLParser::ID: {
        setState(228);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(231);
    match(USLParser::ID);
    setState(232);
    match(USLParser::T__3);
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796764094464) != 0) || _la == USLParser::ID) {
      setState(233);
      parameterList();
    }
    setState(236);
    match(USLParser::T__4);
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::NOEXCEPT) {
      setState(237);
      noexcept_specifyer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exter_function_declaratioContext ------------------------------------------------------------------

USLParser::Exter_function_declaratioContext::Exter_function_declaratioContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Extern_specContext* USLParser::Exter_function_declaratioContext::extern_spec() {
  return getRuleContext<USLParser::Extern_specContext>(0);
}

USLParser::Function_declarationContext* USLParser::Exter_function_declaratioContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}


size_t USLParser::Exter_function_declaratioContext::getRuleIndex() const {
  return USLParser::RuleExter_function_declaratio;
}

void USLParser::Exter_function_declaratioContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExter_function_declaratio(this);
}

void USLParser::Exter_function_declaratioContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExter_function_declaratio(this);
}


std::any USLParser::Exter_function_declaratioContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExter_function_declaratio(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Exter_function_declaratioContext* USLParser::exter_function_declaratio() {
  Exter_function_declaratioContext *_localctx = _tracker.createInstance<Exter_function_declaratioContext>(_ctx, getState());
  enterRule(_localctx, 22, USLParser::RuleExter_function_declaratio);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    extern_spec();
    setState(241);
    function_declaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unit_test_declarationContext ------------------------------------------------------------------

USLParser::Unit_test_declarationContext::Unit_test_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TestContext* USLParser::Unit_test_declarationContext::test() {
  return getRuleContext<USLParser::TestContext>(0);
}

USLParser::Function_declarationContext* USLParser::Unit_test_declarationContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}


size_t USLParser::Unit_test_declarationContext::getRuleIndex() const {
  return USLParser::RuleUnit_test_declaration;
}

void USLParser::Unit_test_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnit_test_declaration(this);
}

void USLParser::Unit_test_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnit_test_declaration(this);
}


std::any USLParser::Unit_test_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitUnit_test_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Unit_test_declarationContext* USLParser::unit_test_declaration() {
  Unit_test_declarationContext *_localctx = _tracker.createInstance<Unit_test_declarationContext>(_ctx, getState());
  enterRule(_localctx, 24, USLParser::RuleUnit_test_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    test();
    setState(244);
    function_declaration();
   
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

USLParser::Integral_typeContext* USLParser::Enum_declarationContext::integral_type() {
  return getRuleContext<USLParser::Integral_typeContext>(0);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::ASSIGN_OP() {
  return getTokens(USLParser::ASSIGN_OP);
}

tree::TerminalNode* USLParser::Enum_declarationContext::ASSIGN_OP(size_t i) {
  return getToken(USLParser::ASSIGN_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::INT_LITTERAL() {
  return getTokens(USLParser::INT_LITTERAL);
}

tree::TerminalNode* USLParser::Enum_declarationContext::INT_LITTERAL(size_t i) {
  return getToken(USLParser::INT_LITTERAL, i);
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
  enterRule(_localctx, 26, USLParser::RuleEnum_declaration);
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
    setState(246);
    match(USLParser::ENUM);
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__5) {
      setState(247);
      match(USLParser::T__5);
      setState(248);
      integral_type();
    }
    setState(251);
    match(USLParser::T__1);
    setState(252);
    match(USLParser::ID);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(253);
      match(USLParser::ASSIGN_OP);
      setState(254);
      match(USLParser::INT_LITTERAL);
    }
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(257);
      match(USLParser::T__6);
      setState(258);
      match(USLParser::ID);
      setState(261);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::ASSIGN_OP) {
        setState(259);
        match(USLParser::ASSIGN_OP);
        setState(260);
        match(USLParser::INT_LITTERAL);
      }
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

USLParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Var_declarationContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Var_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::Var_declarationContext::STATIC() {
  return getToken(USLParser::STATIC, 0);
}

tree::TerminalNode* USLParser::Var_declarationContext::TYPE_QUALIFYERS() {
  return getToken(USLParser::TYPE_QUALIFYERS, 0);
}

tree::TerminalNode* USLParser::Var_declarationContext::ASSIGN_OP() {
  return getToken(USLParser::ASSIGN_OP, 0);
}

USLParser::ExpressionContext* USLParser::Var_declarationContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::Var_declarationContext::getRuleIndex() const {
  return USLParser::RuleVar_declaration;
}

void USLParser::Var_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declaration(this);
}

void USLParser::Var_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declaration(this);
}


std::any USLParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Var_declarationContext* USLParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 28, USLParser::RuleVar_declaration);
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
    setState(271);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::STATIC) {
      setState(270);
      match(USLParser::STATIC);
    }
    setState(274);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::TYPE_QUALIFYERS) {
      setState(273);
      match(USLParser::TYPE_QUALIFYERS);
    }
    setState(276);
    type();
    setState(277);
    match(USLParser::ID);
    setState(284);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__3: {
        setState(278);
        match(USLParser::T__3);
        setState(279);
        antlrcpp::downCast<Var_declarationContext *>(_localctx)->construct = expression();
        setState(280);
        match(USLParser::T__4);
        break;
      }

      case USLParser::ASSIGN_OP: {
        setState(282);
        match(USLParser::ASSIGN_OP);
        setState(283);
        antlrcpp::downCast<Var_declarationContext *>(_localctx)->construct_assign = expression();
        break;
      }

      case USLParser::T__0: {
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

//----------------- Custom_opperator_symContext ------------------------------------------------------------------

USLParser::Custom_opperator_symContext::Custom_opperator_symContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Custom_opperator_symContext::CUSTOM_OP() {
  return getToken(USLParser::CUSTOM_OP, 0);
}

tree::TerminalNode* USLParser::Custom_opperator_symContext::CUSTOM_OP_SYMBOLS() {
  return getToken(USLParser::CUSTOM_OP_SYMBOLS, 0);
}

USLParser::ParameterListContext* USLParser::Custom_opperator_symContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

std::vector<USLParser::StatementContext *> USLParser::Custom_opperator_symContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Custom_opperator_symContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::Custom_opperator_symContext::getRuleIndex() const {
  return USLParser::RuleCustom_opperator_sym;
}

void USLParser::Custom_opperator_symContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustom_opperator_sym(this);
}

void USLParser::Custom_opperator_symContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustom_opperator_sym(this);
}


std::any USLParser::Custom_opperator_symContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCustom_opperator_sym(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Custom_opperator_symContext* USLParser::custom_opperator_sym() {
  Custom_opperator_symContext *_localctx = _tracker.createInstance<Custom_opperator_symContext>(_ctx, getState());
  enterRule(_localctx, 30, USLParser::RuleCustom_opperator_sym);
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
    setState(286);
    match(USLParser::CUSTOM_OP);
    setState(287);
    match(USLParser::T__3);
    setState(288);
    match(USLParser::CUSTOM_OP_SYMBOLS);
    setState(289);
    match(USLParser::T__4);
    setState(290);
    match(USLParser::T__3);
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796764094464) != 0) || _la == USLParser::ID) {
      setState(291);
      parameterList();
    }
    setState(294);
    match(USLParser::T__4);
    setState(295);
    match(USLParser::T__1);
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 653443) != 0)) {
      setState(296);
      statement();
      setState(301);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(302);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Noexcept_specifyerContext ------------------------------------------------------------------

USLParser::Noexcept_specifyerContext::Noexcept_specifyerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Noexcept_specifyerContext::NOEXCEPT() {
  return getToken(USLParser::NOEXCEPT, 0);
}

tree::TerminalNode* USLParser::Noexcept_specifyerContext::BOOL_LITTERAL() {
  return getToken(USLParser::BOOL_LITTERAL, 0);
}


size_t USLParser::Noexcept_specifyerContext::getRuleIndex() const {
  return USLParser::RuleNoexcept_specifyer;
}

void USLParser::Noexcept_specifyerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoexcept_specifyer(this);
}

void USLParser::Noexcept_specifyerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoexcept_specifyer(this);
}


std::any USLParser::Noexcept_specifyerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitNoexcept_specifyer(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Noexcept_specifyerContext* USLParser::noexcept_specifyer() {
  Noexcept_specifyerContext *_localctx = _tracker.createInstance<Noexcept_specifyerContext>(_ctx, getState());
  enterRule(_localctx, 32, USLParser::RuleNoexcept_specifyer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(USLParser::NOEXCEPT);
    setState(305);
    match(USLParser::T__3);
    setState(306);
    match(USLParser::BOOL_LITTERAL);
    setState(307);
    match(USLParser::T__4);
   
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
  enterRule(_localctx, 34, USLParser::RuleAssignment_expr);
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
    setState(309);
    antlrcpp::downCast<Assignment_exprContext *>(_localctx)->left = equality_expr();
    setState(312);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(310);
      match(USLParser::ASSIGN_OP);
      setState(311);
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

std::vector<tree::TerminalNode *> USLParser::Equality_exprContext::NOT() {
  return getTokens(USLParser::NOT);
}

tree::TerminalNode* USLParser::Equality_exprContext::NOT(size_t i) {
  return getToken(USLParser::NOT, i);
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
  enterRule(_localctx, 36, USLParser::RuleEquality_expr);
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
    setState(314);
    antlrcpp::downCast<Equality_exprContext *>(_localctx)->left = comparison_expr();
    setState(319);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::EQUALS

    || _la == USLParser::NOT) {
      setState(315);
      _la = _input->LA(1);
      if (!(_la == USLParser::EQUALS

      || _la == USLParser::NOT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(316);
      comparison_expr();
      setState(321);
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

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LESS() {
  return getTokens(USLParser::LESS);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LESS(size_t i) {
  return getToken(USLParser::LESS, i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LARGER() {
  return getTokens(USLParser::LARGER);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LARGER(size_t i) {
  return getToken(USLParser::LARGER, i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LESS_EQ() {
  return getTokens(USLParser::LESS_EQ);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LESS_EQ(size_t i) {
  return getToken(USLParser::LESS_EQ, i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LARGER_EQ() {
  return getTokens(USLParser::LARGER_EQ);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LARGER_EQ(size_t i) {
  return getToken(USLParser::LARGER_EQ, i);
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
  enterRule(_localctx, 38, USLParser::RuleComparison_expr);
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
    setState(322);
    antlrcpp::downCast<Comparison_exprContext *>(_localctx)->left = bitshift_expr();
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 80) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 80)) & 27) != 0)) {
      setState(323);
      _la = _input->LA(1);
      if (!(((((_la - 80) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 80)) & 27) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(324);
      bitshift_expr();
      setState(329);
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

std::vector<tree::TerminalNode *> USLParser::Bitshift_exprContext::B_LEFT() {
  return getTokens(USLParser::B_LEFT);
}

tree::TerminalNode* USLParser::Bitshift_exprContext::B_LEFT(size_t i) {
  return getToken(USLParser::B_LEFT, i);
}

std::vector<tree::TerminalNode *> USLParser::Bitshift_exprContext::B_RIGHT() {
  return getTokens(USLParser::B_RIGHT);
}

tree::TerminalNode* USLParser::Bitshift_exprContext::B_RIGHT(size_t i) {
  return getToken(USLParser::B_RIGHT, i);
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
  enterRule(_localctx, 40, USLParser::RuleBitshift_expr);
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
    setState(330);
    antlrcpp::downCast<Bitshift_exprContext *>(_localctx)->left = additive_expr();
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::B_LEFT

    || _la == USLParser::B_RIGHT) {
      setState(331);
      _la = _input->LA(1);
      if (!(_la == USLParser::B_LEFT

      || _la == USLParser::B_RIGHT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(332);
      additive_expr();
      setState(337);
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

std::vector<tree::TerminalNode *> USLParser::Additive_exprContext::PLUS_OP() {
  return getTokens(USLParser::PLUS_OP);
}

tree::TerminalNode* USLParser::Additive_exprContext::PLUS_OP(size_t i) {
  return getToken(USLParser::PLUS_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Additive_exprContext::MINUS_OP() {
  return getTokens(USLParser::MINUS_OP);
}

tree::TerminalNode* USLParser::Additive_exprContext::MINUS_OP(size_t i) {
  return getToken(USLParser::MINUS_OP, i);
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
  enterRule(_localctx, 42, USLParser::RuleAdditive_expr);
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
    setState(338);
    antlrcpp::downCast<Additive_exprContext *>(_localctx)->left = multiplicative_expr();
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::PLUS_OP

    || _la == USLParser::MINUS_OP) {
      setState(339);
      _la = _input->LA(1);
      if (!(_la == USLParser::PLUS_OP

      || _la == USLParser::MINUS_OP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(340);
      multiplicative_expr();
      setState(345);
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

std::vector<USLParser::Unary_exprContext *> USLParser::Multiplicative_exprContext::unary_expr() {
  return getRuleContexts<USLParser::Unary_exprContext>();
}

USLParser::Unary_exprContext* USLParser::Multiplicative_exprContext::unary_expr(size_t i) {
  return getRuleContext<USLParser::Unary_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Multiplicative_exprContext::MULT_OP() {
  return getTokens(USLParser::MULT_OP);
}

tree::TerminalNode* USLParser::Multiplicative_exprContext::MULT_OP(size_t i) {
  return getToken(USLParser::MULT_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Multiplicative_exprContext::DIV_OP() {
  return getTokens(USLParser::DIV_OP);
}

tree::TerminalNode* USLParser::Multiplicative_exprContext::DIV_OP(size_t i) {
  return getToken(USLParser::DIV_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Multiplicative_exprContext::MOD_OP() {
  return getTokens(USLParser::MOD_OP);
}

tree::TerminalNode* USLParser::Multiplicative_exprContext::MOD_OP(size_t i) {
  return getToken(USLParser::MOD_OP, i);
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
  enterRule(_localctx, 44, USLParser::RuleMultiplicative_expr);
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
    setState(346);
    antlrcpp::downCast<Multiplicative_exprContext *>(_localctx)->left = unary_expr();
    setState(351);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 7) != 0)) {
      setState(347);
      _la = _input->LA(1);
      if (!(((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & 7) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(348);
      unary_expr();
      setState(353);
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

//----------------- Unary_exprContext ------------------------------------------------------------------

USLParser::Unary_exprContext::Unary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Primary_exprContext* USLParser::Unary_exprContext::primary_expr() {
  return getRuleContext<USLParser::Primary_exprContext>(0);
}

tree::TerminalNode* USLParser::Unary_exprContext::INCREMENT() {
  return getToken(USLParser::INCREMENT, 0);
}

tree::TerminalNode* USLParser::Unary_exprContext::DECREMENT() {
  return getToken(USLParser::DECREMENT, 0);
}

tree::TerminalNode* USLParser::Unary_exprContext::NOT() {
  return getToken(USLParser::NOT, 0);
}


size_t USLParser::Unary_exprContext::getRuleIndex() const {
  return USLParser::RuleUnary_expr;
}

void USLParser::Unary_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_expr(this);
}

void USLParser::Unary_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_expr(this);
}


std::any USLParser::Unary_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitUnary_expr(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Unary_exprContext* USLParser::unary_expr() {
  Unary_exprContext *_localctx = _tracker.createInstance<Unary_exprContext>(_ctx, getState());
  enterRule(_localctx, 46, USLParser::RuleUnary_expr);
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
    setState(355);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 131) != 0)) {
      setState(354);
      _la = _input->LA(1);
      if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 75)) & 131) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(357);
    primary_expr();
   
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

USLParser::Function_callContext* USLParser::Primary_exprContext::function_call() {
  return getRuleContext<USLParser::Function_callContext>(0);
}

USLParser::Id_with_scopeContext* USLParser::Primary_exprContext::id_with_scope() {
  return getRuleContext<USLParser::Id_with_scopeContext>(0);
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
  enterRule(_localctx, 48, USLParser::RulePrimary_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(366);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::CALL: {
        enterOuterAlt(_localctx, 1);
        setState(359);
        function_call();
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(360);
        id_with_scope();
        break;
      }

      case USLParser::INT_LITTERAL:
      case USLParser::UINT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL:
      case USLParser::BOOL_LITTERAL: {
        enterOuterAlt(_localctx, 3);
        setState(361);
        litteral();
        break;
      }

      case USLParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(362);
        match(USLParser::T__3);
        setState(363);
        expression();
        setState(364);
        match(USLParser::T__4);
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

//----------------- Function_callContext ------------------------------------------------------------------

USLParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Function_callContext::CALL() {
  return getToken(USLParser::CALL, 0);
}

USLParser::Id_with_scopeContext* USLParser::Function_callContext::id_with_scope() {
  return getRuleContext<USLParser::Id_with_scopeContext>(0);
}

USLParser::Function_call_parametersContext* USLParser::Function_callContext::function_call_parameters() {
  return getRuleContext<USLParser::Function_call_parametersContext>(0);
}


size_t USLParser::Function_callContext::getRuleIndex() const {
  return USLParser::RuleFunction_call;
}

void USLParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void USLParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


std::any USLParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Function_callContext* USLParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 50, USLParser::RuleFunction_call);
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
    setState(368);
    match(USLParser::CALL);
    setState(369);
    id_with_scope();
    setState(370);
    match(USLParser::T__3);
    setState(372);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__3

    || _la == USLParser::CALL || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 653443) != 0)) {
      setState(371);
      function_call_parameters();
    }
    setState(374);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atribute_constructorContext ------------------------------------------------------------------

USLParser::Atribute_constructorContext::Atribute_constructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Atribute_constructorContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

USLParser::ParameterListContext* USLParser::Atribute_constructorContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}


size_t USLParser::Atribute_constructorContext::getRuleIndex() const {
  return USLParser::RuleAtribute_constructor;
}

void USLParser::Atribute_constructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribute_constructor(this);
}

void USLParser::Atribute_constructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribute_constructor(this);
}


std::any USLParser::Atribute_constructorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAtribute_constructor(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Atribute_constructorContext* USLParser::atribute_constructor() {
  Atribute_constructorContext *_localctx = _tracker.createInstance<Atribute_constructorContext>(_ctx, getState());
  enterRule(_localctx, 52, USLParser::RuleAtribute_constructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    type();
    setState(377);
    match(USLParser::T__3);
    setState(378);
    parameterList();
    setState(379);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atrribute_requiresContext ------------------------------------------------------------------

USLParser::Atrribute_requiresContext::Atrribute_requiresContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Atrribute_requiresContext::REQUIRES() {
  return getToken(USLParser::REQUIRES, 0);
}

std::vector<USLParser::Implements_functionContext *> USLParser::Atrribute_requiresContext::implements_function() {
  return getRuleContexts<USLParser::Implements_functionContext>();
}

USLParser::Implements_functionContext* USLParser::Atrribute_requiresContext::implements_function(size_t i) {
  return getRuleContext<USLParser::Implements_functionContext>(i);
}

std::vector<USLParser::Implements_VarContext *> USLParser::Atrribute_requiresContext::implements_Var() {
  return getRuleContexts<USLParser::Implements_VarContext>();
}

USLParser::Implements_VarContext* USLParser::Atrribute_requiresContext::implements_Var(size_t i) {
  return getRuleContext<USLParser::Implements_VarContext>(i);
}


size_t USLParser::Atrribute_requiresContext::getRuleIndex() const {
  return USLParser::RuleAtrribute_requires;
}

void USLParser::Atrribute_requiresContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtrribute_requires(this);
}

void USLParser::Atrribute_requiresContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtrribute_requires(this);
}


std::any USLParser::Atrribute_requiresContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAtrribute_requires(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Atrribute_requiresContext* USLParser::atrribute_requires() {
  Atrribute_requiresContext *_localctx = _tracker.createInstance<Atrribute_requiresContext>(_ctx, getState());
  enterRule(_localctx, 54, USLParser::RuleAtrribute_requires);
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
    setState(381);
    match(USLParser::REQUIRES);
    setState(382);
    match(USLParser::T__1);
    setState(387);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 671072256) != 0) || _la == USLParser::ID) {
      setState(385);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(383);
        implements_function();
        break;
      }

      case 2: {
        setState(384);
        implements_Var();
        break;
      }

      default:
        break;
      }
      setState(389);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(390);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Implements_functionContext ------------------------------------------------------------------

USLParser::Implements_functionContext::Implements_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Implements_functionContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Implements_functionContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::ParameterListContext* USLParser::Implements_functionContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}


size_t USLParser::Implements_functionContext::getRuleIndex() const {
  return USLParser::RuleImplements_function;
}

void USLParser::Implements_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplements_function(this);
}

void USLParser::Implements_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplements_function(this);
}


std::any USLParser::Implements_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitImplements_function(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Implements_functionContext* USLParser::implements_function() {
  Implements_functionContext *_localctx = _tracker.createInstance<Implements_functionContext>(_ctx, getState());
  enterRule(_localctx, 56, USLParser::RuleImplements_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    type();
    setState(393);
    match(USLParser::ID);
    setState(394);
    match(USLParser::T__3);
    setState(395);
    parameterList();
    setState(396);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Implements_VarContext ------------------------------------------------------------------

USLParser::Implements_VarContext::Implements_VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Implements_VarContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Implements_VarContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::Implements_VarContext::getRuleIndex() const {
  return USLParser::RuleImplements_Var;
}

void USLParser::Implements_VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImplements_Var(this);
}

void USLParser::Implements_VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImplements_Var(this);
}


std::any USLParser::Implements_VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitImplements_Var(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Implements_VarContext* USLParser::implements_Var() {
  Implements_VarContext *_localctx = _tracker.createInstance<Implements_VarContext>(_ctx, getState());
  enterRule(_localctx, 58, USLParser::RuleImplements_Var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    type();
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

//----------------- PrimitivesContext ------------------------------------------------------------------

USLParser::PrimitivesContext::PrimitivesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::PrimitivesContext::BOOL() {
  return getToken(USLParser::BOOL, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::BYTE() {
  return getToken(USLParser::BYTE, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::UBYTE() {
  return getToken(USLParser::UBYTE, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::SHORT() {
  return getToken(USLParser::SHORT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::USHORT() {
  return getToken(USLParser::USHORT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::UINT() {
  return getToken(USLParser::UINT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::LONG() {
  return getToken(USLParser::LONG, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::ULONG() {
  return getToken(USLParser::ULONG, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::FLOAT() {
  return getToken(USLParser::FLOAT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::DOUBLE() {
  return getToken(USLParser::DOUBLE, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::HASH() {
  return getToken(USLParser::HASH, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::STRING() {
  return getToken(USLParser::STRING, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::CHAR() {
  return getToken(USLParser::CHAR, 0);
}


size_t USLParser::PrimitivesContext::getRuleIndex() const {
  return USLParser::RulePrimitives;
}

void USLParser::PrimitivesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimitives(this);
}

void USLParser::PrimitivesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimitives(this);
}


std::any USLParser::PrimitivesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPrimitives(this);
  else
    return visitor->visitChildren(this);
}

USLParser::PrimitivesContext* USLParser::primitives() {
  PrimitivesContext *_localctx = _tracker.createInstance<PrimitivesContext>(_ctx, getState());
  enterRule(_localctx, 60, USLParser::RulePrimitives);
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
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 671072256) != 0))) {
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

//----------------- Integral_typeContext ------------------------------------------------------------------

USLParser::Integral_typeContext::Integral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Signed_inegral_typeContext* USLParser::Integral_typeContext::signed_inegral_type() {
  return getRuleContext<USLParser::Signed_inegral_typeContext>(0);
}

USLParser::Unsigned_integral_typeContext* USLParser::Integral_typeContext::unsigned_integral_type() {
  return getRuleContext<USLParser::Unsigned_integral_typeContext>(0);
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
  enterRule(_localctx, 62, USLParser::RuleIntegral_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(405);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::BYTE:
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG: {
        enterOuterAlt(_localctx, 1);
        setState(403);
        signed_inegral_type();
        break;
      }

      case USLParser::UBYTE:
      case USLParser::USHORT:
      case USLParser::UINT:
      case USLParser::ULONG: {
        enterOuterAlt(_localctx, 2);
        setState(404);
        unsigned_integral_type();
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

//----------------- Signed_inegral_typeContext ------------------------------------------------------------------

USLParser::Signed_inegral_typeContext::Signed_inegral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Signed_inegral_typeContext::BYTE() {
  return getToken(USLParser::BYTE, 0);
}

tree::TerminalNode* USLParser::Signed_inegral_typeContext::SHORT() {
  return getToken(USLParser::SHORT, 0);
}

tree::TerminalNode* USLParser::Signed_inegral_typeContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::Signed_inegral_typeContext::LONG() {
  return getToken(USLParser::LONG, 0);
}


size_t USLParser::Signed_inegral_typeContext::getRuleIndex() const {
  return USLParser::RuleSigned_inegral_type;
}

void USLParser::Signed_inegral_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSigned_inegral_type(this);
}

void USLParser::Signed_inegral_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSigned_inegral_type(this);
}


std::any USLParser::Signed_inegral_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitSigned_inegral_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Signed_inegral_typeContext* USLParser::signed_inegral_type() {
  Signed_inegral_typeContext *_localctx = _tracker.createInstance<Signed_inegral_typeContext>(_ctx, getState());
  enterRule(_localctx, 64, USLParser::RuleSigned_inegral_type);
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
    setState(407);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1392640) != 0))) {
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

//----------------- Unsigned_integral_typeContext ------------------------------------------------------------------

USLParser::Unsigned_integral_typeContext::Unsigned_integral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Unsigned_integral_typeContext::UBYTE() {
  return getToken(USLParser::UBYTE, 0);
}

tree::TerminalNode* USLParser::Unsigned_integral_typeContext::USHORT() {
  return getToken(USLParser::USHORT, 0);
}

tree::TerminalNode* USLParser::Unsigned_integral_typeContext::UINT() {
  return getToken(USLParser::UINT, 0);
}

tree::TerminalNode* USLParser::Unsigned_integral_typeContext::ULONG() {
  return getToken(USLParser::ULONG, 0);
}


size_t USLParser::Unsigned_integral_typeContext::getRuleIndex() const {
  return USLParser::RuleUnsigned_integral_type;
}

void USLParser::Unsigned_integral_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsigned_integral_type(this);
}

void USLParser::Unsigned_integral_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsigned_integral_type(this);
}


std::any USLParser::Unsigned_integral_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitUnsigned_integral_type(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Unsigned_integral_typeContext* USLParser::unsigned_integral_type() {
  Unsigned_integral_typeContext *_localctx = _tracker.createInstance<Unsigned_integral_typeContext>(_ctx, getState());
  enterRule(_localctx, 66, USLParser::RuleUnsigned_integral_type);
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
    setState(409);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2785280) != 0))) {
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

//----------------- LitteralContext ------------------------------------------------------------------

USLParser::LitteralContext::LitteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::LitteralContext::STRING_LITTERAL() {
  return getToken(USLParser::STRING_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::INT_LITTERAL() {
  return getToken(USLParser::INT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::UINT_LITTERAL() {
  return getToken(USLParser::UINT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::FLOAT_LITTERAL() {
  return getToken(USLParser::FLOAT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::CHAR_LITTERAL() {
  return getToken(USLParser::CHAR_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::BOOL_LITTERAL() {
  return getToken(USLParser::BOOL_LITTERAL, 0);
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
  enterRule(_localctx, 68, USLParser::RuleLitteral);
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
    setState(411);
    _la = _input->LA(1);
    if (!(((((_la - 86) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 86)) & 63) != 0))) {
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

//----------------- TypeContext ------------------------------------------------------------------

USLParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::PrimitivesContext* USLParser::TypeContext::primitives() {
  return getRuleContext<USLParser::PrimitivesContext>(0);
}

tree::TerminalNode* USLParser::TypeContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Scope_ressolutionContext* USLParser::TypeContext::scope_ressolution() {
  return getRuleContext<USLParser::Scope_ressolutionContext>(0);
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
  enterRule(_localctx, 70, USLParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(418);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::BYTE:
      case USLParser::UBYTE:
      case USLParser::SHORT:
      case USLParser::USHORT:
      case USLParser::INT:
      case USLParser::UINT:
      case USLParser::LONG:
      case USLParser::ULONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(413);
        primitives();
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(415);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
        case 1: {
          setState(414);
          scope_ressolution();
          break;
        }

        default:
          break;
        }
        setState(417);
        match(USLParser::ID);
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

//----------------- ParameterContext ------------------------------------------------------------------

USLParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::ParameterContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::ParameterContext::ID() {
  return getToken(USLParser::ID, 0);
}

std::vector<tree::TerminalNode *> USLParser::ParameterContext::TYPE_QUALIFYERS() {
  return getTokens(USLParser::TYPE_QUALIFYERS);
}

tree::TerminalNode* USLParser::ParameterContext::TYPE_QUALIFYERS(size_t i) {
  return getToken(USLParser::TYPE_QUALIFYERS, i);
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
  enterRule(_localctx, 72, USLParser::RuleParameter);
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
    setState(423);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::TYPE_QUALIFYERS) {
      setState(420);
      match(USLParser::TYPE_QUALIFYERS);
      setState(425);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(426);
    type();
    setState(427);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

USLParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ParameterContext *> USLParser::ParameterListContext::parameter() {
  return getRuleContexts<USLParser::ParameterContext>();
}

USLParser::ParameterContext* USLParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<USLParser::ParameterContext>(i);
}


size_t USLParser::ParameterListContext::getRuleIndex() const {
  return USLParser::RuleParameterList;
}

void USLParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void USLParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


std::any USLParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ParameterListContext* USLParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 74, USLParser::RuleParameterList);
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
    setState(429);
    parameter();
    setState(434);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(430);
      match(USLParser::T__6);
      setState(431);
      parameter();
      setState(436);
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

//----------------- Classmember_declarationContext ------------------------------------------------------------------

USLParser::Classmember_declarationContext::Classmember_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Function_declarationContext* USLParser::Classmember_declarationContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}

USLParser::Var_declarationContext* USLParser::Classmember_declarationContext::var_declaration() {
  return getRuleContext<USLParser::Var_declarationContext>(0);
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
  enterRule(_localctx, 76, USLParser::RuleClassmember_declaration);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(437);
      function_declaration();
      break;
    }

    case 2: {
      setState(438);
      var_declaration();
      break;
    }

    default:
      break;
    }
    setState(441);
    match(USLParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_symbolsContext ------------------------------------------------------------------

USLParser::Operator_symbolsContext::Operator_symbolsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Operator_symbolsContext::CUSTOM_OP_SYMBOLS() {
  return getToken(USLParser::CUSTOM_OP_SYMBOLS, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::EQUALS() {
  return getToken(USLParser::EQUALS, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LESS() {
  return getToken(USLParser::LESS, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LARGER() {
  return getToken(USLParser::LARGER, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::NOT() {
  return getToken(USLParser::NOT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LESS_EQ() {
  return getToken(USLParser::LESS_EQ, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LARGER_EQ() {
  return getToken(USLParser::LARGER_EQ, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::B_LEFT() {
  return getToken(USLParser::B_LEFT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::B_RIGHT() {
  return getToken(USLParser::B_RIGHT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::INCREMENT() {
  return getToken(USLParser::INCREMENT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::DECREMENT() {
  return getToken(USLParser::DECREMENT, 0);
}


size_t USLParser::Operator_symbolsContext::getRuleIndex() const {
  return USLParser::RuleOperator_symbols;
}

void USLParser::Operator_symbolsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator_symbols(this);
}

void USLParser::Operator_symbolsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator_symbols(this);
}


std::any USLParser::Operator_symbolsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitOperator_symbols(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Operator_symbolsContext* USLParser::operator_symbols() {
  Operator_symbolsContext *_localctx = _tracker.createInstance<Operator_symbolsContext>(_ctx, getState());
  enterRule(_localctx, 78, USLParser::RuleOperator_symbols);
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
    _la = _input->LA(1);
    if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & 1049599) != 0))) {
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

//----------------- Scope_ressolutionContext ------------------------------------------------------------------

USLParser::Scope_ressolutionContext::Scope_ressolutionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::Scope_ressolutionContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::Scope_ressolutionContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

std::vector<tree::TerminalNode *> USLParser::Scope_ressolutionContext::SCOPE_RESSOLUTION_OP() {
  return getTokens(USLParser::SCOPE_RESSOLUTION_OP);
}

tree::TerminalNode* USLParser::Scope_ressolutionContext::SCOPE_RESSOLUTION_OP(size_t i) {
  return getToken(USLParser::SCOPE_RESSOLUTION_OP, i);
}


size_t USLParser::Scope_ressolutionContext::getRuleIndex() const {
  return USLParser::RuleScope_ressolution;
}

void USLParser::Scope_ressolutionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope_ressolution(this);
}

void USLParser::Scope_ressolutionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope_ressolution(this);
}


std::any USLParser::Scope_ressolutionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitScope_ressolution(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Scope_ressolutionContext* USLParser::scope_ressolution() {
  Scope_ressolutionContext *_localctx = _tracker.createInstance<Scope_ressolutionContext>(_ctx, getState());
  enterRule(_localctx, 80, USLParser::RuleScope_ressolution);

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
    setState(445);
    match(USLParser::ID);
    setState(450);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(446);
        match(USLParser::SCOPE_RESSOLUTION_OP);
        setState(447);
        match(USLParser::ID); 
      }
      setState(452);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
    setState(453);
    match(USLParser::SCOPE_RESSOLUTION_OP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atribute_parameterContext ------------------------------------------------------------------

USLParser::Atribute_parameterContext::Atribute_parameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Atribute_parameterContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::LitteralContext* USLParser::Atribute_parameterContext::litteral() {
  return getRuleContext<USLParser::LitteralContext>(0);
}


size_t USLParser::Atribute_parameterContext::getRuleIndex() const {
  return USLParser::RuleAtribute_parameter;
}

void USLParser::Atribute_parameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribute_parameter(this);
}

void USLParser::Atribute_parameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribute_parameter(this);
}


std::any USLParser::Atribute_parameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAtribute_parameter(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Atribute_parameterContext* USLParser::atribute_parameter() {
  Atribute_parameterContext *_localctx = _tracker.createInstance<Atribute_parameterContext>(_ctx, getState());
  enterRule(_localctx, 82, USLParser::RuleAtribute_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(457);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(455);
        match(USLParser::ID);
        break;
      }

      case USLParser::INT_LITTERAL:
      case USLParser::UINT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL:
      case USLParser::BOOL_LITTERAL: {
        enterOuterAlt(_localctx, 2);
        setState(456);
        litteral();
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

//----------------- Atribute_parameter_listContext ------------------------------------------------------------------

USLParser::Atribute_parameter_listContext::Atribute_parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Atribute_parameterContext *> USLParser::Atribute_parameter_listContext::atribute_parameter() {
  return getRuleContexts<USLParser::Atribute_parameterContext>();
}

USLParser::Atribute_parameterContext* USLParser::Atribute_parameter_listContext::atribute_parameter(size_t i) {
  return getRuleContext<USLParser::Atribute_parameterContext>(i);
}


size_t USLParser::Atribute_parameter_listContext::getRuleIndex() const {
  return USLParser::RuleAtribute_parameter_list;
}

void USLParser::Atribute_parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribute_parameter_list(this);
}

void USLParser::Atribute_parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribute_parameter_list(this);
}


std::any USLParser::Atribute_parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAtribute_parameter_list(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Atribute_parameter_listContext* USLParser::atribute_parameter_list() {
  Atribute_parameter_listContext *_localctx = _tracker.createInstance<Atribute_parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 84, USLParser::RuleAtribute_parameter_list);
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
    setState(459);
    atribute_parameter();
    setState(464);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(460);
      match(USLParser::T__6);
      setState(461);
      atribute_parameter();
      setState(466);
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

//----------------- Atribute_decoratorsContext ------------------------------------------------------------------

USLParser::Atribute_decoratorsContext::Atribute_decoratorsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::Atribute_decoratorsContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::Atribute_decoratorsContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

std::vector<USLParser::Atribute_parameter_listContext *> USLParser::Atribute_decoratorsContext::atribute_parameter_list() {
  return getRuleContexts<USLParser::Atribute_parameter_listContext>();
}

USLParser::Atribute_parameter_listContext* USLParser::Atribute_decoratorsContext::atribute_parameter_list(size_t i) {
  return getRuleContext<USLParser::Atribute_parameter_listContext>(i);
}


size_t USLParser::Atribute_decoratorsContext::getRuleIndex() const {
  return USLParser::RuleAtribute_decorators;
}

void USLParser::Atribute_decoratorsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtribute_decorators(this);
}

void USLParser::Atribute_decoratorsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtribute_decorators(this);
}


std::any USLParser::Atribute_decoratorsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAtribute_decorators(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Atribute_decoratorsContext* USLParser::atribute_decorators() {
  Atribute_decoratorsContext *_localctx = _tracker.createInstance<Atribute_decoratorsContext>(_ctx, getState());
  enterRule(_localctx, 86, USLParser::RuleAtribute_decorators);
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
    setState(467);
    match(USLParser::T__7);
    setState(468);
    match(USLParser::ID);
    setState(473);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__3) {
      setState(469);
      match(USLParser::T__3);
      setState(470);
      atribute_parameter_list();
      setState(471);
      match(USLParser::T__4);
    }
    setState(483);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__6) {
      setState(475);
      match(USLParser::T__6);
      setState(476);
      match(USLParser::ID);
      setState(481);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::T__3) {
        setState(477);
        match(USLParser::T__3);
        setState(478);
        atribute_parameter_list();
        setState(479);
        match(USLParser::T__4);
      }
    }
    setState(485);
    match(USLParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Extern_specContext ------------------------------------------------------------------

USLParser::Extern_specContext::Extern_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Extern_specContext::EXTERN() {
  return getToken(USLParser::EXTERN, 0);
}

tree::TerminalNode* USLParser::Extern_specContext::STRING_LITTERAL() {
  return getToken(USLParser::STRING_LITTERAL, 0);
}


size_t USLParser::Extern_specContext::getRuleIndex() const {
  return USLParser::RuleExtern_spec;
}

void USLParser::Extern_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExtern_spec(this);
}

void USLParser::Extern_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExtern_spec(this);
}


std::any USLParser::Extern_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExtern_spec(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Extern_specContext* USLParser::extern_spec() {
  Extern_specContext *_localctx = _tracker.createInstance<Extern_specContext>(_ctx, getState());
  enterRule(_localctx, 88, USLParser::RuleExtern_spec);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(USLParser::EXTERN);
    setState(488);
    match(USLParser::STRING_LITTERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_with_scopeContext ------------------------------------------------------------------

USLParser::Id_with_scopeContext::Id_with_scopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Id_with_scopeContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Scope_ressolutionContext* USLParser::Id_with_scopeContext::scope_ressolution() {
  return getRuleContext<USLParser::Scope_ressolutionContext>(0);
}


size_t USLParser::Id_with_scopeContext::getRuleIndex() const {
  return USLParser::RuleId_with_scope;
}

void USLParser::Id_with_scopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_with_scope(this);
}

void USLParser::Id_with_scopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_with_scope(this);
}


std::any USLParser::Id_with_scopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitId_with_scope(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Id_with_scopeContext* USLParser::id_with_scope() {
  Id_with_scopeContext *_localctx = _tracker.createInstance<Id_with_scopeContext>(_ctx, getState());
  enterRule(_localctx, 90, USLParser::RuleId_with_scope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      setState(490);
      scope_ressolution();
      break;
    }

    default:
      break;
    }
    setState(493);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_call_parametersContext ------------------------------------------------------------------

USLParser::Function_call_parametersContext::Function_call_parametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ExpressionContext *> USLParser::Function_call_parametersContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Function_call_parametersContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::Function_call_parametersContext::getRuleIndex() const {
  return USLParser::RuleFunction_call_parameters;
}

void USLParser::Function_call_parametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call_parameters(this);
}

void USLParser::Function_call_parametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call_parameters(this);
}


std::any USLParser::Function_call_parametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFunction_call_parameters(this);
  else
    return visitor->visitChildren(this);
}

USLParser::Function_call_parametersContext* USLParser::function_call_parameters() {
  Function_call_parametersContext *_localctx = _tracker.createInstance<Function_call_parametersContext>(_ctx, getState());
  enterRule(_localctx, 92, USLParser::RuleFunction_call_parameters);
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
    setState(495);
    expression();
    setState(500);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(496);
      match(USLParser::T__6);
      setState(497);
      expression();
      setState(502);
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

//----------------- TestContext ------------------------------------------------------------------

USLParser::TestContext::TestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::TestContext::TEST() {
  return getToken(USLParser::TEST, 0);
}

tree::TerminalNode* USLParser::TestContext::STRING_LITTERAL() {
  return getToken(USLParser::STRING_LITTERAL, 0);
}

tree::TerminalNode* USLParser::TestContext::BOOL_LITTERAL() {
  return getToken(USLParser::BOOL_LITTERAL, 0);
}

tree::TerminalNode* USLParser::TestContext::INT_LITTERAL() {
  return getToken(USLParser::INT_LITTERAL, 0);
}


size_t USLParser::TestContext::getRuleIndex() const {
  return USLParser::RuleTest;
}

void USLParser::TestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest(this);
}

void USLParser::TestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest(this);
}


std::any USLParser::TestContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitTest(this);
  else
    return visitor->visitChildren(this);
}

USLParser::TestContext* USLParser::test() {
  TestContext *_localctx = _tracker.createInstance<TestContext>(_ctx, getState());
  enterRule(_localctx, 94, USLParser::RuleTest);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(USLParser::TEST);

    setState(504);
    match(USLParser::T__3);
    setState(505);
    antlrcpp::downCast<TestContext *>(_localctx)->name = match(USLParser::STRING_LITTERAL);
    setState(506);
    match(USLParser::T__6);
    setState(507);
    antlrcpp::downCast<TestContext *>(_localctx)->fuzzing = match(USLParser::BOOL_LITTERAL);
    setState(508);
    match(USLParser::T__6);
    setState(509);
    antlrcpp::downCast<TestContext *>(_localctx)->repeat_count = match(USLParser::INT_LITTERAL);
    setState(510);
    match(USLParser::T__4);
   
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
