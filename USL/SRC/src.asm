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
EXPAND_LIST:

GENERIC_LIST_ADD:
mov rax ,[rcx+12]
mov rbx, [rcx+8]
cmp rax,rbx
jl .add_element
mov rdi, rcx
call expand_Generic_List
ret
.add_element:
mov rdx, [rcx+16]
mov [rdx+rax*8], rcx
inc rax
mov [rcx+12], rax
ret


GENERIC_LIST_GET:
ret
GENERIC_LIST_REMOVE:
ret

