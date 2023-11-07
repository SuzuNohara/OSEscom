<style>
    .left{text-align: left;}
    .right{text-align: right;}
    .center{text-align: center;}
    .just{text-align: justify;}
    .title{font-size: 40px;}
    .subtitle{font-size: 30px;}
</style>

# Practica 2

<div class="center title">
Instituto Politecnico Nacional
<br>
Escuela Superior de Computo
</div>
<br><br>
<div class="center subtitle">
Sistemas operativos
</div>
<br><br>
<div class="center subtitle">
Interfaz de llamadas al sistema
</div>
<br><br>
<div class="center">
Etnan Jezreel Lopez Torres <br>
Gonzaga Martínez José Alberto <br>
Sebastian Absalon Cortes<br>
</div>

<div class="just">
<br><br><br><br>

# Marco Teorico

# Programa 1

```assembly
segment  .data ;Segmento de datos
cadena   db    'Programando en ensamblador para Linux',0xA ;Cadena a imprimir
segment  .text ;Segmento de código
global   _start;Punto de entrada al programa (usado en el enlazador ld)
_start:        ;Inicio del programa
         mov   edx,38d ;Longitud de cadena
         mov   ecx,cadena ;Cadena a escribir
         mov   ebx,1 ;Salida estandar
         mov   eax,4 ;Numero de llamada al sistema "sys_write"
         int   0x80 ;Interrupción de llamadas al sistema del kernel de Linux
         mov   eax,1 ;Número de llamada al sistema "sys_exit"
         int   0x80 ;Interrupción de llamadas al sistema del kernel de Linux
```

Este programa nos permite ver de forma detallada el proceso que sigue una computadora para realizar todas las acciones que le permiten imprimir una linea en la consola.

- Primeramente vemos como declaramos un segmento incial.
- A continuacion vemos como se declara una variable de tipo cadena
- A continuacion vemos como se inicia otro segmento de codigo, en este caso para el texto
- A continuacion se inicia el bloque de codigo
- A continuacion se realiza con la accion mov se especifica la longitud de la cadena, posteriormente se establece la cadena que se imprimira y finalmente se establece la salida estandar
- Podemos ver a continuacion la llamada al sistema para escribir en consola
- Finalmente se hace una interrupcion al sistema

Es importante senalar que el codigo esta segmentado en bloques de datos y de codigo, esto se hace debido a que ensamblador debe realizar procesos separados para declarar los datos que usara, como el codigo que manipulara estos datos.

