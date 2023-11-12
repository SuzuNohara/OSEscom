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
|Echo|Muestra mensajes o activa o desactiva la característica de eco de comandos. Si se usa sin parámetros, echo muestra la configuración de eco actual.|
|Del|Elimina uno o varios archivos. Este comando realiza las mismas acciones que el comando erase. El comando del también se puede ejecutar desde la Consola de recuperación de Windows mediante parámetros diferentes. |
|Date|Muestra o establece la fecha del sistema. Si se usa sin parámetros, date muestra la configuración de fecha actual del sistema y le pide que introduzca una nueva fecha.|
|Tar|El comando tar archiva y recupera archivos en y a partir de un solo archivo denominado tarfile. Un tarfile suele ser una cinta, pero puede tratarse de un archivo cualquiera.|
|Rar|RAR es un formato de compresión propietario, perteneciente a la empresa RarLabs Esto sirve para comprimir y descomprimir archivos en formato *.rar|

2.- Capture y ejecute el siguiente batch. Guarde el archivo con extensión .bat. Observe su funcionamiento y explique.
````bat
@echo off
rem
cls
rem
dir .\prueba
rem
del .\prueba
rem
dir .\prueba
rem
echo "------------------ Creando archivo: prueba ----------------"
rem
echo "Hola a todos" >> prueba
echo "Esto es una prueba" >> prueba
echo "De un batch" >> prueba
rem
dir .\prueba
rem
echo "------------------ Script terminado ----------------------"
type .\prueba
````
[![Captura-de-pantalla-2023-11-11-103903.png](https://i.postimg.cc/Pq2gpNdY/Captura-de-pantalla-2023-11-11-103903.png)](https://postimg.cc/5HQ7D4Y2)

3.- Capture y ejecute el siguiente batch. Sustituya las rutas utilizadas en el batch por las rutas que usted
utilice. Deberá tener instalado el programa Winrar para utilizar el comando rar en el script. Observe
su funcionamiento y explique.
````bat
@echo off
cls
echo "-------------- Captura fecha ---------------"
for /F "tokens=1,2,3 delims=/ " %%V in ('date /t') do set dia=%%V%%W%%X
set tiempo=%time%
for /F "tokens=1,2,3 delims=:." %%V in ("%tiempo%") do set tiempo=%%V%%W%%X
set fecha=%dia%%tiempo%
echo "-------------- Empacando ----------------"
tar -cvf .\respaldo%fecha%.tar .\directorio1 .\directorio2 .\directorio3
echo "-------------- Comprimiendo ----------------"
rar a -c- .\respaldo%fecha%.rar .\respaldo%fecha%.tar
echo "-------------- Enviando a otro directorio --------------"
copy .\respaldo%fecha%.rar .\respaldos\
echo "-------------- Descomprimiendo ------------------"
rar e -y .\respaldos\respaldo%fecha%.rar .\respaldos
echo "-------------- Desempacando ----------------"
tar -xvf .\respaldos\respaldo%fecha%.tar -C respaldos\
echo "-------------- Limpiando ------------------"
del .\respaldo%fecha%.rar
del .\respaldo%fecha%.tar
echo "-------------- Terminado ------------------"
````
4.- Capture y ejecute el siguiente script. Observe su funcionamiento.
````bat
@echo off
set /p Var1="Introduce valor del primer numero: "
set /p Var2="Introduce valor del segundo numero: "
if %Var1% LSS %Var2% echo %Var1% es menor que %Var2% & goto :seguir_if
echo %Var1% es mayor o igual que %Var2%
if %Var1% EQU 10 echo Fui un 10 & goto :salir
if %Var1% EQU 20 echo Fui un 20 & goto :salir
echo Fui otro valor
goto :salir
:seguir_if
for /L %%V IN (%Var1%,1,%Var2%) do (call :imprime_valor %%V)
goto :salir
:imprime_valor
echo contador=%1
goto :eof
:salir
pause
````


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
echo "-------------- Captura fecha ---------------"
for /F "tokens=1,2,3  delims=/ " %%V in ('date /t') do set dia=%%V%%W%%X
set tiempo=%time%
for /F "tokens=1,2,3 delims=:." %%V in ("%tiempo%") do set tiempo=%%V%%W%%X
set fecha=%dia%%tiempo% 
echo "-------------- Empacando ----------------"    
tar -cvf  .\respaldo%fecha%.rar  .\directorio1  .\directorio2  .\directorio3
echo "-------------- Comprimiendo ----------------"
"%rar_path%" a -c- .\respaldo%fecha%.rar .\respaldo%fecha%.tar
echo "-------------- Enviando a otro directorio --------------"
copy .\respaldo%fecha%.rar    .\respaldos\
echo "-------------- Descomprimiendo ------------------"
"%rar_path%" e -y .\respaldos\respaldo%fecha%.rar .\respaldos
echo "-------------- Desempacando ----------------"
tar  -xvf  .\respaldos\respaldo%fecha%.tar  -C  respaldos\
echo "-------------- Limpiando ------------------"
del .\respaldo%fecha%.rar
del .\respaldo%fecha%.tar
echo "-------------- Terminado ------------------"

````
[![6.png](https://i.postimg.cc/JnDHTrLF/6.png)](https://postimg.cc/Q9DMCrVg)
[![6-1.png](https://i.postimg.cc/Xq9GbsXc/6-1.png)](https://postimg.cc/rRFFGC1K)
[![6-2.png](https://i.postimg.cc/JnktNp3V/6-2.png)](https://postimg.cc/9RcWVtNJ)


````bat
@echo off
cls
set rar_path=C:\Program Files\WinRAR\WinRAR.exe
echo "-------------- Enviando al directorio original ------------------"
copy .\respaldos\respaldo.rar .\
echo "-------------- Descomprimiendo ------------------"
"%rar_path%" e -y .\respaldo.tar -C .\
echo "-------------- Limpiando ------------------"
del .\respaldo.rar
del .\respaldo.tar
echo "-------------- Terminado ------------------"
````
[![6-3.png](https://i.postimg.cc/B6HQLXsJ/6-3.png)](https://postimg.cc/sQfRbfvL)
[![6-4.png](https://i.postimg.cc/sxKz7WLC/6-4.png)](https://postimg.cc/9w4sjDVL)


7.- Programe un script genrador de scripts, es decir, que cree un archivo, que posteriormente permita editarlo y que finalmente cambie los permisos para ejecución del archivo, mandando a jecturar el script desde el script original.
````bat
@echo off
echo "-------------- Extension del archivo ------------------"
set/p extension = "Ingrese la extension del archivo: "
set mensaje = Creando un archivo %extension%
echo.
timeout /t 1 /nobreak > NUL
echo "-------------- %mensaje% ------------------"
echo .>ejecutable.%extension%
echo.
timeout /t 1 /nobreak > NUL
echo "-------------- Archivo creado ------------------"
echo.
timeout /t 1 /nobreak >NUL
echo "-------------- Editando archivo ------------------"
set /p edicion= "Ingrese el contenido del archivo: "
echo %edicion%>ejecutable.%extension%
echo.
timeout /t 1 /nobreak >NUL
echo "-------------- Ejecutando archivo ------------------"
start ejecutable .%extension%
echo.
echo "-------------- Finalizado ------------------"
````
![image](https://github.com/SuzuNohara/OSEscom/assets/114888921/054cf3ff-9d30-47cb-a736-dacbb2124fd5)
![image](https://github.com/SuzuNohara/OSEscom/assets/114888921/4d5c045f-89e9-490a-89c0-bc72bdef3411)
![image](https://github.com/SuzuNohara/OSEscom/assets/114888921/08704acc-c9bc-4702-b5a8-923936253198)



8.- Programe un script a través de las estructuras de control de flujo para que permita visualizar los archivos de un directorio que se envíe como argumento de entrada (no utilizar el comando ls). Además, el script deberá mostrar el número total de archivos en el directorio.
````bat
@echo off
set /a num_archivo=0
if "%1"==""(
  echo Debe ingresar un directorio como argumento de entrada.
  goto fin
)
if not exist %1(
  echo %1 no es un directorio válido.
  goto fin
)
echo Archivos en %1:
for %%f in (%1\*) do(
  if %%~xf NEQ "" (
    echo %%~nxf
    set /a num_archivos+=1
  )
)
echo El directorio %1 contiene %num_archivos% archivos.

:fin
````
![image](https://github.com/SuzuNohara/OSEscom/assets/114888921/3c4d9f31-9b5a-4492-b329-3bd611bdba64)


Para su ejecución se requiere con un argumento que será el directorio al que se evaluará (no cuenta carpetas ya que estos cuentan como directorios), con la estructura for vamos imprimiendo el nombre de cada archivo.

9.- Programe un script que elimine todos los archivos de un directorio especificado desde el propio script, y cuyo segundo carácter sea la letra “e”. 
````bat
@echo off
setlocal enabledelayedexpansion
set /p directorio=Introduce la ruta del directorio:
for %%f in ("%directorio%\") do (
    set "filename=%%~nfx"
    if "!filename:~1,1!" == "e" (
        del "%%~f"
    )
)

echo Archivos eliminados correctamente
pause
````
![image](https://github.com/SuzuNohara/OSEscom/assets/114888921/5a80a31d-f79e-4618-8452-9b309ee34b0e)
![image](https://github.com/SuzuNohara/OSEscom/assets/114888921/1ed23ec1-f248-45d1-9201-8faabfec21ed)

# Conclusiones
En conclusion, la programación bajo el intérprete de comandos (shell) en sistemas Linux y Windows representa una valiosa técnica para interactuar con el sistema operativo a través de una interfaz de línea de comandos en lugar de una interfaz gráfica. Tanto el Bash en Linux como el PowerShell en Windows ofrecen herramientas avanzadas para la programación y la automatización de tareas del sistema.
<br>
Esta habilidad resulta fundamental para administradores de sistemas, desarrolladores de software y cualquier persona que busque optimizar la ejecución de tareas del sistema. Los scripts creados en el entorno de shell son portátiles entre diferentes sistemas operativos, lo que posibilita su escritura una sola vez y su ejecución en diversas plataformas.


###
