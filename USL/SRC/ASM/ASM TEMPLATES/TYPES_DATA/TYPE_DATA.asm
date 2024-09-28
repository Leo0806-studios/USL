section .data
		DB Type_Name 'type name'
		
		DD var_One_Offsett
		DD var_Two_Offsett
		; other non static var offsets
		
		
		DD static_Var_One_Address
		DD static_Var_Two_Address
		;other static var adresses
		
		;addresses of both static and nonstatic functions
section .text
global Get_Length
global Get_Properties
global Get_Functions
global Get_Name
global Get_Vars

extern Method_one
extern Method_Two
; other methodnames


;implementation of methods to proide reflection

Get_Name:
	mov eax, Type_Name
	ret
	
Get_Functions:
ret
Get_Vars:
	
