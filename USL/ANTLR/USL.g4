grammar USL;

//Lexer
//Keywords
NAMESPACE                           :'namespace';
CLASS                               :'class';
ENUM                                :'enum';
ATRIBUTE                            :'atribute';
BYTE                                :'byte';
UBYTE                               :'ubyte';
SHORT                               :'short';
USHORT                              :'ushort';
INT                                 :'int';
UINT                                :'uint';
LONG                                :'long';
ULONG                               :'ulong';
FLOAT                               :'float';
DOUBLE                              :'double';
HASH                                :'hash';
STRING                              :'string';
CHAR                                :'char';
VOID                                :'void';
NULL                                :'null';
BOOL                                :'bool';
TEMPLATE                            :'template';
ASYNC                               :'async';
SYNC                                :'sync';
INTERNAL                            :'__internal';
OPPERATOR                           :'operator';
UNSAFE                              :'unsafe';
STACK_ALLOC                         :'stack_alloc';
REINTERPRET_CAST                    :'reinterpret_cast';
STATIC_CAST                         :'static_cast';
UNSAFE_CAST                         :'unsafe_cast';
CUSTOM_OP                           :'def_operator';
CUSTOM_KEYWORD                      :'def_keyword';
CUSTOM_CONTROL                      :'def_flow';
TYPE_QUALIFYERS                     :'volatile'|'const';
STATIC                              :'static';
VIRTUAL                             :'virtual';
NOEXCEPT                            :'noexcept';
OVERRIDE                            :'override';
NULLPTR                             :'nullptr';
RETURN                              :'return';
REQUIRES                            :'requires';
AUTO                                :'auto';
CALL                                :'call';
EXTERN                              :'extern';
DECLSPEC                            :'__declspec';
DLLEXPORT                           :'dllexport';
DLLIMPORT                           :'dllimport';
NEW                                 :'new';
UNSAFE_NEW                          :'unsafe_new';
UNSAFE_DELETE                       :'unsafe_delete';
INTRINSIC                           :'__intrinsic';
NORVO                               :'__norvo';
OVERLAPSWITH                        :'__overlapswith';
JUMPTABLE                           :'__jumptable';
UNROLL                              :'__unroll';
VECTORIZE                           :'__vectorize';
TEST                                :'__test';
//operators unary
ASSIGN_OP                           :'=';
PLUS_OP                             :'+';
MINUS_OP                            :'-';
MULT_OP                             :'*';
DIV_OP                              :'/';
MOD_OP                              :'%';
HASH_OP                             :'#';

//dereff
DEREF                               :'->';

//operators Binary
INCREMENT                           :'++';
DECREMENT                           :'--';
//operators Bit
B_LEFT                              :'<<';
B_RIGHT                             :'>>';

//operator booean
EQUALS                              :'==';
LESS                                :'<';
LARGER                              :'>';
NOT                                 :'!';
LESS_EQ                             :'<='|'=<';
LARGER_EQ                           :'>='|'=>';

SCOPE_RESSOLUTION_OP                :'::';
//litterals

