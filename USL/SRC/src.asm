section .text
    global JUMPTO        
    global TEST       
	global GENERIC_LIST_ADD
	global GENERIC_LIST_GET
	global GENERIC_LIST_REMOVE
    extern someCfunction 
	extern expand_Generic_List


JUMPTO:
    jmp rcx              
    ret


TEST:
    call someCfunction    
    ret   




;add to generic list
GENERIC_LIST_ADD:
		
	mov rax ,[rcx+12]				;move list length into rax
	mov rbx, [rcx+8]				;move capacity into rbx
	cmp rbx,rax						;compare lengt and capacity
	jle .skip_add					;jump if capacity is less or equalt to length 
	mov rdx, [rcx+16]					;move mem addres of first element in list into rdx
	mov [rdx+rax*8], rcx			;set rdx+rax*8(location of next location after list lengt)
	inc rax							;increment length
	mov [rcx+12], rax				;set length of list to new length
	ret								;return
.skip_add:
	mov rdi, rcx					;move pointer to list into rdi
	call expand_Generic_List		;call expand list funcion i c code
	ret								;return
	
	
;.;add_element:
;	mov rdx, [rcx+16]
;	mov [rdx+rax*8], rcx
;	inc rax
;	mov [rcx+12], rax
;	ret








GENERIC_LIST_GET:
	mov rax, [rcx+24]
	mov rbx, rcx
	mov rdx, $-1
.lookup_loop_get:
	inc rdx
	cmp rdx,rax
	jge .lookup_loop_get
	mov rdx, [rcx+8*rdx] 
	ret
	
	
	
GENERIC_LIST_REMOVE:	
	mov rax, [rcx+24*8]
	;mov rbx, rcx
	mov rdx,$-1
.lookup_loop_remove:
	inc rdx
	cmp rdx,rax
	jne .lookup_loop_remove
	mov rdx,[rcx+8*rdx]
	mov rdx, rdx
	mov rax,$0
	mov [rdx], rax
	mov rax,rdx
	mov rbx,$0
	jmp .loop_for_fix

.loop_for_fix:
	mov rbx,$0

	push rax
	mov rax,[rcx+12]
	cmp rax,rbx
	jl .r
	mov rbx, $-1
	pop rax
	push rbx
	ret
		
.r:	pop rax	
	push rdx
	mov rdx, rbx
	inc rdx
	mov rax, [rcx+8*rbx]
	push rbx
	mov rbx , [rcx+8*rdx]
	mov [rax], rbx
	pop rbx
	inc rbx
	jmp .loop_for_fix
	pop rdx
	

	
Push_Stack:
	push rax
	push rbx
	push rcx
	push rdx
	ret


Pop_Stack:
	pop rax
	pop rbx
	pop rcx
	pop rdx
	ret
	


	

