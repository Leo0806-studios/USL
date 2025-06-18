
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
      "function_declaration", "enum_declaration", "var_declaration", "custom_opperator_sym", 
      "noexcept_specifyer", "assignment_expr", "equality_expr", "comparison_expr", 
      "bitshift_expr", "additive_expr", "multiplicative_expr", "unary_expr", 
      "primary_expr", "function_call", "atribute_constructor", "atrribute_requires", 
      "implements_function", "implements_Var", "primitives", "integral_type", 
      "signed_inegral_type", "unsigned_integral_type", "litteral", "type", 
      "parameter", "parameterList", "classmember_declaration", "operator_symbols", 
      "scope_ressolution", "atribute_parameter", "atribute_parameter_list", 
      "atribute_decorators", "extern_spec", "id_with_scope", "function_call_parameters"
    },
    std::vector<std::string>{
      "", "';'", "'{'", "'}'", "'('", "')'", "':'", "','", "'['", "']'", 
      "'namespace'", "'class'", "'enum'", "'atribute'", "'byte'", "'ubyte'", 
      "'short'", "'ushort'", "'int'", "'uint'", "'long'", "'ulong'", "'float'", 
      "'double'", "'hash'", "'string'", "'char'", "'void'", "'null'", "'bool'", 
      "'template'", "'async'", "'sync'", "'_internal'", "'operator'", "'unsafe'", 
      "'stack_alloc'", "'reinterpret_cast'", "'static_cast'", "'unsafe_cast'", 
      "'def_operator'", "'def_keyword'", "'def_flow'", "", "'static'", "'virtual'", 
      "'noexcept'", "'override'", "'nullptr'", "'return'", "'requires'", 
      "'auto'", "'call'", "'extern'", "'__declspec'", "'dllexport'", "'dllimport'", 
      "'new'", "'unsafe_new'", "'unsafe_delete'", "'='", "'+'", "'-'", "'*'", 
      "'/'", "'%'", "'#'", "'->'", "'++'", "'--'", "'<<'", "'>>'", "'=='", 
      "'<'", "'>'", "'!'", "", "", "'::'"
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
      "UNSAFE_DELETE", "ASSIGN_OP", "PLUS_OP", "MINUS_OP", "MULT_OP", "DIV_OP", 
      "MOD_OP", "HASH_OP", "DEREF", "INCREMENT", "DECREMENT", "B_LEFT", 
      "B_RIGHT", "EQUALS", "LESS", "LARGER", "NOT", "LESS_EQ", "LARGER_EQ", 
      "SCOPE_RESSOLUTION_OP", "INT_LITTERAL", "UINT_LITTERAL", "FLOAT_LITTERAL", 
      "CHAR_LITTERAL", "STRING_LITTERAL", "BOOL_LITTERAL", "COMMENT", "WS", 
      "ID", "CUSTOM_OP_SYMBOLS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,88,451,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,1,0,4,0,88,8,0,11,0,12,0,89,1,0,1,0,1,1,1,1,1,1,1,1,1,1,3,1,99,8,1,
  	1,2,1,2,1,2,3,2,104,8,2,1,2,1,2,1,3,1,3,1,4,1,4,5,4,112,8,4,10,4,12,4,
  	115,9,4,1,4,1,4,1,5,3,5,120,8,5,1,5,1,5,1,5,1,5,5,5,126,8,5,10,5,12,5,
  	129,9,5,1,5,1,5,1,6,1,6,1,6,1,6,5,6,137,8,6,10,6,12,6,140,9,6,1,6,1,6,
  	1,7,1,7,1,7,1,7,3,7,148,8,7,1,7,3,7,151,8,7,1,7,1,7,1,8,3,8,156,8,8,1,
  	8,5,8,159,8,8,10,8,12,8,162,9,8,1,8,3,8,165,8,8,1,8,1,8,3,8,169,8,8,1,
  	8,1,8,1,8,3,8,174,8,8,1,8,1,8,3,8,178,8,8,1,8,3,8,181,8,8,1,8,1,8,5,8,
  	185,8,8,10,8,12,8,188,9,8,1,8,1,8,1,9,1,9,1,9,3,9,195,8,9,1,9,1,9,1,9,
  	1,9,3,9,201,8,9,1,9,1,9,1,9,1,9,3,9,207,8,9,5,9,209,8,9,10,9,12,9,212,
  	9,9,1,9,1,9,1,10,3,10,217,8,10,1,10,3,10,220,8,10,1,10,1,10,1,10,1,10,
  	5,10,226,8,10,10,10,12,10,229,9,10,1,10,1,10,1,10,3,10,234,8,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,3,11,242,8,11,1,11,1,11,1,11,5,11,247,8,11,10,
  	11,12,11,250,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,3,
  	13,262,8,13,1,14,1,14,1,14,5,14,267,8,14,10,14,12,14,270,9,14,1,15,1,
  	15,1,15,5,15,275,8,15,10,15,12,15,278,9,15,1,16,1,16,1,16,5,16,283,8,
  	16,10,16,12,16,286,9,16,1,17,1,17,1,17,5,17,291,8,17,10,17,12,17,294,
  	9,17,1,18,1,18,1,18,5,18,299,8,18,10,18,12,18,302,9,18,1,19,3,19,305,
  	8,19,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,316,8,20,1,21,
  	1,21,1,21,1,21,3,21,322,8,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,23,
  	1,23,1,23,1,23,5,23,335,8,23,10,23,12,23,338,9,23,1,23,1,23,1,24,1,24,
  	1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,27,1,27,3,27,355,8,27,
  	1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,3,31,365,8,31,1,31,3,31,368,8,
  	31,1,32,5,32,371,8,32,10,32,12,32,374,9,32,1,32,1,32,1,32,1,33,1,33,1,
  	33,5,33,382,8,33,10,33,12,33,385,9,33,1,34,1,34,3,34,389,8,34,1,35,1,
  	35,1,36,1,36,1,36,5,36,396,8,36,10,36,12,36,399,9,36,1,36,1,36,1,37,1,
  	37,3,37,405,8,37,1,38,1,38,1,38,5,38,410,8,38,10,38,12,38,413,9,38,1,
  	39,1,39,1,39,1,39,1,39,1,39,3,39,421,8,39,1,39,1,39,1,39,1,39,1,39,1,
  	39,3,39,429,8,39,3,39,431,8,39,1,39,1,39,1,40,1,40,1,40,1,41,3,41,439,
  	8,41,1,41,1,41,1,42,1,42,1,42,5,42,446,8,42,10,42,12,42,449,9,42,1,42,
  	0,0,43,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,0,11,2,0,
  	72,72,75,75,2,0,73,74,76,77,1,0,70,71,1,0,61,62,1,0,63,65,2,0,68,69,75,
  	75,2,0,14,26,29,29,4,0,14,14,16,16,18,18,20,20,4,0,15,15,17,17,19,19,
  	21,21,1,0,79,84,2,0,68,77,88,88,466,0,87,1,0,0,0,2,98,1,0,0,0,4,103,1,
  	0,0,0,6,107,1,0,0,0,8,109,1,0,0,0,10,119,1,0,0,0,12,132,1,0,0,0,14,143,
  	1,0,0,0,16,155,1,0,0,0,18,191,1,0,0,0,20,216,1,0,0,0,22,235,1,0,0,0,24,
  	253,1,0,0,0,26,258,1,0,0,0,28,263,1,0,0,0,30,271,1,0,0,0,32,279,1,0,0,
  	0,34,287,1,0,0,0,36,295,1,0,0,0,38,304,1,0,0,0,40,315,1,0,0,0,42,317,
  	1,0,0,0,44,325,1,0,0,0,46,330,1,0,0,0,48,341,1,0,0,0,50,347,1,0,0,0,52,
  	350,1,0,0,0,54,354,1,0,0,0,56,356,1,0,0,0,58,358,1,0,0,0,60,360,1,0,0,
  	0,62,367,1,0,0,0,64,372,1,0,0,0,66,378,1,0,0,0,68,388,1,0,0,0,70,390,
  	1,0,0,0,72,392,1,0,0,0,74,404,1,0,0,0,76,406,1,0,0,0,78,414,1,0,0,0,80,
  	434,1,0,0,0,82,438,1,0,0,0,84,442,1,0,0,0,86,88,3,2,1,0,87,86,1,0,0,0,
  	88,89,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,92,5,0,0,1,
  	92,1,1,0,0,0,93,99,3,10,5,0,94,99,3,12,6,0,95,99,3,18,9,0,96,99,3,14,
  	7,0,97,99,3,4,2,0,98,93,1,0,0,0,98,94,1,0,0,0,98,95,1,0,0,0,98,96,1,0,
  	0,0,98,97,1,0,0,0,99,3,1,0,0,0,100,104,3,20,10,0,101,104,3,16,8,0,102,
  	104,3,6,3,0,103,100,1,0,0,0,103,101,1,0,0,0,103,102,1,0,0,0,104,105,1,
  	0,0,0,105,106,5,1,0,0,106,5,1,0,0,0,107,108,3,26,13,0,108,7,1,0,0,0,109,
  	113,5,2,0,0,110,112,3,4,2,0,111,110,1,0,0,0,112,115,1,0,0,0,113,111,1,
  	0,0,0,113,114,1,0,0,0,114,116,1,0,0,0,115,113,1,0,0,0,116,117,5,3,0,0,
  	117,9,1,0,0,0,118,120,3,78,39,0,119,118,1,0,0,0,119,120,1,0,0,0,120,121,
  	1,0,0,0,121,122,5,11,0,0,122,123,5,87,0,0,123,127,5,2,0,0,124,126,3,4,
  	2,0,125,124,1,0,0,0,126,129,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,
  	130,1,0,0,0,129,127,1,0,0,0,130,131,5,3,0,0,131,11,1,0,0,0,132,133,5,
  	10,0,0,133,134,5,87,0,0,134,138,5,2,0,0,135,137,3,2,1,0,136,135,1,0,0,
  	0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,141,1,0,0,0,140,
  	138,1,0,0,0,141,142,5,3,0,0,142,13,1,0,0,0,143,144,5,13,0,0,144,145,5,
  	87,0,0,145,147,5,2,0,0,146,148,3,44,22,0,147,146,1,0,0,0,147,148,1,0,
  	0,0,148,150,1,0,0,0,149,151,3,46,23,0,150,149,1,0,0,0,150,151,1,0,0,0,
  	151,152,1,0,0,0,152,153,5,3,0,0,153,15,1,0,0,0,154,156,5,44,0,0,155,154,
  	1,0,0,0,155,156,1,0,0,0,156,160,1,0,0,0,157,159,5,43,0,0,158,157,1,0,
  	0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,164,1,0,0,0,162,
  	160,1,0,0,0,163,165,5,45,0,0,164,163,1,0,0,0,164,165,1,0,0,0,165,168,
  	1,0,0,0,166,169,5,27,0,0,167,169,3,62,31,0,168,166,1,0,0,0,168,167,1,
  	0,0,0,169,170,1,0,0,0,170,171,5,87,0,0,171,173,5,4,0,0,172,174,3,66,33,
  	0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,177,5,5,0,0,176,
  	178,3,24,12,0,177,176,1,0,0,0,177,178,1,0,0,0,178,180,1,0,0,0,179,181,
  	5,47,0,0,180,179,1,0,0,0,180,181,1,0,0,0,181,182,1,0,0,0,182,186,5,2,
  	0,0,183,185,3,4,2,0,184,183,1,0,0,0,185,188,1,0,0,0,186,184,1,0,0,0,186,
  	187,1,0,0,0,187,189,1,0,0,0,188,186,1,0,0,0,189,190,5,3,0,0,190,17,1,
  	0,0,0,191,194,5,12,0,0,192,193,5,6,0,0,193,195,3,54,27,0,194,192,1,0,
  	0,0,194,195,1,0,0,0,195,196,1,0,0,0,196,197,5,2,0,0,197,200,5,87,0,0,
  	198,199,5,60,0,0,199,201,5,79,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,
  	210,1,0,0,0,202,203,5,7,0,0,203,206,5,87,0,0,204,205,5,60,0,0,205,207,
  	5,79,0,0,206,204,1,0,0,0,206,207,1,0,0,0,207,209,1,0,0,0,208,202,1,0,
  	0,0,209,212,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,211,213,1,0,0,0,212,
  	210,1,0,0,0,213,214,5,3,0,0,214,19,1,0,0,0,215,217,5,44,0,0,216,215,1,
  	0,0,0,216,217,1,0,0,0,217,219,1,0,0,0,218,220,5,43,0,0,219,218,1,0,0,
  	0,219,220,1,0,0,0,220,221,1,0,0,0,221,222,3,62,31,0,222,233,5,87,0,0,
  	223,227,5,4,0,0,224,226,3,6,3,0,225,224,1,0,0,0,226,229,1,0,0,0,227,225,
  	1,0,0,0,227,228,1,0,0,0,228,230,1,0,0,0,229,227,1,0,0,0,230,234,5,5,0,
  	0,231,232,5,60,0,0,232,234,3,6,3,0,233,223,1,0,0,0,233,231,1,0,0,0,233,
  	234,1,0,0,0,234,21,1,0,0,0,235,236,5,40,0,0,236,237,5,4,0,0,237,238,5,
  	88,0,0,238,239,5,5,0,0,239,241,5,4,0,0,240,242,3,66,33,0,241,240,1,0,
  	0,0,241,242,1,0,0,0,242,243,1,0,0,0,243,244,5,5,0,0,244,248,5,2,0,0,245,
  	247,3,4,2,0,246,245,1,0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,1,
  	0,0,0,249,251,1,0,0,0,250,248,1,0,0,0,251,252,5,3,0,0,252,23,1,0,0,0,
  	253,254,5,46,0,0,254,255,5,4,0,0,255,256,5,84,0,0,256,257,5,5,0,0,257,
  	25,1,0,0,0,258,261,3,28,14,0,259,260,5,60,0,0,260,262,3,26,13,0,261,259,
  	1,0,0,0,261,262,1,0,0,0,262,27,1,0,0,0,263,268,3,30,15,0,264,265,7,0,
  	0,0,265,267,3,30,15,0,266,264,1,0,0,0,267,270,1,0,0,0,268,266,1,0,0,0,
  	268,269,1,0,0,0,269,29,1,0,0,0,270,268,1,0,0,0,271,276,3,32,16,0,272,
  	273,7,1,0,0,273,275,3,32,16,0,274,272,1,0,0,0,275,278,1,0,0,0,276,274,
  	1,0,0,0,276,277,1,0,0,0,277,31,1,0,0,0,278,276,1,0,0,0,279,284,3,34,17,
  	0,280,281,7,2,0,0,281,283,3,34,17,0,282,280,1,0,0,0,283,286,1,0,0,0,284,
  	282,1,0,0,0,284,285,1,0,0,0,285,33,1,0,0,0,286,284,1,0,0,0,287,292,3,
  	36,18,0,288,289,7,3,0,0,289,291,3,36,18,0,290,288,1,0,0,0,291,294,1,0,
  	0,0,292,290,1,0,0,0,292,293,1,0,0,0,293,35,1,0,0,0,294,292,1,0,0,0,295,
  	300,3,38,19,0,296,297,7,4,0,0,297,299,3,38,19,0,298,296,1,0,0,0,299,302,
  	1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,37,1,0,0,0,302,300,1,0,0,
  	0,303,305,7,5,0,0,304,303,1,0,0,0,304,305,1,0,0,0,305,306,1,0,0,0,306,
  	307,3,40,20,0,307,39,1,0,0,0,308,316,3,42,21,0,309,316,3,82,41,0,310,
  	316,3,60,30,0,311,312,5,4,0,0,312,313,3,6,3,0,313,314,5,5,0,0,314,316,
  	1,0,0,0,315,308,1,0,0,0,315,309,1,0,0,0,315,310,1,0,0,0,315,311,1,0,0,
  	0,316,41,1,0,0,0,317,318,5,52,0,0,318,319,3,82,41,0,319,321,5,4,0,0,320,
  	322,3,84,42,0,321,320,1,0,0,0,321,322,1,0,0,0,322,323,1,0,0,0,323,324,
  	5,5,0,0,324,43,1,0,0,0,325,326,3,62,31,0,326,327,5,4,0,0,327,328,3,66,
  	33,0,328,329,5,5,0,0,329,45,1,0,0,0,330,331,5,50,0,0,331,336,5,2,0,0,
  	332,335,3,48,24,0,333,335,3,50,25,0,334,332,1,0,0,0,334,333,1,0,0,0,335,
  	338,1,0,0,0,336,334,1,0,0,0,336,337,1,0,0,0,337,339,1,0,0,0,338,336,1,
  	0,0,0,339,340,5,3,0,0,340,47,1,0,0,0,341,342,3,62,31,0,342,343,5,87,0,
  	0,343,344,5,4,0,0,344,345,3,66,33,0,345,346,5,5,0,0,346,49,1,0,0,0,347,
  	348,3,62,31,0,348,349,5,87,0,0,349,51,1,0,0,0,350,351,7,6,0,0,351,53,
  	1,0,0,0,352,355,3,56,28,0,353,355,3,58,29,0,354,352,1,0,0,0,354,353,1,
  	0,0,0,355,55,1,0,0,0,356,357,7,7,0,0,357,57,1,0,0,0,358,359,7,8,0,0,359,
  	59,1,0,0,0,360,361,7,9,0,0,361,61,1,0,0,0,362,368,3,52,26,0,363,365,3,
  	72,36,0,364,363,1,0,0,0,364,365,1,0,0,0,365,366,1,0,0,0,366,368,5,87,
  	0,0,367,362,1,0,0,0,367,364,1,0,0,0,368,63,1,0,0,0,369,371,5,43,0,0,370,
  	369,1,0,0,0,371,374,1,0,0,0,372,370,1,0,0,0,372,373,1,0,0,0,373,375,1,
  	0,0,0,374,372,1,0,0,0,375,376,3,62,31,0,376,377,5,87,0,0,377,65,1,0,0,
  	0,378,383,3,64,32,0,379,380,5,7,0,0,380,382,3,64,32,0,381,379,1,0,0,0,
  	382,385,1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,67,1,0,0,0,385,383,
  	1,0,0,0,386,389,3,16,8,0,387,389,3,20,10,0,388,386,1,0,0,0,388,387,1,
  	0,0,0,389,69,1,0,0,0,390,391,7,10,0,0,391,71,1,0,0,0,392,397,5,87,0,0,
  	393,394,5,78,0,0,394,396,5,87,0,0,395,393,1,0,0,0,396,399,1,0,0,0,397,
  	395,1,0,0,0,397,398,1,0,0,0,398,400,1,0,0,0,399,397,1,0,0,0,400,401,5,
  	78,0,0,401,73,1,0,0,0,402,405,5,87,0,0,403,405,3,60,30,0,404,402,1,0,
  	0,0,404,403,1,0,0,0,405,75,1,0,0,0,406,411,3,74,37,0,407,408,5,7,0,0,
  	408,410,3,74,37,0,409,407,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,0,411,
  	412,1,0,0,0,412,77,1,0,0,0,413,411,1,0,0,0,414,415,5,8,0,0,415,420,5,
  	87,0,0,416,417,5,4,0,0,417,418,3,76,38,0,418,419,5,5,0,0,419,421,1,0,
  	0,0,420,416,1,0,0,0,420,421,1,0,0,0,421,430,1,0,0,0,422,423,5,7,0,0,423,
  	428,5,87,0,0,424,425,5,4,0,0,425,426,3,76,38,0,426,427,5,5,0,0,427,429,
  	1,0,0,0,428,424,1,0,0,0,428,429,1,0,0,0,429,431,1,0,0,0,430,422,1,0,0,
  	0,430,431,1,0,0,0,431,432,1,0,0,0,432,433,5,9,0,0,433,79,1,0,0,0,434,
  	435,5,53,0,0,435,436,5,83,0,0,436,81,1,0,0,0,437,439,3,72,36,0,438,437,
  	1,0,0,0,438,439,1,0,0,0,439,440,1,0,0,0,440,441,5,87,0,0,441,83,1,0,0,
  	0,442,447,3,6,3,0,443,444,5,7,0,0,444,446,3,6,3,0,445,443,1,0,0,0,446,
  	449,1,0,0,0,447,445,1,0,0,0,447,448,1,0,0,0,448,85,1,0,0,0,449,447,1,
  	0,0,0,52,89,98,103,113,119,127,138,147,150,155,160,164,168,173,177,180,
  	186,194,200,206,210,216,219,227,233,241,248,261,268,276,284,292,300,304,
  	315,321,334,336,354,364,367,372,383,388,397,404,411,420,428,430,438,447
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
    setState(87); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(86);
      global_statement();
      setState(89); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083831568) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0));
    setState(91);
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

