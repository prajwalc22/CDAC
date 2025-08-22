#!/bin/bash

var=$(ls /home/acts)

for i in $var
do
if [ -f  "/home/acts/$i" ]
then
echo $i
fi
done
