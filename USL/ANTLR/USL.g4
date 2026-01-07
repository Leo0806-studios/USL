grammar USL;

//Lexer
//Keywords
 //
//scopes
NAMESPACE                           :'namespace';
CLASS                               :'class';
STRUCT                              :'struct';
ENUM                                :'enum';
ATRIBUTE                            :'atribute';

//inbuild types
BYTE                                :'byte';       //unsigned 8bit datatype
SHORT                               :'short';      //signed 16 bit integral datatype
INT                                 :'int';         //signed 32 bit datatype
LONG                                :'long';        //signed 64 bit datatype
FLOAT                               :'float';
DOUBLE                              :'double';
LONGDOUBLE                          :'w_double';
HASH                                :'hash';
STRING                              :'string';
CHAR                                :'char';
VOID                                :'void';
NULLPTR_T                           :'nullptr_t';
BOOL                                :'bool';
M128                                :'m128';
M128I                               :'m128i';
M128D                               :'m128d';
M256                                :'m256';
M256I                               :'m256i';
M256D                               :'m256d';
M512                                :'m512';
M512I                               :'m512i';
M512D                               :'m512d';
//litteral keywprds
NULL                                :'null';
NULLPTR                             :'nullptr';
BOOL_LITTERAL_TRUE                  : 'true'  ;
BOOL_LITTERAL_FALSE                 :  'false' ;

//templates
TEMPLATE                            :'template';
//controll flow
IF                                  :'if';
ELSE                                :'else';
WHILE                               :'while';
DO                                  :'do';
SWITCH                              :'switch';
CASE                                :'case';
GOTO                                :'goto';
BREAK                               :'break';
DEFAULT                             :'default';
LABLE                               :'lable';
FOR                                 :'for';
//concurency
ASYNC                               :'async';
SYNC                                :'sync';
//acces modifyers
PUBLIC                              :'public';
PRIVATE                             :'private';
PROTECTED                           :'protected';
//intrinsics
INTERNAL                            :'__internal';
ASSUME                              :'__assume';
NORVO                               :'__norvo';
UNROLL                              :'__unroll';
INTRINSIC                           :'__intrinsic';
OVERLAPSWITH                        :'__overlapswith';
JUMPTABLE                           :'__jumptable';
VECTORIZE                           :'__vectorize';
//opperators
OPPERATOR                           :'operator';

//misc
STACK_ALLOC                         :'stack_alloc';
UNSAFE                              :'unsafe';

//casts
REINTERPRET_CAST                    :'reinterpret_cast';
STATIC_CAST                         :'static_cast';
UNSAFE_CAST                         :'unsafe_cast';
CONST_CAST                          :'const_cast';

//exceptions
THROW                               :'throw';
THROWS                              :'throws';
MAYBE                               :'maybe';
//controll flow
RETURN                              :'return';
CALL                                :'call';

//varialbe decorators
STATIC                              :'static';
UNSIGNED                            :'unsigned';
VOLATILE                            :'volatile';
CONST                               :'const';

//polymorphism
VIRTUAL                             :'virtual';
OVERRIDE                            :'override';

//auto type deduction
AUTO                                :'auto';

REQUIRES                            :'requires';
EXTERN                              :'extern';

//allocation
NEW                                 :'new';
DELETE                              :'delete';





//operators unary
ASSIGN_OP                           :'=';
PLUS_OP                             :'+';
MINUS_OP                            :'-';
MULT_OP                             :'*';
DIV_OP                              :'/';
MOD_OP                              :'%';
HASH_OP                             :'#';
INCREMENT                           :'++';
DECREMENT                           :'--';

//vector operators
FMA_OP                              :'*+';
//dereff
DEREF                               :'->';
//member acces opperator
MEMBER_ACCES                        :'.';
//operators Binary
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
        
        
COMMENT                             : '//' ~[\r\n]* -> skip ;
WS                                  : [ \t\r\n]+ -> skip ;


ID                                  : [a-zA-Z_][a-zA-Z0-9_]* ;

//Global Rules

//this represents a translation unit of the compiler
program                             :global_statement+ EOF;
//global statemnts are used to cleanly seperate what can be inside and outside of namespaces and classes
global_statement                    :namespace_declaration|
                                    class_declaration|
                                    enum_declaration|
                                    attribute_declaration;


//
statement                           :variable_declaration';'|
                                    function_declaration|
                                    goto_statement';'|
                                    lable_statement';'|
                                    while_statement|
                                    if_statement|
                                    for_statement|
                                    switch_statement|
                                    expression_statement';'|
                                    error_recovery;

