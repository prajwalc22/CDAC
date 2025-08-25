#!/bin/bash
read -p "Enter a number" num
i=1
until [ 10 -le $i ]
do
result=$((num * i)) 
echo "$num x $i = $result" 
((i++))
done