#!/bin/bash
read -p "Enter ur age: " age
if [ $age -ge 18 ]
then
echo "You are eligible for driving! "
else 
echo "You are not eligible for driving! "
fi
