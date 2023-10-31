
## Sección Windows
Punto numero 3 de la practica.
Se crea el archivo obj
Se crea el ejecutable
[![archivo.png](https://i.postimg.cc/Kjs1M5d3/archivo.png)](https://postimg.cc/p5zVNKVP)
## Problema 9
[![problema9.png](https://i.postimg.cc/fWFWYkVd/problema9.png)](https://postimg.cc/yWmzH1X6)
````nasm
segment .data
  cont db '0'; se reserva un byte de enters
  enters db 0xA
segment .bss
  handleConsola resd 1
  longitudCadena resd 1
  caractEscritos resd 1
  ultimoArgumento resd 1
segment .text
global _start
extern _GetStdHandle@4;
extern _WriteConsoleA@20;
extern _ExitProcess@4;
_start:

  jmp loopi

loopi:
  cmp byte [cont], ':'
  jne incr
  je fin
fin:
    xor eax,eax;
    mov eax,0d;
    mov [ultimoArgumento],eax;
    push dword [ultimoArgumento];
    call _ExitProcess@4;
incr:
  ;imprime incremento
  push dword-11
          call _GetStdHandle@4;
          mov [handleConsola],eax;
          xor eax,eax;
          mov eax,2d;
          mov [longitudCadena],eax;
          xor eax,eax;
          mov eax,0d;
          mov [ultimoArgumento],eax;
          push dword [ultimoArgumento];
          push dword caractEscritos;
          push dword [longitudCadena];
          push dword cont;
          push dword [handleConsola];
          call _WriteConsoleA@20;
  ;imprime enter
  inc byte [cont]
  jmp _start
````


## Problema 10
[![problema10.png](https://i.postimg.cc/DyP2H6Cr/problema10.png)](https://postimg.cc/cr6y8RGC)
````nasm

segment .data
  l1 dd 1
  l2 dd 1
  l3 dd 1
  l4 dd 1
  l5 dd 1
  l6 dd 1
  salto db 0xa
section .bss
handleConsola resd 1
caractEscritos resd 1
longitudCadena resd 1
ultimoArgumento resd 1
  s1 resb 50
  s2 resb 50
  s3 resb 50
  s4 resb 50
  s5 resb 50
  d resb 150


segment .text
global _start
extern _GetStdHandle@4
extern _ReadConsoleA@20
extern _WriteConsoleA@20
extern _ExitProcess@4

_start: push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,50d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword [longitudCadena]
        push dword s1
        push dword [handleConsola]
        call _ReadConsoleA@20

        push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,50d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword [longitudCadena]
        push dword s2
        push dword [handleConsola]
        call _ReadConsoleA@20

        push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,50d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword [longitudCadena]
        push dword s3
        push dword [handleConsola]
        call _ReadConsoleA@20

        push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,50d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword [longitudCadena]
        push dword s4
        push dword [handleConsola]
        call _ReadConsoleA@20

        push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,50d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword [longitudCadena]
        push dword s5
        push dword [handleConsola]
        call _ReadConsoleA@20

  mov edi,s1
  call _strlen
  mov [l1],eax
  mov [l6],eax
  mov edi,s2
  call _strlen
  mov [l2],eax
  add [l6],eax
  mov edi,s3
  call _strlen
  mov [l3],eax
  add [l6],eax
    mov edi,s4
  call _strlen
  mov [l4],eax
  add [l6],eax
    mov edi,s5
  call _strlen
  mov [l5],eax
  add [l6],eax
  mov eax,0
  xor edi,edi
  mov edi,d
  jmp cop1

modu:
  add eax,1
  cmp eax,[l6]
  jle cop1
  jmp final

cop1:
  cmp eax,[l1]
  jge cop2

  mov esi,s1
  add esi,eax
  mov ecx, 1
  rep movsb

cop2:
  cmp eax,[l2]
  jge cop3

  mov esi,s2
  add esi,eax
  mov ecx, 1
  rep movsb

cop3:
  cmp eax,[l3]
  jge modu

  mov esi,s3
  add esi,eax
  mov ecx, 1
  rep movsb

cop4:
  cmp eax,[l4]
  jge modu

  mov esi,s4
  add esi,eax
  mov ecx, 1
  rep movsb

cop5:
  cmp eax,[l5]
  jge modu

  mov esi,s5
  add esi,eax
  mov ecx, 1
  rep movsb



  jmp modu

final:
push dword-11
        call _GetStdHandle@4;
        mov [handleConsola],eax;
        xor eax,eax;
        mov eax,0d;
        mov [ultimoArgumento],eax;
        push dword [ultimoArgumento];
        push dword caractEscritos;
        push dword [l6];
        push dword d;
        push dword [handleConsola];
        call _WriteConsoleA@20;

push dword-11
        call _GetStdHandle@4;
        mov [handleConsola],eax;
        xor eax,eax;
        mov eax,0d;
        mov [ultimoArgumento],eax;
        push dword [ultimoArgumento];
        push dword caractEscritos;
        push dword [l6];
        push dword d;
        push dword [handleConsola];
        call _WriteConsoleA@20;

  xor eax,eax;
  mov eax,0d;
  mov [ultimoArgumento],eax;
  push dword [ultimoArgumento];
  call _ExitProcess@4;

;-----------------------

_strlen:
  mov   ebx, edi            ; rbx = rdi
  xor   al, al              ; limpiar al
  mov   ecx, 0xffffffff     ; maximo numero de bytes
  repne scasb               ; while [rdi] != al, sigue escaneando
  sub   edi, ebx            ; longitud = dist2 - dist1
  sub   edi,2
  mov   eax, edi            ; eax guarda la longitud
  ret                       ; volver
````

## Problema 11
[![problema11.png](https://i.postimg.cc/tgK3w9Tm/problema11.png)](https://postimg.cc/hJ0Q7WV9)
````nasm
segment .data

section .bss
  caract resd 1
  handleConsola resd 1
  caractEscritos resd 1
  longitudCadena resd 1
  ultimoArgumento resd 1
  s1 resd 100
  espDigito resd 100
  posDigito resd 8


segment .text
global _start
extern _GetStdHandle@4
extern _ReadConsoleA@20
extern _WriteConsoleA@20
extern _ExitProcess@4

_start:
push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,100d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword [longitudCadena]
        push dword s1
        push dword [handleConsola]
        call _ReadConsoleA@20

    mov edi,s1

    call len
    ;mov eax,126
    sub eax,2




    call imprimir
;_ExitProcess
    xor eax,eax;
    mov eax,0d;
    mov [ultimoArgumento],eax;
    push dword [ultimoArgumento];
    call _ExitProcess@4;


imprimir:
    mov ecx, espDigito
    mov ebx, 10
    mov [ecx], ebx
    inc ecx
    mov [posDigito], ecx

 bucle:
    mov edx, 0
    mov ebx, 10
    div ebx
    ;push eax
    add edx, 48

    mov ecx, [posDigito]
    mov [ecx], dl
    inc ecx
    mov [posDigito], ecx

    ;pop eax
    cmp eax, 0
    jne bucle

bucle2:
    mov ecx, [posDigito]
;_WriteConsoleA
;    mov eax, 1
;    mov edi, 1
;    mov rsi, ecx
;    mov edx, 1

        ;mov dword [caract],
        push dword-11
        xor eax,eax;
        call _GetStdHandle@4;
        mov [handleConsola],eax;
        xor eax,eax;
        mov eax,0d;
        mov [ultimoArgumento],eax;
        push dword [ultimoArgumento];
        push dword caractEscritos;
        push dword 1;
        push dword ecx
        push dword [handleConsola];
        call _WriteConsoleA@20;


    mov ecx, [posDigito]
    dec ecx
    mov [posDigito], ecx

    cmp ecx, espDigito
    jge bucle2
    ret

len:
  xor   ecx, ecx ;limpiar
  ;mov eax, '*'
siguiente:
  cmp   [edi],byte 0   ;fin de cadena
  je    salir
  inc   ecx
  inc   edi
  jmp   siguiente
salir:

  mov   eax, ecx      ; guardar en eax
  ret                  ; salir
````
## Problema 12
````nasm
segment .data
  salto db 0xa
  d db '                                                                                       '
section .bss
caract resd 1
handleConsola resd 1
caractEscritos resd 1
longitudCadena resd 1
ultimoArgumento resd 1
  laux resb 1
  l4 resb 1
  s1 resb 50
  dr resb 500
  espDigito resb 100
  posDigito resb 8
  aux resb 500


segment .text
global _start
extern _GetStdHandle@4
extern _ReadConsoleA@20
extern _WriteConsoleA@20
extern _ExitProcess@4
_start:
  mov edi,d

  push dword -10
          call _GetStdHandle@4
          mov [handleConsola],eax
          xor eax,eax
          mov eax,50
          mov[longitudCadena],eax
          xor eax,eax
          mov eax,0d
          mov [ultimoArgumento],eax
          push dword [ultimoArgumento]
          push dword caractEscritos
          push dword [longitudCadena]
          push dword s1
          push dword [handleConsola]
          call _ReadConsoleA@20

  mov esi,s1
  call buscarfin

  times 2 call guardar

  mov edi,d

  call len
  ;add eax,1
  ;add eax,2
  mov [l4],eax
  mov [laux],eax
  push laux

  call imprimir

  push dword-11
  xor eax,eax;
  call _GetStdHandle@4;
  mov [handleConsola],eax;
  xor eax,eax;
  mov eax,0d;
  mov [ultimoArgumento],eax;
  push dword [ultimoArgumento];
  push dword caractEscritos;
  push dword 30;
  push dword d
  push dword [handleConsola];
  call _WriteConsoleA@20;

  push dword-11
  xor eax,eax;
  call _GetStdHandle@4;
  mov [handleConsola],eax;
  xor eax,eax;
  mov eax,0d;
  mov [ultimoArgumento],eax;
  push dword [ultimoArgumento];
  push dword caractEscritos;
  push dword 1;
  push dword salto
  push dword [handleConsola];
  call _WriteConsoleA@20;

  ;mov eax,l4
  call inverso


  push dword-11
  xor eax,eax;
  call _GetStdHandle@4;
  mov [handleConsola],eax;
  xor eax,eax;
  mov eax,0d;
  mov [ultimoArgumento],eax;
  push dword [ultimoArgumento];
  push dword caractEscritos;
  push dword 30;
  push dword dr
  push dword [handleConsola];
  call _WriteConsoleA@20;

  push dword-11
  xor eax,eax;
  call _GetStdHandle@4;
  mov [handleConsola],eax;
  xor eax,eax;
  mov eax,0d;
  mov [ultimoArgumento],eax;
  push dword [ultimoArgumento];
  push dword caractEscritos;
  push dword 1;
  push dword salto
  push dword [handleConsola];
  call _WriteConsoleA@20;


  xor eax,eax;
  mov eax,0d;
  mov [ultimoArgumento],eax;
  push dword [ultimoArgumento];
  call _ExitProcess@4;

guardar:
push dword -10
        call _GetStdHandle@4
        mov [handleConsola],eax
        xor eax,eax
        mov eax,50d
        mov[longitudCadena],eax
        xor eax,eax
        mov eax,0d
        mov [ultimoArgumento],eax
        push dword [ultimoArgumento]
        push dword caractEscritos
        push dword 50
        push dword s1
        push dword [handleConsola]
        call _ReadConsoleA@20
  mov esi,s1
  inc edi
  ;dec edi
  ;dec edi
buscarfin:

  cmp   [esi], byte '*'  ;fin de cadena
  jz    fin
  ;inc   esi
  mov ecx, 1
  rep movsb
  ;inc edi
  jmp   buscarfin
len:
  xor   ecx, ecx ;limpiar
siguiente:
  cmp   [edi], byte ' '  ;fin de cadena
  jz    salir
  inc   ecx
  inc   edi
  jmp   siguiente
salir:
  mov   eax, ecx      ; guardar en eax
  ret                  ; salir
  imprimir:
      mov ecx, espDigito
      mov ebx, 10
      mov [ecx], ebx
      inc ecx
      mov [posDigito], ecx

    bucle:
       mov edx, 0
       mov ebx, 10
       div ebx
       ;push eax
       add edx, 48

       mov ecx, [posDigito]
       mov [ecx], dl
       inc ecx
       mov [posDigito], ecx

       ;pop eax
       cmp eax, 0
       jne bucle

    bucle2:
       mov ecx, [posDigito]
    ;_WriteConsoleA
    ;    mov eax, 1
    ;    mov edi, 1
    ;    mov rsi, ecx
    ;    mov edx, 1

           ;mov dword [caract],
           push dword-11
           xor eax,eax;
           call _GetStdHandle@4;
           mov [handleConsola],eax;
           xor eax,eax;
           mov eax,0d;
           mov [ultimoArgumento],eax;
           push dword [ultimoArgumento];
           push dword caractEscritos;
           push dword 1;
           push dword ecx
           push dword [handleConsola];
           call _WriteConsoleA@20;


       mov ecx, [posDigito]
       dec ecx
       mov [posDigito], ecx

       cmp ecx, espDigito
       jge bucle2
       ret
inverso:
  mov esi,d
  sub esi,1
invimprimir:
  cmp [esi],byte 0
  jz  invfin
  mov edi,dr
  add edi,[laux]
  mov ecx,1
  rep movsb
  sub byte [laux],1
  jmp invimprimir
invfin:
  ret
fin:
  sub edi,1
  ret
````

