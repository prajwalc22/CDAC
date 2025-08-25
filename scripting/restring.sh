#!/bin/bash
read -p "Enter a string: " name

for (( i=${#name}; i>=0; i-- ))
do
char="${name:$i:1}"
echo -n "$char"
# assign_name=$assign_name$char
# echo "$assign_name"
done