
# •	Write a Python function is_valid_phone(text) that takes a string and 
# returns True if it is a valid 10-digit phone number, and False otherwise. 
# A valid phone number should consist of exactly 10 digits.

import re
def is_valid(text):
    pattern=r'^\d{10}$'
    return bool(re.match(pattern, text))

text='0987654321'

print(f"{text} :",is_valid(text))