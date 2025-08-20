#  wirte a script to check given year is a leap year or not 
#!/bin/bash

read -p "Enter year" year
if [ $((year % 400)) -eq 0 ]
then
echo "it is a leap year"


if [ $((year % 100)) -eq 0 ]
then
echo "it is not a leap year"
fi

if [ $((year % 4)) -eq 0 ] 
then
echo "it is not a leap year"

fi


