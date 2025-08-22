#!/bin/bash
read -p "Enter ur age" age

if [ $age -ge 1 -a $age -le 25 ]
then
echo "gen z"

elif [ $age -ge 26 -a age -le 40 ]
then
echo "aplha"

elif [ $age -ge 40 -a age -le 60 ]
then
echo "aplha"

else
echo "delta"
fi

