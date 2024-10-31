section .data
	DQ THREADS		;pointer to array of active threads
	DQ THREAD_COUNT	; length of array
section .bss
	DQ MAX_THREADS 9223372036854775807 ;qword max
section .text

global Get_Thread_Count
global Get_Max__Treads

Get_Thread_Count:
	mov eax, THREAD_COUNT
	ret

Get_Max__Treads:
	mov eax, MAX_THREADS
	ret
	