section .data
    hello_message db 'Hello, Holberton', 0xA  ; Adding newline character (0xA)
    hello_length equ $ - hello_message         ; Calculate the length of the string

section .text
    global _start

_start:
    ; Write the message to stdout
    mov rax, 1             ; SYS_write system call number
    mov rdi, 1             ; File descriptor 1 is stdout
    mov rsi, hello_message ; Address of the message
    mov rdx, hello_length  ; Length of the message
    syscall

    ; Exit the program
    mov rax, 60            ; SYS_exit system call number
    xor rdi, rdi           ; Exit code 0
    syscall
