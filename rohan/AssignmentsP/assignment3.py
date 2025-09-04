# Create a set my_set containing the elements 'apple', 'banana', and 'orange'.

# •	Attempt to add a duplicate element to my_set.
set={"apple","banana","orange","orange"}

# •	Add a new element, 'grape', to my_set.
print(set)
# set.add(2)
# print(set)
set.add("grape")
print(set)

# •	Create two sets, set_A and set_B, with some common and unique elements.

set_A={1,2,3,4}
set_B={2,3,7,8}

# •	Assign the result of the union of set_A and set_B to a new set set_C.
result1=set_A.union(set_B)
print(result1)

# •	Assign the result of the intersection of set_A and set_B to a new set set_D.
result2=set_A.intersection(set_B)
print(result2)

# •	Create a tuple my_tuple containing the integers 1, 2, and 3.
my_tuple=(1,2,3)

# •	Using tuple assignment (unpacking), assign the values of my_tuple to three separate variables: a, b, and c.
my_tuple = (1,2,3)
a, b, c = my_tuple

print(a)  
print(b)  
print(c)  


# •	Swap the values of two variables, x and y, using tuple assignment without a temporary variable.
my_tuple1=(10,20)
x,y=my_tuple1
x,y=y,x
print(x)
print(y)

# •	Create an empty dictionary my_dict.
my_dict={}

# •	Add a key-value pair to my_dict where the key is 'name' and the value is 'Alice'.
my_dict["name"]="Alice"

# •	Add another key-value pair where the key is 'age' and the value is 30.
my_dict["age"]=30

print(my_dict)

# •	Update the value associated with the key 'age' in my_dict to 31.
my_dict["age"]=31
print(my_dict)

# •	Access and print the value associated with the key 'name' from my_dict.
print(my_dict.get("name"))

# •	Attempt to access a key that does not exist in my_dict.
print(my_dict.get("rollno"))

# Create a tuple named my_info with  name, age, and city. Print the tuple.
my_info=("name","age","city")
print(my_info)

# Given the tuple fruits = ("apple", "banana", "cherry", "date"), print the third fruit using a positive index and the last fruit using a negative index.
fruits = ("apple", "banana", "cherry", "date")
print(fruits[2])
print(fruits[-1])

# Concatenate tuple1 = (1, 2, 3) and tuple2 = (4, 5, 6) and store the result in a new tuple combined_tuple. Print combined_tuple.
tuple1 = (1, 2, 3) 
tuple2 = (4, 5, 6)
result = tuple1+tuple2
print(result)

#  Create a tuple colors = ("red", "blue") and repeat it three times. Print the resulting tuple.
colors = ("red", "blue") 
result_c=colors*3
print(result_c)

#  Find and print the number of elements in the tuple months = ("Jan", "Feb", "Mar", "Apr", "May").
months = ("Jan", "Feb", "Mar", "Apr", "May")
print(len(months))

#  Convert the list my_list = [10, 20, 30] to a tuple and print the result
my_list = [10, 20, 30]
tapal=tuple(my_list)
print(tapal)

# Given a tuple tup_to_modify = ("a", "b", "c"), create a new tuple that contains the original elements plus the new element "d". Print the new tuple.
tup_to_modify = ("a", "b", "c")
new_tuple=tup_to_modify+("d",)
print(new_tuple)

#  Find the maximum and minimum values in the tuple data = (25, 12, 45, 8, 30). Print both values.
data = (25, 12, 45, 8, 30)
print("Max:",max(data))
print("Min:",min(data))

# Count how many times the number 4 appears in the tuple repeated_tup = (1, 4, 5, 4, 2, 4, 6). Print the count.
repeated_tup = (1, 4, 5, 4, 2, 4, 6)
print(repeated_tup.count(4))

# Take Two list
l1=[1,2,3,4]
l2=[5,6,7,8]
print(l1)

# •	Reverse a list in Python
l1.reverse()
print("Reversed:")
print(l1)

# •	Concatenate two lists index-wise
l3=[6,5,4,2]
l4=[7,3,2,4]
result = []
for i in range(min(len(l3), len(l4))):
    result.append(l3[i] + l4[i])
print(result)

# •	Turn every item of a list into its square
# Original list
numbers = [1, 2, 3, 4, 5]
print(numbers)

# Square each element using list comprehension
squared = [x**2 for x in numbers]
print(squared)