//scope Statements (excluding controll flow)
namespace_declaration               :NAMESPACE NamespaceName =ID '{'global_statement* '}';  
class_declaration                   :attribute_addition? (CLASS|STRUCT)TypeName= ID (':' PUBLIC? quailified_name )? basic_block ';';
enum_declaration                    :attribute_addition? ENUM EnumName= ID (':'EnumType= primitive)? '{'ID (ASSIGN_OP litteral)? (',' ID (ASSIGN_OP litteral)? )* (',')? '}' ';';
attribute_declaration               :ATRIBUTE AttributeName=ID '{''}';
function_declaration                :attribute_addition? acces_modifiers ReturnType=cvu_type FunctionName=ID '('paremeter_list? ')'CONST? throws_postfix? basic_block;
basic_block                         :'{'statement*'}';

variable_declaration                :acces_modifiers? Type = cvu_type name = ID (ASSIGN_OP expression)?;

//controll_flow
if_statement                        :IF '('expression')' basic_block else_statement?; 
else_statement                      :ELSE (if_statement|basic_block);


while_statement                     :WHILE '(' expression')' basic_block ;
do_statement                        :DO basic_block;

for_statement                       :FOR '('expression';'expression';'expression')'basic_block;

switch_statement                    :SWITCH '('expression')' '{' case_statement*'}';
case_statement                      :CASE expression  ':' basic_block;

goto_statement                      :GOTO ID;
lable_statement                     :LABLE ID;
throw_statement                     :THROW expression;

expression_statement                :expression;


//expressions
expression                          :assignment_expr;
assignment_expr                     : left =equality_expr (ASSIGN_OP assignment_expr)? ;

equality_expr                       : left=comparison_expr ((EQUALS ) comparison_expr)* ;

comparison_expr                     : left=bitshift_expr ( comparision_operator bitshift_expr)* ;

bitshift_expr                       : left=additive_expr (bitshift_operator additive_expr)* ;

additive_expr                       : left=multiplicative_expr (additive_operator multiplicative_expr)* ;

multiplicative_expr                 : left=postfix_expr (multiplicative_operator postfix_expr)* ;
postfix_expr                        :prefix_expr postfix_operator*;
prefix_expr                         :prefix_operator prefix_expr
                                    | primary_expr;


primary_expr                        :  quailified_name
                                    | litteral
                                    | '(' expression ')';


//helper rules
acces_modifiers                     :PUBLIC|PRIVATE|PROTECTED;
throws_postfix                      :THROWS'('(quailified_name(','quailified_name)*)|MAYBE ')';
quailified_name                     :scoperesolution_list? ID;
//attribute helpers
attribute_addition                  :'[['attribute (',' attribute)*   ']]';
attribute                           :quailified_name ('('expression(','expression)*')')?;
//operator helpers
comparision_operator                :LESS | LARGER | LESS_EQ | LARGER_EQ;
bitshift_operator                   :B_LEFT|B_RIGHT;
additive_operator                   :PLUS_OP|MINUS_OP;
multiplicative_operator             :MULT_OP | DIV_OP | MOD_OP;
prefix_operator                      :INCREMENT | DECREMENT | NOT|HASH_OP;
postfix_operator                    :call_operator|index_operator|INCREMENT|DECREMENT;
call_operator                       :'('expression (',' expression)*')';

index_operator                      :'['expression(','expression)* ']';

//type helpers
cvu_type                            : cvu_decorators type IsArray = array_type? IsPointer= pointer_type?;
pointer_type                        :'*' cvu_decorators;
array_type                          :'[' expression(',' expression)?']';
type                                :(quailified_name) |AUTO|primitive;
primitive                           :integral_type|floating_type|vector_type|STRING|HASH|CHAR|BYTE|BOOL|NULLPTR_T|VOID;
integral_type                       :UNSIGNED? SHORT|INT|LONG;
floating_type                       :FLOAT|DOUBLE|LONGDOUBLE;
vector_type                         :M128|M128D|M128I|M256|M256D|M256I|M512|M512D|M512I;
//function Signature Helpers
paremeter_list                      :parameter (','parameter)*;
parameter                           :Type=cvu_type ParameterName=ID;

//litteral helpers
litteral                            :INT_LITTERAL|FLOAT_LITTERAL|STRING_LITTERAL|CHAR_LITTERAL|bool_litteral;
bool_litteral                       :BOOL_LITTERAL_TRUE|BOOL_LITTERAL_FALSE;

cvu_decorators                      :(consts =CONST|volatiles=VOLATILE|unsafes =UNSAFE)*;


//scope resolution list. contains the last resolution op
scoperesolution_list                :ID (SCOPE_RESSOLUTION_OP ID)* SCOPE_RESSOLUTION_OP;



//intrinsic rules


//error recovery
error_recovery                      :.+?';';