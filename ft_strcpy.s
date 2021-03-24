section .text
	global ft_strcpy

ft_strcpy:
	cmp		rsi, 0
	je		error
	mov		rax, 0

loop:
	mov bl, BYTE[rsi + rax]
	mov BYTE[rdi + rax], bl
	cmp bl, 0
	je	end
	inc rax
	jmp loop

end:
	mov rax, rdi
	ret

error:
	mov rax, 0
	ret