
    global main
    extern printf


    section .text

main:
    mov rax, 0
    mov rdi, format
    call printf
    mov rax, 0
    ret
format:
	db "Hello, Holberton", 10, 0
