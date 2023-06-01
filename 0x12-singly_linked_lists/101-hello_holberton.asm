section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Push the format string address onto the stack
    push format
    ; Call the printf function
    call printf
    ; Clean up the stack after the function call
    add rsp, 8

    ; Exit the program
    mov eax, 0
    ret
