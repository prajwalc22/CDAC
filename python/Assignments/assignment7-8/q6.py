# Write a Python program that takes a string and replace 
# all punctuation marks (e.g., ,, ., !, ?) with an empty string.

import re

def remove_punctuation(text):
    # Replace common punctuation marks with empty string
    return re.sub(r'[,.!?;:\'"()&-]', '', text)

# Alternative: Remove all non-alphanumeric and non-whitespace characters
def remove_all_punctuation(text):
    return re.sub(r'[^\w\s]', '', text)

# Test the functions
sample_text = "Hello, world! How are you? I'm fine, thanks."
print(f"Original: {sample_text}")
print(f"Method 1: {remove_punctuation(sample_text)}")
print(f"Method 2: {remove_all_punctuation(sample_text)}")

# Test with user input
text = input("Enter text: ")
cleaned = remove_punctuation(text)
print(f"Without punctuation: {cleaned}")
