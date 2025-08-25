#!/bin/bash
read -p "Enter a number" num
i=1
while [ $i -le 10 ]
do
result=$((num * i)) 
echo "$num x $i = $result" 
((i++))
done