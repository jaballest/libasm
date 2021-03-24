section .text
    global ft_strlen

ft_strlen:
    mov rax, 0					;	rax = length, so we will initialize it to zero

loop:
    cmp byte [rdi + rax], 0		;	compare the byte to 0
    je end						;	if comparison = true
    inc rax						;	increment rax by 1
    jmp loop					;	jump to loop

end:
    ret							;	return rax
