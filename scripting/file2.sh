#!/bin/bash
content=$( ls )
for i in $content
do
if [ -f $i ]
then
if [ -s $i ]
then
echo "$i has content inside it"
else
echo "$i is empty"
fi
fi

done
