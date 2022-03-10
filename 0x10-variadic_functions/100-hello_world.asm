;Filename: 100-hello_world.asm
;author: wael bessaies
;description: a 64-bit program in assembly that prints Hello, World.
section .data
message db "Hello, Holberton",10
section .text
global main
main:
mov rdi, 1
mov rsi, message
mov rax, 1
mov rdx, 17
syscall
