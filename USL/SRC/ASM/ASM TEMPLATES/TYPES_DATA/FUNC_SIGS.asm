section .data
	DD Return_type	;type id. 32 bit unsigned
	DW Func_hash	;as 16 bit int unsigned
	DB Func_Name	; byt ptr to null terminated cleartext string
	DB Address 		;pointer to first byte of func addrs
	DW Modifyers 	; 16 bit modifyer tracker. ember static protection level	
	

section .text