![](https://lh3.googleusercontent.com/fife/AK0iWDzKzSEHANQanoRClWSdcOWpIQwzo_XokYaX85kC9dNCu-VqW14zj1DfnNH7PU7K4xuLcKU3IXA6nCMaLX1vtG0Fb7J8dcN_xn0EUz-v9Qaj6bUF4VZogCh0vDckruSPT78HOYRfiIBwxC56dIROOKLk29EH8uNnERUeiwvh3WFolyu2iWziGCv-8XOxpTnI8RtexBGMAZHf7XGK-1CyT0zzJvS1kkhS_mFhtag_lwjus_1r_Z9I3AJHzPyRXQtyZpnn6XM0lILTg89acpgn06tYIZ60199hd-UAr1i48FIbZtoGI4Dgk0y65obW3zAjJ_fTFTuOxyLrDNboPq_ptCg48TZp-0LyU_BpOBgx1OLFF7XNGIYiBlz3uHzTOSuL6j9ViakNh0tYXmG_d3aWpJddkVdpR_j-t05SHCHAvlZynjJmbnENSpUvcO-ywFa90O4I4pIMDk1MCLri2fFr6MhbqLVqRw7Z9RmO6IGx-uSr0kozatePlUtUxn2wMZOg1Lc5jrJ1QEOVOxYJb9p6UVwJBDPZYqum9EVfa_M3BVGBHgZEAMdFUNjsqTVLhL609AZcTW4B5zSi_F7nL86kLY3NlbD83iUGeJ5vztePf7fQdpgXPKzbs-zJWQegGNdXs5tuo_-HbeEftvNOHPAlnscsoY4V-Wzj0jvZkNyKT_CUcUJOI3L4hgQS0ZFcBs5QF3pht8uR5hZm1NOGdUZ7QxZZeDz6C6oNjxvmAj14N-6NwZnatFImIbFCkey5BLFpfoKMwGkGGO3FD7UREFGz_gE6uV00Lk-ruomjh0QDP-QeG0MImiQ43Wl5G86btcFiOqNWMdPEbWADi9aTIEGFwec6dbonrOsbBfdFdFkKUvXUHRaRqgL-Fh3s0t6tHOrodrE2wSZXKLoSSOJbCoKu3Iyx4sxaVb2LgCA-V8f3Ja5CsiV56F8LH3ThVxK2YrcdB4e7dIyLFFqxSyC0MevtZWhc2e6kRghsx99cHdB80ahgnRbaNlovFo7CNHCtLMqCe2XVayN3zU_onVRKZ1pxkpfE49h7jshYMuKjgyYpjsHxWJnwS6rgrzkPNzCwjNYmI34PPUpw3ZAx2bjXKw9juCJ_DBCzAstV4SAW1sUG74DhioTytbNA3FpIoDx67kz0l6WwimnCVc6mnys-HBJsAcUOPToW1Nk19G85Pkd5hLq7MXdEiGNBes5ifmG0N6sKL3ZDZpmiOFse2xhLtdpVY_uQHqAK9j-yX_2ZrvIgdIYzmUzGWBuwYjFdqwQsivvHKu9b1w5rgjqrWwwX8WDivDAh1XhNcCQy_sFe5hiOa95tWl_rwRzPBmfoGSwJs1J1ryrNI95NFpUra2e_J5owYXGb5kd1WLkwbwM_p0q1cwvGyaqS4CKF5DvVVBxDvO_-Luz4Noiy_wCk2m5BjaaIBq6uMk9ITF0FVWAQslmFq34-ExvWSpIf6yUD0WuDOSS8q3w_oxv2eiaasMghUb9mbTC45VidskKkDEmrbxLr35BBDFqrz3FUMVD4IKxGXjX8biIAi9kiJZo=w1365-h654)

# Programa 2
```assembly
segment  .bss  ;Segmento de datos
cadena   resb  50 ;Espacio en memoria para la cadena a almacenar
segment  .text ;Segmento de código
global   _start ;punto de entrada al programa (usado con el enlazador ld)
_start:        ;Inicio del programa
mov      edx,50d ;Longitud del bufer
mov      ecx,cadena ;Cadena a leer
mov      ebx,0 ;Entrada estandar
mov      eax,3 ;Numero de llamada al sistema "sys_read"
int      0x80  ;Interrupción de llamadas al sistema del kernel de Linux
mov      edx,50d ;Longitud de cadena
mov      ecx,cadena ;Cadena a escribir
mov      ebx,1 ;Salida estandar
mov      eax,4 ;Numero de llamada al sistema "sys_write"
int      0x80  ;Interrupción de llamadas al sistema del kernel de Linux
mov      eax,1 ;Número de llamada al sistema "sys_exit"
int      0x80  ;Interrupción de llamadas al sistema del kernel de Linux
```
Este programa nos muestra paso a paso el procedimiento para poder leer una cadena de texto ingresada por el usuario y luego imprimir la misma cadena en la terminal. Por parte del programa anterior sabemos como es que se imprime una linea de codigo con ensamblador, sin embargo en este programa podemso ver a detalle el proceso para poder obtener una cadena de caracteres por parte del usuario.

- El programa sigue la misma secuencia de ejecucion que el programa anterior, hasta el momento en el que establece una longitud de buffer de 50 y entonces establece el punto de lectura de la entrada estandar
- A continuacion este 

![](https://lh3.googleusercontent.com/fife/AK0iWDzhslUyjCgJBORa2MOaB2CtMrMbqWfiyKYFKoUN6T_YQLdknsp89L0vgfCtE-1by-Ti0blIuBCG6kuBbG7F0oqm92QbA-C00Vkxs2Vzh75AAqMOuZ9Or1vprdMwENKb87AXqd30u9A9Z0bt9-HWH1h0oRTs_u8ow-DzLJ2LdM4UX-CbJlG7i5eMQLmjyuGX0UjugPsx3aB-KeFylDaVQvdHXHjXsw4yXY3q0V8LsMbEj2bfXe03hkIyB7zpKxOdr9eq_O0imxq-zlnV3tsF_2zjIsV_zfAbE6m29xisWIYcTedT8QRuz8EiHBZPI7UGB_c3NXDZ4vVMaV3dpKkLZ8uetgaWZN0CTxplLXB_fXxc1y5KSJa433HyT9oi43iWCdWKI5aUoiKCp59Egelt5hown7CFnDwhhwIs_aushNKI8TOjuXygIBUhIcQlNJ6_51TeAMfO-i7c1ITU-saxc0slkUxEqKtpivKrCsyn4aRJ6p7bJaKFqZuh_fGg7JtJcCtROWsYDUGPoK_2MqR8V-ivFeRg-WJveRQr39kSirfcdgFN729F0BgDpUCMb8b3orjkDEaUttz-JXtUVvfuGJTa7zweSN2f5XIa6zNFdJMcC9Bt8byJGHkYPRafquit-EFoPDE1bkJ9kZ8LEjZFfZ16n5P_gftEpIW2rbHA_Pr94BjxQuio1dk_CXkmb7Qx1vvaB7kjqluNcqVWELJIzSCEADmN-HvE66Hi99GnICR-1dG6sbn_NVYXWoIgsAbRn1aw-CHeZkju4NWw6DBQbROG5ids1mrbHx6VkYZq0AtiyfWzeNrlnxuZ5HRKwu1PoAE1vL_3xZOjx_F0dXDd6jc4VaSSeGAJiSQYpv5j8EeRaPTnVsfbmYcwAhzfFhC0sLd4PE0FaOExIrwjDAn9znnsz8WmL-stY2sK_YicyHJvZf-QePdG38hno3AnDSDkOYyAV_75e1cNGrkAYIjTQKYhgDVjmVDREe22EVlYoU5C2hXimHFhe5Nkm2UA8yBoAJU6LV3puAfy3MwiEHFnzHu3r4UpDbJsj_MN38TGkcIT_EXiQ_rJiUTanB0n7HP6khMeJrQdO3b1ZtUKYn8QWBX6fVkYvJ9MTsMK3SnYNJaL8kUxklRbM7ZownBd2oG6ieVAk_L1xWLj9vOGBYpttTtSnd_P4vQaald5lmzbqzOACvXHev_iPqcLn8URYXx9GK387c9xMzfXePHkHwlV45Kok2uVZeoKDfXhe0LPueDc7x6FFjpaq8yAVlNuM7_oys97jDlD7j8nmyg5pgAzS54zapkY7wMCQ0ewcHyyzA2nOV1srmc6K30Z9S46G57a5q0HBkRc5wEkbhoi273w6MonZP8GaiHSX0SttT5OWKhOzM5FVYFpwcEes1XMsWDwtdP1jTvBA0GrWhrCCRcs5pXY1oeT8RAGkhdLqcVwnL0pTv991-6hROf8rZFEemJD7HcecgvVOFgIU5AsMGCbIccdIU50yU6FkN52xOlLtBUQRXeyYJMNREl4d2sZF-ISvYMEg_pGVoA=w810-h654)