# •	Iterate both lists simultaneously
print("Iteration")
l1 = [1, 2, 3, 4]
l2 = [5, 6, 7, 8]

for item1, item2 in zip(l1, l2):
    print(f"l1: {item1}, l2: {item2}")

#Add new item to list after a specified item
l2 = [5, 6, 7, 8]
target_item = 5
new_item = 10

index = l2.index(target_item) + 1
l2.insert(index, new_item)
print(l2)


#Replace list’s item with new value if found

# •	Remove all occurrences of a specific item from a list.
list6 = [1, 2, 3, 2, 4, 2, 5]
x = 2

# Remove all occurrences in-place
while x in my_list:
    my_list.remove(x)

print(list6)

# Tuple
print("Tuple:")


# Reverse the tuple

tuple1 = (10, 20, 30, 40, 50)

# Reverse the tuple using slicing
reversed_tuple = tuple1[::-1]
print("Original:", tuple1)
print("Reversed:", reversed_tuple)

# •	Access value 20 from the tuple
value = tuple1[1]
print("Value at index 1:", value)

# •	 Swap two tuples in Python
tuple1 = (1, 2, 3)
tuple2 = (4, 5, 6)
print("tuple1:", tuple1)
print("tuple2:", tuple2)
tuple1, tuple2 = tuple2, tuple1

print("After swapping:")
print("tuple1:", tuple1)
print("tuple2:", tuple2)
# •	Copy specific elements from one tuple to a new tuple
original_tuple = (10, 20, 30, 40, 50, 60)

new_tuple1 = tuple(original_tuple[i] for i in [0, 2, 4])
print("Method 1 - Copy by indices:", new_tuple1)

# •	Sort a tuple of tuples by 2nd item
tuple_of_tuples = (('Alice', 25), ('Bob', 20), ('Charlie', 30), ('Diana', 22))

# Sort by 2nd item (index 1)
sorted_tuple = tuple(sorted(tuple_of_tuples, key=lambda x: x[1]))
print("Original:", tuple_of_tuples)
print("Sorted by 2nd item:", sorted_tuple)


# •	Counts the number of occurrences of item 50 from a tuple

# Tuple with repeated values
my_tuple = (10, 20, 50, 30, 50, 40, 50)

# Count occurrences of 50
count = my_tuple.count(50)
print("Tuple:", my_tuple)
print("Number of occurrences of 50:", count)

# Dictionary
print("Dictionary:")

# •	 Convert two lists into a dictionary
keys = ['name', 'age', 'city', 'country']
values = ['Alice', 25, 'New York', 'USA']
print(keys)
print(values)
dict1 = dict(zip(keys, values))
print(dict1)

# •	 Merge two Python dictionaries into one
dict1 = {'a': 1, 'b': 2, 'c': 3}
dict2 = {'d': 4, 'e': 5, 'f': 6}

merged_dict1 = dict1.copy()
merged_dict1.update(dict2)
print(merged_dict1)


# •	 Initialize dictionary with default values
print("Initialize dictionary with default values: ")

keys = ['a', 'b', 'c', 'd']
default_value = 0
dict1 = {key: default_value for key in keys}
print(dict1)

# •	Create a dictionary by extracting the keys from a given dictionary

original_dict = {'name': 'Alice', 'age': 25, 'city': 'New York', 'country': 'USA'}

keys_to_extract = ['name', 'age']
new_dict = {key: original_dict[key] for key in keys_to_extract if key in original_dict}
print("Original:", original_dict)
print("Extracted keys:", new_dict)


filtered_dict = {key: value for key, value in original_dict.items() if key in keys_to_extract}
print("Alternative method:", filtered_dict)

# •	 Delete a list of keys from a dictionary
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5}
keys_to_delete = ['b', 'd', 'f']  # 'f' doesn't exist

print("Original dictionary:", my_dict)

dict_copy1 = my_dict.copy()
for key in keys_to_delete:
    dict_copy1.pop(key, None) 
print("Method 1 - Using pop():", dict_copy1)


# •	Check if a value exists in a dictionary
my_dict = {'name': 'Alice', 'age': 25, 'city': 'New York'}
value_to_check1 = 'Alice'
value_to_check2 = 30
exists1 = value_to_check1 in my_dict.values()
exists2 = value_to_check2 in my_dict.values()
print(f"'{value_to_check1}' exists: {exists1}")
print(f"'{value_to_check2}' exists: {exists2}")







