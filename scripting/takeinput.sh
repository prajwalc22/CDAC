#!/bin/bash
read name
echo "your name is:  $name "

read -p "enter ur age " age
echo "ur age is: $age"

read -s -p "enter ur pin: " pin
echo "pin entered successfully"

read -n 1 -p "Save info? (y/n):" confirm
echo
