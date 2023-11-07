<style>
    .left{text-align: left;}
    .right{text-align: right;}
    .center{text-align: center;}
    .just{text-align: justify;}
    .title{font-size: 40px;}
    .subtitle{font-size: 30px;}
</style>

# Practica 4

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
Programacion bajo el interprete de comandos (shell)
</div>
<br><br>
<div class="center">
Etnan Jezreel Lopez Torres <br>
Gonzaga Martínez José Alberto <br>
Sebastian Absalon Cortes<br>
</div>

<div class="just">
<br><br><br><br>

# Marco teorico

## Seccion de linux

## Seccion de Windows
1.- Investigue los siguientes comandos: echo, del, date, tar, rar. Dé un resumen de sus características y funcionalidad.
| Comandos | Caracteristicas |
| - | - |
|Echo||
|Del||
|Date||
|Tar||
|Rar||

2.- Capture y ejecute el siguiente batch. Guarde el archivo con extensión .bat. Observe su funcionamiento y explique.
5. -Capture y ejecute el siguiente 
````bat
@echo off
echo Opciones:
echo Directorio
echo DirectorioExtendido
echo Salir
set /p Op="Opcion: "
for %%V IN (Directorio DirectorioExtendido Salir) do (call :opcion_elegida %%V)
goto :salir

:opcion_elegida
 if %Op%==Directorio dir & goto :salir
 if %Op%==DirectorioExtendido echo "Similar a dir" & goto :salir
 if %Op%==Salir goto :salir
echo "Opcion no encontrada"
goto :salir
:salir
 for %%V in (Hola como estan todos) do echo %%V
 pause
 exit(0) 
````
[![p5-batch.png](https://i.postimg.cc/pV4k5Vsg/p5-batch.png)](https://postimg.cc/YjNQJ7K3)
[![p5-1-batch.png](https://i.postimg.cc/23NSnfZ4/p5-1-batch.png)](https://postimg.cc/hQMnq6Mj)
6.- Programe un script para que descomprima en sus rutas originales los directorios que se han compreso con el anterior script.
````bat
@echo off
cls

set rar_path=C:\Program Files\WinRAR\WinRAR.exe
echo "--- Fecha ---"
for /F "tokens=1,2,3 delims=/" %%V in ('date /t') do set dia=%%V%%W%%X
set tiempo=%time%
for /F  "tokens=1,2,3 delims=/." %%V in (%tiempo%) do set tiempo=%%V%%W%%X
set fecha=%dia%%tiempo%

echo "--- Empacando ---"
tar -cvf 

````
7.- Programe un script genrador de scripts, es decir, que cree un archivo, que posteriormente permita editarlo y que finalmente cambie los permisos para ejecución del archivo, mandando a jecturar el script desde el script original.
8.- Programe un script a través de las estructuras de control de flujo para que permita visualizar los archivos de un directorio que se envíe como argumento de entrada (no utilizar el comando ls). Además, el script deberá mostrar el número total de archivos en el directorio.
9.- Programe un script que elimine todos los archivos de un directorio especificado desde el propio script, y cuyo segundo carácter sea la letra “e”. 
###
