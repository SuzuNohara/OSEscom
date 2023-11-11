#!/bin/sh 
clear 
Op=”Opcion:“
Select i in Directorio DirectorioExtendido Salir
do case $i in
 Directorio) ls;; 
 DirectorioExtendido) ls -l;; 
 Salir) break;; 
      esac 
done 
# 
for i in hola como estan todos 
do 
 echo  -n $i 
done 
@echo off 
rem 
cls 
rem 
dir  .\prueba 
rem 
del  .\prueba 
rem 
dir  .\prueba 
rem 
echo  "------------------ Creando archivo: prueba ----------------" 
rem 
echo  "Hola a todos" >> prueba 
echo  "Esto es una prueba" >> prueba 
echo  "De un batch" >> prueba 
rem 
dir  .\prueba 
rem 
echo  "------------------ Script terminado ----------------------" 
type  .\prueba 
