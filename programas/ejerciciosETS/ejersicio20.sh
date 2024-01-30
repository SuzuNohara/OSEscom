#!/bin/bash

# comando de ejecucion
# sh ./ejerciciosETS/ejersicio20.sh ../programas/

echo "Directorio: $1";

du -hs "$1"

echo $sizes_array