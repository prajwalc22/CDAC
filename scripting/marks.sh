#!/bin/bash
read -p "Enter ur marks: " marks

if [ $marks -ge 90 ] && [ $marks -le 100 ]
then
echo " $marks: grade A+"
fi

if [ $marks -ge 80 ] && [ $marks -le 89 ]
then
echo " $marks: grade A"
fi

if [ $marks -ge 70 ] && [ $marks -le 79 ]
then
echo " $marks: grade B"
fi


if [ $marks -ge 60 ] && [ $marks -le 69 ]
then
echo " $marks: grade C"
fi

if [ $marks -ge 50 ] && [ $marks -le 59 ]
then
echo " $marks: grade D"
fi

if [ $marks -ge 40 ] && [ $marks -le 49 ]
then
echo " $marks: grade E"

else
echo "You have failed"
fi