USLParser::StatementContext* USLParser::Global_statementContext::statement() {
  return getRuleContext<USLParser::StatementContext>(0);
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
    setState(98);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__7:
      case USLParser::CLASS: {
        enterOuterAlt(_localctx, 1);
        setState(93);
        class_delcaration();
        break;
      }

      case USLParser::NAMESPACE: {
        enterOuterAlt(_localctx, 2);
        setState(94);
        namespace_declaration();
        break;
      }

      case USLParser::ENUM: {
        enterOuterAlt(_localctx, 3);
        setState(95);
        enum_declaration();
        break;
      }

      case USLParser::ATRIBUTE: {
        enterOuterAlt(_localctx, 4);
        setState(96);
        atribute_declaration();
        break;
      }

      case USLParser::T__3:
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
      case USLParser::VOID:
      case USLParser::BOOL:
      case USLParser::TYPE_QUALIFYERS:
      case USLParser::STATIC:
      case USLParser::VIRTUAL:
      case USLParser::CALL:
      case USLParser::INCREMENT:
      case USLParser::DECREMENT:
      case USLParser::NOT:
      case USLParser::INT_LITTERAL:
      case USLParser::UINT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL:
      case USLParser::BOOL_LITTERAL:
      case USLParser::ID: {
        enterOuterAlt(_localctx, 5);
        setState(97);
        statement();
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
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(100);
      var_declaration();
      break;
    }

    case 2: {
      setState(101);
      function_declaration();
      break;
    }

    case 3: {
      setState(102);
      expression();
      break;
    }

    default:
      break;
    }
    setState(105);
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
    setState(107);
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
    setState(109);
    match(USLParser::T__1);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0)) {
      setState(110);
      statement();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
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

std::vector<USLParser::StatementContext *> USLParser::Class_delcarationContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Class_delcarationContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
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
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__7) {
      setState(118);
      atribute_decorators();
    }
    setState(121);
    match(USLParser::CLASS);
    setState(122);
    match(USLParser::ID);
    setState(123);
    match(USLParser::T__1);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0)) {
      setState(124);
      statement();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(130);
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
    setState(132);
    match(USLParser::NAMESPACE);
    setState(133);
    match(USLParser::ID);
    setState(134);
    match(USLParser::T__1);
    setState(138);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083831568) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0)) {
      setState(135);
      global_statement();
      setState(140);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(141);
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
    setState(143);
    match(USLParser::ATRIBUTE);
    setState(144);
    match(USLParser::ID);
    setState(145);
    match(USLParser::T__1);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 671072256) != 0) || _la == USLParser::ID) {
      setState(146);
      atribute_constructor();
    }
    setState(150);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::REQUIRES) {
      setState(149);
      atrribute_requires();
    }
    setState(152);
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
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::STATIC) {
      setState(154);
      match(USLParser::STATIC);
    }
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::TYPE_QUALIFYERS) {
      setState(157);
      match(USLParser::TYPE_QUALIFYERS);
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::VIRTUAL) {
      setState(163);
      match(USLParser::VIRTUAL);
    }
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::VOID: {
        setState(166);
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
        setState(167);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(170);
    match(USLParser::ID);
    setState(171);
    match(USLParser::T__3);
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796764094464) != 0) || _la == USLParser::ID) {
      setState(172);
      parameterList();
    }
    setState(175);
    match(USLParser::T__4);
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::NOEXCEPT) {
      setState(176);
      noexcept_specifyer();
    }
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::OVERRIDE) {
      setState(179);
      match(USLParser::OVERRIDE);
    }
    setState(182);
    match(USLParser::T__1);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0)) {
      setState(183);
      statement();
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    match(USLParser::T__2);
   
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
  enterRule(_localctx, 18, USLParser::RuleEnum_declaration);
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
    setState(191);
    match(USLParser::ENUM);
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__5) {
      setState(192);
      match(USLParser::T__5);
      setState(193);
      integral_type();
    }
    setState(196);
    match(USLParser::T__1);
    setState(197);
    match(USLParser::ID);
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(198);
      match(USLParser::ASSIGN_OP);
      setState(199);
      match(USLParser::INT_LITTERAL);
    }
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(202);
      match(USLParser::T__6);
      setState(203);
      match(USLParser::ID);
      setState(206);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::ASSIGN_OP) {
        setState(204);
        match(USLParser::ASSIGN_OP);
        setState(205);
        match(USLParser::INT_LITTERAL);
      }
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
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

