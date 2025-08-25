#!/bin/bash
read -p "enter number: " num
rem=0
bin=""
while [ $num -gt 0 ]
do
rem=$( echo "$num % 2" | bc )
num=$( echo "$num/2" | bc )
bin=$bin$rem
done
echo $bin | rev
