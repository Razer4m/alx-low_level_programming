section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    ; Arguments for printf:
    lea rdi, [hello]  ; First argument - pointer to the format string
    call printf       ; Call the printf function

    ; Exit the program
    xor rdi, rdi      ; Return 0
    call exit         ; Call the exit function to terminate the program

section .bss
    ; Placeholder for the exit function
    ; This is not strictly necessary if you're linking with the C library
    ; since the exit function is provided by the C runtime.
    resb 4
