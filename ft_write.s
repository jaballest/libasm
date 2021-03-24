section .text
    global ft_write
	extern __errno_location

ft_write:
    mov rax, 1		;	syscall of write is 1 so we move rax to 1
    syscall			;	request syscall to the kernel 
    cmp	rax, 0
	jl	error
	ret				;	return

error:
	push rax
	call __errno_location
	mov rdi, rax
	pop rax
	mov [rdi], rax
	mov rax, -1
	ret