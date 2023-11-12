#!/bin/sh 
# 
clear 
# 
echo  "-------------- Obteniendo fecha ---------------" 
fecha=`date +%Y%m%d%H%M` 
# 
echo  "-------------- Empacando ----------------" 
tar  -cvf  ./respaldo$fecha.tar   /home/suzu/Documents/AVL   /home/suzu/Documents/networks   /home/suzu/Documents/scripts
# 
echo "-------------- Comprimiendo ----------------" 
bzip2  ./respaldo$fecha.tar 
# 
echo  "-------------- Enviando a otro directorio --------------" 
cp  ./respaldo$fecha.tar.bz2   /home/suzu/respaldos 
# 
echo  "-------------- Descomprimiendo ------------------" 
bunzip2  /home/suzu/respaldos/respaldo$fecha.tar.bz2 
# 
echo  "-------------- Desempacando ----------------" 
tar  -xvf   /home/suzu/respaldos/respaldo$fecha.tar 
# 
echo  "-------------- Limpiando ------------------" 
rm  -f  ./respaldo$fecha.tar.bz2 
rm  -f  ./respaldo$fechar.tar 
# 
echo  "-------------- Terminado ------------------"