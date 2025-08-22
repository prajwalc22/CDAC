#!/bin/bash

read -p "enter first " first
read -p "enter second " second

Add(){
    add=$( echo "$1 + $2" | bc )
    echo "the sum of $1 and $2 is $add"
}

Substract(){
    add=$( echo "$1 - $2" | bc )
    echo "the subs of $1 and $2 is $add"
}


Multiply(){
    add=$( echo "$1 * $2" | bc )
    echo "the product of $1 and $2 is $add"
}


Divide(){
    add=$( echo "$1 / $2" | bc )
    echo "the division of $1 and $2 is $add"
}

Add $first $second
Multiply $first $second
Divide $first $second