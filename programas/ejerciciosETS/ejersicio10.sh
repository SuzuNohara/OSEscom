#!/bin/bash

# declaracion de lenguaje a usar

# Variables a utilizar
date=$(date +%Y%m%d)
user="suzuNohara"
domain=$(dnsdomainname)
localHost=$(hostname)
backupHost="suzu.irken.tld"
log="backup.log"

# Direcciones de memoria a sincronizar
syncDirs=("/store/img/"
    "/store/mp3/"
    "/store/docs/"
    "/store/video/"
    "/store/mail/"
)

# Direcciones de memoria a respaldar
backupDirs=("/etc/"
    "/store/web/"
    "/var/lib/mysql/"
)

# delcaracion de una funcion
function evalOperation() {
    # composicion del archivo de resultados
    if [ $1 -gt 0 ]; then
        local result="<span style="color: #F00">fail</span>"
    else
        local result="<span style="color: #0F0">OK</span>"
    fi
    # impresion de resultados
    echo $result
    # fin de la funcion
    return 0
}

# Reinicio de lo slogs
cat /dev/null >$log

# Sincronizacion de directorios
for originDir in "${syncDirs[@]}"; do
    # Directorio de destino
    destDir=/backup/${originDir#/store/}
    # sincronizacion
    rsync -avhiz --delete $originDir $user@$backupHost:$destDir
    # resultado de la operacion
    result=$(evalOperation $?)
    # impresion de resultados
    echo "&lt;p&gt;Sync of dir $originDir [$result]&lt;/p&gt;" >>$log
done

# Backup dirs
for backupDir in "${backupDirs[@]}"; do
    # Conexion con el servidor
    ssh $user@$backupHost "mkdir -p /backup/machines/$localHost/$date$backupDir$"
    # sincronizacion
    rsync -avi --delete $backupDir $user@$backupHost:/backup/machines/$localHost/$date$backupDir
    # resultado de la operacion
    result=evalOperation $?
    # impresion de resultados
    echo "&lt;p&gt;Backup of dir $backupDir [$result]&lt;/p&gt;" >>$log
done
