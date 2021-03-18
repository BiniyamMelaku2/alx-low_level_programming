section .data		; Data section, initialized variables
msg: db "Hello, Holberton", 10
msglen: equ $ - msg
section .text                 ; Code section.

global main		; the standard gcc entry point
main:			; the program label for the entry point
 mov rax, 1
 mov rdi, 1
 mov rsi, msg
 mov rdx, msglen
 syscall

 mov rax, 60
 mov rdi, 0			; return
 syscall
