#!bin/sh
#
clear

read search_dir

for entry in "$search_dir"/*
do
    filter = ${entry:0:1}
    echo $filter
    if [[ $filter = "e" ]]
    then
        rm -r $entry
    fi
done