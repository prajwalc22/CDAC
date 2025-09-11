import csv

# Data to write to CSV
data = [['Name', 'Age'], ['Alice', 30], ['John', 25]]

# Write to people.csv
with open('people.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerows(data)

print("people.csv file created successfully")