INT_LITTERAL                        :'-'? [0-9]+ ;
UINT_LITTERAL                       :[0-9]+;
FLOAT_LITTERAL                      : [0-9]+('.'[0-9]*)? ;
CHAR_LITTERAL                       : '\''[A-Za-z0-9-.,_:;\\]'\'';
STRING_LITTERAL                     : '"' (~["\\] | '\\' .)* '"' ;
BOOL_LITTERAL                       : 'true' | 'false' ;
        
        
COMMENT                             : '//' ~[\r\n]* -> skip ;
WS                                  : [ \t\r\n]+ -> skip ;


ID                                  : [a-zA-Z_][a-zA-Z0-9_]* ;
CUSTOM_OP_SYMBOLS                   :[~^?$§@€];
//Global Rules
program                             :global_statement+ EOF;
global_statement                    :   class_delcaration|
                                        namespace_declaration|
                                        enum_declaration|
                                        atribute_declaration|
                                        intrinsic_function_pre_declaration ';'|
                                        extern_function_pre_declaration ';'
                                        ;
statement                           :(var_declaration|function_declaration|
                                    expression)';';


expression                          :assignment_expr;


basic_block                         :'{' statement* '}';

//statements
class_delcaration                   :atribute_decorators? CLASS ID '{'classmember_declaration*'}';

namespace_declaration               :NAMESPACE ID '{'global_statement*'}';
atribute_declaration                :ATRIBUTE ID '{'atribute_constructor? atrribute_requires?'}';

function_declaration                :STATIC? TYPE_QUALIFYERS* VIRTUAL? (VOID|type) ID'('parameterList?')' noexcept_specifyer? OVERRIDE? '{'statement*'}' ;
intrinsic_function_pre_declaration  :INTRINSIC TYPE_QUALIFYERS? (VOID|type) ID '('parameterList?')'noexcept_specifyer?;
extern_function_pre_declaration     : extern_spec TYPE_QUALIFYERS? (VOID|type) ID '('parameterList?')' noexcept_specifyer?;
exter_function_declaratio           : extern_spec function_declaration;
unit_test_declaration               :test function_declaration;

enum_declaration                    :ENUM (':' integral_type)?'{' ID ('=' INT_LITTERAL)? (','ID ('='INT_LITTERAL)?)*'}';

var_declaration                     :STATIC? TYPE_QUALIFYERS? type ID(('('construct=expression')')|(ASSIGN_OP construct_assign=expression))?;

custom_opperator_sym                : CUSTOM_OP '('CUSTOM_OP_SYMBOLS')' '('parameterList?')''{'statement*'}';

noexcept_specifyer                  :NOEXCEPT '('BOOL_LITTERAL')';
//expressions
assignment_expr                     : left =equality_expr (ASSIGN_OP assignment_expr)? ;

equality_expr                       : left=comparison_expr ((EQUALS | NOT) comparison_expr)* ;

comparison_expr                     : left=bitshift_expr ((LESS | LARGER | LESS_EQ | LARGER_EQ) bitshift_expr)* ;

bitshift_expr                       : left=additive_expr ((B_LEFT | B_RIGHT) additive_expr)* ;

additive_expr                       : left=multiplicative_expr ((PLUS_OP | MINUS_OP) multiplicative_expr)* ;

multiplicative_expr                 : left=unary_expr ((MULT_OP | DIV_OP | MOD_OP) unary_expr)* ;

unary_expr                          : (INCREMENT | DECREMENT | NOT)? primary_expr ;

primary_expr                        : function_call
                                    | id_with_scope
                                    | litteral
                                    | '(' expression ')';

function_call                       :CALL id_with_scope'('(function_call_parameters)?')';






//rules for attribute declarations
atribute_constructor                :type '('parameterList')';
atrribute_requires                  :REQUIRES '{'(implements_function|implements_Var)*'}';
implements_function                 :(type ID'('parameterList')');
implements_Var                      :type ID;

//helper rules
primitives                          :BOOL|BYTE|UBYTE|SHORT|USHORT|INT|UINT|LONG|ULONG|FLOAT|DOUBLE|HASH|STRING|CHAR;
integral_type                       :signed_inegral_type|unsigned_integral_type;
signed_inegral_type                 :(BYTE|SHORT|INT|LONG);
unsigned_integral_type              :UBYTE|USHORT|UINT|ULONG;
litteral                            :STRING_LITTERAL|INT_LITTERAL|UINT_LITTERAL|FLOAT_LITTERAL|CHAR_LITTERAL|BOOL_LITTERAL ;
type                                :primitives|((scope_ressolution?ID)|magledName=decorated_name);
parameter                           :TYPE_QUALIFYERS* type ID;
parameterList                       :parameter(','parameter)*; 
classmember_declaration             :(function_declaration|var_declaration)';';
operator_symbols                    :CUSTOM_OP_SYMBOLS|EQUALS|LESS|LARGER|NOT|LESS_EQ|LARGER_EQ|B_LEFT|B_RIGHT|INCREMENT|DECREMENT;
scope_ressolution                   :ID (SCOPE_RESSOLUTION_OP ID)* SCOPE_RESSOLUTION_OP ;
atribute_parameter                  :ID|litteral;
atribute_parameter_list             :atribute_parameter (','atribute_parameter)*;
atribute_decorators                 :'['ID ('('atribute_parameter_list')')? (','ID ('('atribute_parameter_list')')?)?']';
extern_spec                         :EXTERN STRING_LITTERAL;
id_with_scope                       :scope_ressolution? ID;
function_call_parameters            :expression(','expression)*;
test                                :TEST ('('name=STRING_LITTERAL ',' fuzzing=BOOL_LITTERAL','repeat_count=INT_LITTERAL ')');

//semantic helper rules
//these rule are not included anywhere and are just to be able to inject semantic information safely
decorated_name                      :'®';//use normaly untypable symbol to make rul not match empty string 
