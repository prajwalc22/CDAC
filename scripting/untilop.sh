#!/bin/bash

read -p "Enter a number" num
start=1
until [ $start -gt $num ]
do
echo 
echo -n "$start"
# num=$( echo "$num +1" | bc )
((start++))
done