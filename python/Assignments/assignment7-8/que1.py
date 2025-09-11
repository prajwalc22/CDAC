import re

def is_valid_phone(text):
    """
    Checks if a string is a valid 10-digit phone number.
    
    Regex explanation:
    ^\d{10}$ - ^ (start), \d{10} (exactly 10 digits), $ (end)
    """
    pattern = r'^\d{10}$'
    return bool(re.match(pattern, text))

# Test the function
test_numbers = ["1234567890", "123456789", "12345678901", "123abc7890", ""]
for num in test_numbers:
    print(f"'{num}' is valid: {is_valid_phone(num)}")
