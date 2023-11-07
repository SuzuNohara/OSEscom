#!/bin/sh 
# 
clear 
# 
echo  "-------------- Obteniendo fecha ---------------" 
fecha=`date +%Y%m%d%H%M` 
# 
echo  "-------------- Empacando ----------------" 
tar  -cvf  ./respaldo$fecha.tar   /home/Jorge/directorio1   /home/Jorge/directorio2   /home/directorio3 
# 
echo "-------------- Comprimiendo ----------------" 
bzip2  ./respaldo$fecha.tar 
# 
echo  "-------------- Enviando a otro directorio --------------" 
cp  ./respaldo$fecha.tar.bz2   /home/Jorge/respaldos 
# 
echo  "-------------- Descomprimiendo ------------------" 
bunzip2  /home/Jorge/respaldos/respaldo$fecha.tar.bz2 
# 
echo  "-------------- Desempacando ----------------" 
tar  -xvf   /home/Jorge/respaldos/respaldo$fecha.tar 
# 
echo  "-------------- Limpiando ------------------" 
rm  -f  ./respaldo$fecha.tar.bz2 
rm  -f  ./respaldo$fechar.tar 
# 
echo  "-------------- Terminado ------------------"