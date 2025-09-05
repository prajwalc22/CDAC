def count_case(s):
    counts = {'uppercase': 0, 'lowercase': 0}
    for char in s:
        if char.isupper():
            counts['uppercase'] += 1
        elif char.islower():
            counts['lowercase'] += 1
    return counts

# Test it
text = "Hello World!"
result = count_case(text)
print(result)  # {'uppercase': 2, 'lowercase': 8}
