section .data
    format db "Hello, Holberton", 10 ; 10 represents the newline character (\n)

section .text
    global main
    extern printf

main:
    ; Load the format string address into the first argument register (rdi)
    mov rdi, format

    ; Call the printf function
    call printf

    ; Exit the program
    mov eax, 0
    ret
