section .data
    hello db "Hello, Holberton",10,0  ; The string to be printed (including newline)
    format db "%s",0                ; Format specifier for printf

section .text
    global main

    extern printf

main:
    push rdi                        ; Preserve rdi register
    mov rdi, format                 ; Load the format specifier address
    mov rax, 0                      ; Clear rax to indicate no floating-point arguments
    lea rsi, [hello]                ; Load the address of the hello string
    call printf                    ; Call printf function
    pop rdi                         ; Restore rdi register
    ret                            ; Return to the C runtime

section .bss
