#!/bin/bash
read -p "Enter a number: " num

while [ $num -gt 0 ]
do
echo
echo -n " $num"
num=$( echo "$num -1" | bc )
done