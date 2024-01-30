#!/bin/sh

# comando de ejecucion
# sh ./ejerciciosETS/ejersicio18.sh ejerciciosETS

echo "Directorio: $1";

zip -r "/tmp/$1.zip" ./$1

ls "/tmp/" | grep "$1.zip"