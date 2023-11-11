#!/bin/sh
#
clear

fecha=`date +%Y%m%d%H%M` 

echo "========== Creando direcotrio scripts =========="

mkdir scripts

echo "========== Escribiendo programa =========="

echo "#!/bin/sh
#
clear

fecha=`date +%Y%m%d%H%M` 

echo "Escribiendo programa"

mkdir scripts

cd scripts

vim echo > script\$fecha.sh

chmod +x script\$fecha.sh

cd ..

ls /scripts" > ./scripts/script\$fecha.sh

echo "========== Cambiando permisos =========="

chmod +x ./scripts/script\$fecha.sh

ls ./scripts