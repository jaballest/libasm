section .text
	global ft_strdup
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
	cmp		rdi, 0
	je		end
	call	ft_strlen
	push	rdi
	mov		rdi, rax
	inc		rdi
	call	malloc
	mov		rdi, rax
	pop		rsi
	call	ft_strcpy
	mov		rax, rdi

end:
	ret