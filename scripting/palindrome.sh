#!/bin/bash
 read -p "Enter string " string1

string2=$(echo "$string1" | rev) 
if [ $string2 == $string1 ]
then
echo "palindrome"
else
echo "not palindrome"

fi



