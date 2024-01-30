#!/bin/sh

echo "Directorio: $1";

zip -r "/tmp/$1.zip" ./$1

ls "/tmp/" | grep "$1.zip"