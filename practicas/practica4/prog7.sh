#!bin/sh
#
clear

read search_dir

for entry in "$search_dir"/*
do
  echo "$entry"
done