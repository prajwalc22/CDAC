# Write a Python program to find all words in a string that
# start with the letter 'p' (case-insensitive) and are at least 
# 3 characters long.

import re
def starts_with_p(text):
        pattern=r'^[p]'
        return bool(re.match(pattern,text))

text=["pajwal","peepeepoopoo","parag"]
for i in text:
        result=starts_with_p(i)
        print(f"{i}: {result}")
