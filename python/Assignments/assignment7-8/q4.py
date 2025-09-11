# Write a Python function is_strong_password(password) that uses regex to 
# check if a password meets the following criteria:
# •	At least 8 characters long.
# •	Contains at least one uppercase letter.
# •	Contains at least one lowercase letter.
# •	Contains at least one digit.
# •	Contains at least one special character (e.g., !, @, #, $, %, ^, &, *).

import re

def is_strong_password(password):
    if len(password) < 8:
        return False
    if not re.search(r'[A-Z]',password):
        return False
    if not re.search(r'[a-z]',password):
        return False
    if not re.search(r'\d',password):
        return False
    if not re.search(r'[!@#$%^&*]',password):
        return False
    else:
        return True




password=["Password@123!", "password", "PASSWORD123", "Pass@123", "Password!"]
for i in password:
    result=is_strong_password(i)   
    print(f"{i}: {result}")
