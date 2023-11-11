#!/bin/sh
#
clear
#
echo "============== Descomprimiendo archivos =============="
ls /home/suzu/respaldos

echo "============== Comprimiendo archivos =============="
tar  -cvf  ./respaldo.tar   /home/suzu/Documents/AVL   /home/suzu/Documents/networks   /home/suzu/Documents/scripts

echo "============== Comprimiendo archivo =============="
bzip2  ./respaldo.tar 

echo "============== Copiando a la carpeta de respaldos =============="
cp  ./respaldo.tar.bz2   /home/suzu/respaldos 

echo "============== Descomprimiendo archivos =============="
bunzip2  /home/suzu/respaldos/respaldo.tar.bz2 

echo "============== Desempaquetando archivos =============="
tar  -xvf   /home/suzu/respaldos/respaldo.tar 