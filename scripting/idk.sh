#!/bin/bash
read -p "enter a number: " num

if [5 -le "$num"]; then
   echo "$num is greater than 5"
else 
   echo "$num is less than 5" 
fi