section .data
	DQ VAR 		;pointer to var
	DQ GETTER  	;pointter to getter
	DQ SETTER	;pointer to setter
	
section .text

global Set
global Get


Set:
	;content. depents on compiled code
	ret

Get:
	;contetnt. depends on compiled code
	
	ret