#!/bin/sh
#
clear

fecha=202311111307 

echo Escribiendo programa

mkdir scripts

cd scripts

vim echo > script$fecha.sh

chmod +x script$fecha.sh

cd ..

ls /scripts
