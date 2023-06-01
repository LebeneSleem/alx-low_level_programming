section .data
    format db "Hello, Holberton\n", 0

section .text
    global main
    extern printf

main:
    ; Load the address of the format string into rdi
    mov rdi, format

    ; Call the printf function
    xor eax, eax  ; Set eax to 0 for printf
    call printf

    ; Exit the program
    xor edi, edi  ; Set the exit status to 0
    mov eax, 60   ; System call number for exit
    syscall

