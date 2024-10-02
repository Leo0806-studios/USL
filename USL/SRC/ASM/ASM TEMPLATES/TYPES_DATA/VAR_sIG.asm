section .data
	DD Var_Type		;var type. 32 bit
	DQ Var_Adress 	;pointer to Addres, if non static member this contains the offset
	DW Var_Hash    	;var hash
	DB Var_Name		;pointer to first byte of Var name
	DW Modifyers 	;modyfiers. protectionlevel , member,srtatic
	
section .text