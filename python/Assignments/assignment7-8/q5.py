# Write a Python function clean_string(text) that takes a string and 
#                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 performs the following cleaning tasks using regex:
# •	Replace multiple spaces with a single space.
# •	Remove leading and trailing whitespace.
# •	Capitalize the first letter of each sentence.


import re

def clean_string(text):
    
    text = re.sub(r'\s+', ' ', text)
    
    
    text = text.strip()
    
   
    text = re.sub(r'(^|[.!?]\s+)([a-z])', 
                  lambda m: m.group(1) + m.group(2).upper(), text)
    
    return text

# Test the function
test_text = "  this  is   a test.   this is second sentence!   is this third?    yes it is.  "
result = clean_string(test_text)
print(f"Original: {repr(test_text)}")
print(f"Cleaned:  {repr(result)}")
