#!/bin/bash
echo  "Enter array elements"  
read -a array
var=${array}
for i in ${array[@]}
do
if [ $i -gt $var ]; then
var=$i
fi
done

echo $var
