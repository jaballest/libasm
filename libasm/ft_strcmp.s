section .text
    global ft_strcmp

ft_strcmp:
    mov rax, 0

loop:
    mov bl, BYTE[rdi + rax]
    cmp bl, 0
    je  end
    cmp BYTE[rsi + rax], 0
    je  end
    cmp BYTE[rsi + rax], bl
    jne end
    inc rax
    jmp loop

end:
    sub bl, BYTE[rsi + rax]
    movsx rax, bl
    ret
