# First create data.txt file
with open('data.txt', 'w') as f:
    f.write("Hello\n my name is \n Eminem.")

# Read and print the file
with open('data.txt', 'r') as file:
    content = file.read()
    print("Content of data.txt:")
    print(content)
