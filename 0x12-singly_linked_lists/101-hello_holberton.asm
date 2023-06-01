section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    mov edi, format   ; Load the address of the format string into edi
    xor eax, eax      ; Set eax to 0 for printf
    call printf
    mov eax, 0        ; Set the return value of main to 0
    ret               ; Return from main

