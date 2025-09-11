# Count lines in data.txt
with open('data.txt', 'r') as file:
    lines = file.readlines()
    print(f"Total number of lines: {len(lines)}")