std::vector<USLParser::ExpressionContext *> USLParser::Var_declarationContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Var_declarationContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
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
  enterRule(_localctx, 20, USLParser::RuleVar_declaration);
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
    if (_la == USLParser::STATIC) {
      setState(215);
      match(USLParser::STATIC);
    }
    setState(219);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::TYPE_QUALIFYERS) {
      setState(218);
      match(USLParser::TYPE_QUALIFYERS);
    }
    setState(221);
    type();
    setState(222);
    match(USLParser::ID);
    setState(233);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__3: {
        setState(223);
        match(USLParser::T__3);
        setState(227);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == USLParser::T__3

        || _la == USLParser::CALL || ((((_la - 68) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 68)) & 653443) != 0)) {
          setState(224);
          expression();
          setState(229);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(230);
        match(USLParser::T__4);
        break;
      }

      case USLParser::ASSIGN_OP: {
        setState(231);
        match(USLParser::ASSIGN_OP);
        setState(232);
        expression();
        break;
      }

      case USLParser::EOF:
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
  enterRule(_localctx, 22, USLParser::RuleCustom_opperator_sym);
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
    setState(235);
    match(USLParser::CUSTOM_OP);
    setState(236);
    match(USLParser::T__3);
    setState(237);
    match(USLParser::CUSTOM_OP_SYMBOLS);
    setState(238);
    match(USLParser::T__4);
    setState(239);
    match(USLParser::T__3);
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8796764094464) != 0) || _la == USLParser::ID) {
      setState(240);
      parameterList();
    }
    setState(243);
    match(USLParser::T__4);
    setState(244);
    match(USLParser::T__1);
    setState(248);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4565173083815952) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0)) {
      setState(245);
      statement();
      setState(250);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(251);
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
  enterRule(_localctx, 24, USLParser::RuleNoexcept_specifyer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(USLParser::NOEXCEPT);
    setState(254);
    match(USLParser::T__3);
    setState(255);
    match(USLParser::BOOL_LITTERAL);
    setState(256);
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
  enterRule(_localctx, 26, USLParser::RuleAssignment_expr);
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
    setState(258);
    equality_expr();
    setState(261);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(259);
      match(USLParser::ASSIGN_OP);
      setState(260);
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
  enterRule(_localctx, 28, USLParser::RuleEquality_expr);
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
    setState(263);
    antlrcpp::downCast<Equality_exprContext *>(_localctx)->left = comparison_expr();
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(264);
        _la = _input->LA(1);
        if (!(_la == USLParser::EQUALS

        || _la == USLParser::NOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(265);
        comparison_expr(); 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
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
  enterRule(_localctx, 30, USLParser::RuleComparison_expr);
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
    antlrcpp::downCast<Comparison_exprContext *>(_localctx)->left = bitshift_expr();
    setState(276);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 73) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 73)) & 27) != 0)) {
      setState(272);
      _la = _input->LA(1);
      if (!(((((_la - 73) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 73)) & 27) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(273);
      bitshift_expr();
      setState(278);
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
  enterRule(_localctx, 32, USLParser::RuleBitshift_expr);
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
    antlrcpp::downCast<Bitshift_exprContext *>(_localctx)->left = additive_expr();
    setState(284);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::B_LEFT

    || _la == USLParser::B_RIGHT) {
      setState(280);
      _la = _input->LA(1);
      if (!(_la == USLParser::B_LEFT

      || _la == USLParser::B_RIGHT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(281);
      additive_expr();
      setState(286);
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
  enterRule(_localctx, 34, USLParser::RuleAdditive_expr);
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
    setState(287);
    antlrcpp::downCast<Additive_exprContext *>(_localctx)->left = multiplicative_expr();
    setState(292);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::PLUS_OP

    || _la == USLParser::MINUS_OP) {
      setState(288);
      _la = _input->LA(1);
      if (!(_la == USLParser::PLUS_OP

      || _la == USLParser::MINUS_OP)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(289);
      multiplicative_expr();
      setState(294);
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
  enterRule(_localctx, 36, USLParser::RuleMultiplicative_expr);
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
    setState(295);
    antlrcpp::downCast<Multiplicative_exprContext *>(_localctx)->left = unary_expr();
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 63) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 63)) & 7) != 0)) {
      setState(296);
      _la = _input->LA(1);
      if (!(((((_la - 63) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 63)) & 7) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(297);
      unary_expr();
      setState(302);
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
  enterRule(_localctx, 38, USLParser::RuleUnary_expr);
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
    setState(304);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 131) != 0)) {
      setState(303);
      _la = _input->LA(1);
      if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 68)) & 131) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(306);
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
  enterRule(_localctx, 40, USLParser::RulePrimary_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(315);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::CALL: {
        enterOuterAlt(_localctx, 1);
        setState(308);
        function_call();
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(309);
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
        setState(310);
        litteral();
        break;
      }

      case USLParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(311);
        match(USLParser::T__3);
        setState(312);
        expression();
        setState(313);
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
  enterRule(_localctx, 42, USLParser::RuleFunction_call);
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
    setState(317);
    match(USLParser::CALL);
    setState(318);
    id_with_scope();
    setState(319);
    match(USLParser::T__3);
    setState(321);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__3

    || _la == USLParser::CALL || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 653443) != 0)) {
      setState(320);
      function_call_parameters();
    }
    setState(323);
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
  enterRule(_localctx, 44, USLParser::RuleAtribute_constructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    type();
    setState(326);
    match(USLParser::T__3);
    setState(327);
    parameterList();
    setState(328);
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
  enterRule(_localctx, 46, USLParser::RuleAtrribute_requires);
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
    match(USLParser::REQUIRES);
    setState(331);
    match(USLParser::T__1);
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 671072256) != 0) || _la == USLParser::ID) {
      setState(334);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(332);
        implements_function();
        break;
      }

      case 2: {
        setState(333);
        implements_Var();
        break;
      }

      default:
        break;
      }
      setState(338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(339);
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
  enterRule(_localctx, 48, USLParser::RuleImplements_function);

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
    type();
    setState(342);
    match(USLParser::ID);
    setState(343);
    match(USLParser::T__3);
    setState(344);
    parameterList();
    setState(345);
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
  enterRule(_localctx, 50, USLParser::RuleImplements_Var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    type();
    setState(348);
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
  enterRule(_localctx, 52, USLParser::RulePrimitives);
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
  enterRule(_localctx, 54, USLParser::RuleIntegral_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::BYTE:
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG: {
        enterOuterAlt(_localctx, 1);
        setState(352);
        signed_inegral_type();
        break;
      }

      case USLParser::UBYTE:
      case USLParser::USHORT:
      case USLParser::UINT:
      case USLParser::ULONG: {
        enterOuterAlt(_localctx, 2);
        setState(353);
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
  enterRule(_localctx, 56, USLParser::RuleSigned_inegral_type);
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
    setState(356);
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
  enterRule(_localctx, 58, USLParser::RuleUnsigned_integral_type);
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
    setState(358);
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
  enterRule(_localctx, 60, USLParser::RuleLitteral);
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
    setState(360);
    _la = _input->LA(1);
    if (!(((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & 63) != 0))) {
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
  enterRule(_localctx, 62, USLParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
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
        setState(362);
        primitives();
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(364);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          setState(363);
          scope_ressolution();
          break;
        }

        default:
          break;
        }
        setState(366);
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
  enterRule(_localctx, 64, USLParser::RuleParameter);
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
    setState(372);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::TYPE_QUALIFYERS) {
      setState(369);
      match(USLParser::TYPE_QUALIFYERS);
      setState(374);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(375);
    type();
    setState(376);
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
  enterRule(_localctx, 66, USLParser::RuleParameterList);
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
    setState(378);
    parameter();
    setState(383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(379);
      match(USLParser::T__6);
      setState(380);
      parameter();
      setState(385);
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
  enterRule(_localctx, 68, USLParser::RuleClassmember_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(388);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(386);
      function_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(387);
      var_declaration();
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
  enterRule(_localctx, 70, USLParser::RuleOperator_symbols);
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
    setState(390);
    _la = _input->LA(1);
    if (!(((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & 1049599) != 0))) {
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
  enterRule(_localctx, 72, USLParser::RuleScope_ressolution);

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
    setState(392);
    match(USLParser::ID);
    setState(397);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(393);
        match(USLParser::SCOPE_RESSOLUTION_OP);
        setState(394);
        match(USLParser::ID); 
      }
      setState(399);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
    setState(400);
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
  enterRule(_localctx, 74, USLParser::RuleAtribute_parameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(404);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(402);
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
        setState(403);
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
  enterRule(_localctx, 76, USLParser::RuleAtribute_parameter_list);
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
    setState(406);
    atribute_parameter();
    setState(411);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(407);
      match(USLParser::T__6);
      setState(408);
      atribute_parameter();
      setState(413);
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
  enterRule(_localctx, 78, USLParser::RuleAtribute_decorators);
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
    setState(414);
    match(USLParser::T__7);
    setState(415);
    match(USLParser::ID);
    setState(420);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__3) {
      setState(416);
      match(USLParser::T__3);
      setState(417);
      atribute_parameter_list();
      setState(418);
      match(USLParser::T__4);
    }
    setState(430);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__6) {
      setState(422);
      match(USLParser::T__6);
      setState(423);
      match(USLParser::ID);
      setState(428);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::T__3) {
        setState(424);
        match(USLParser::T__3);
        setState(425);
        atribute_parameter_list();
        setState(426);
        match(USLParser::T__4);
      }
    }
    setState(432);
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
  enterRule(_localctx, 80, USLParser::RuleExtern_spec);

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
    match(USLParser::EXTERN);
    setState(435);
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
  enterRule(_localctx, 82, USLParser::RuleId_with_scope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      setState(437);
      scope_ressolution();
      break;
    }

    default:
      break;
    }
    setState(440);
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
  enterRule(_localctx, 84, USLParser::RuleFunction_call_parameters);
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
    expression();
    setState(447);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(443);
      match(USLParser::T__6);
      setState(444);
      expression();
      setState(449);
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

void USLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  uslParserInitialize();
#else
  ::antlr4::internal::call_once(uslParserOnceFlag, uslParserInitialize);
#endif
}
