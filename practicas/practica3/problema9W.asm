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
