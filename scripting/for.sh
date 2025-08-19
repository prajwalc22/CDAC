#!/bin/bash

# Loop through a list
for item in apple banana orange; do
    echo "Fruit: $item"
done

# Loop through files
for file in *.txt; do
    echo "Processing: $file"
done

# C-style for loop
for ((i=1; i<=5; i++)); do
    echo "Number: $i"
done

# Loop through command line arguments
# for arg in "$@"; do
#     echo "Argument: $arg"
# done
