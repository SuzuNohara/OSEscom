segment .data
cadena db 'Programando en ensamblador para Linux', 0xA; Cadena a imprimir
; db -> 1 byte
; dw -> 2 bytes
; dd -> 4 bytes
; dq -> 8 bytes

segment .text   ;segmento de codigo
global _start   ;Punto de entrada al programa utilizando el enlazador id
_start:         ;Inicio del programa
    mov edx,38d ;longitud de la cadena
    ;EAX
    ;EBX
    ;ECX
    ;EDX
    ;Todos estos espacios de uso variable del procesador son de 32 bits, pero pueden ser divididos en 2 y 4 para tener almacenamientos mas pequenos
    ;cuando dividimos un espacio este se nombra AH, AL para 8 bits y AX para 16 bits
    
    mov ecx,cadena  ;Cadena a escribir
    mov ebx,1   ;Salida estandar
    mov eax,4   ;Numero de llamada al sistema "sys_write"
    int 0x80    ;Interrupcion de llamadas al sistema del kernel de linux
    mov eax,1   ;Numero de llamada al sistema "sys_exit"
    int 0x80    ;Interrupcion de llamadas al sistema del kernel de Linux