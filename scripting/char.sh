#!/bin/bash
read -p "Enter a string: " name

for (( i=${#name}; i>=0; i-- ))
do
char="${name:$i:1}"
echo "$char"

done