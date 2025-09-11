# Write a Python function find_dates(text) to find the first occurrence
# of a date in the format MM-DD-YYYY and prints the full match.
import re

def date_check(text):
    pattern = r'^(0[1-9]|1[0-2])-(0[1-9]|1[0-9]|2[0-9]|3[0-1])-\d{4}$'
    match = re.search(pattern, text)
    
    if match:
        print(f"Found date: {match.group()}")
        return True  
    else:
        print("No date found")
        return False

text = ["20-20-2024","12-20-2024","06-20-2024","10-32-2024"]
for i in text:
    print(f"Testing: {i}")
    result = date_check(i)
    print(f"Result: {result}\n")