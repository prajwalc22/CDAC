#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: $0 <directory> <filename>"
    exit 1
fi

filepath="$1/$2"

if [ -f "$filepath" ]; then
    ls -l "$filepath"
else
    echo "Error: File '$2' not found in '$1'"
fi
