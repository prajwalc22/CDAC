# Write a Python function to find the maximum of three numbers. 
def lissum(list2):
  return  sum(list2)


# Create a function that takes a list of numbers and returns their sum.

list1=[1,2,4]
value2 = lissum(list1)
print(value2)


# Write a function with a default argument that prints a greeting.
def greet(name,msg="Hello"):
    print(f"{msg},{name}!")

greet("Ramesh")    


# Write a function is_palindrome() that takes a string as an argument 
# and returns True if the string is a palindrome 
# (reads the same forward and backward) and False otherwise
def is_palindrome(s):
    return s == s[::-1]

# Test it
text = "madam"
if is_palindrome(text):
    print(f"{text} is a palindrome")
else:
    print(f"{text} is not a palindrome")

# Write a function count_case() that accepts a string and returns a
#  dictionary containing the count of uppercase and lowercase letters
def count_case(string):
    count={'upper':0,'lower':0}
    for char in string:
        if char.isupper():
            count['upper']+=1
        elif char.islower():
            count['lower']+=1
    return count             

result=count_case("hElLo mY fRrAnDs")
print(result)
# Write a function unique_list() that takes a list and returns
#  a new list with distinct elements from the first list.
def unique_list(lst):
    unique_elements = []
    for item in lst:
        if item not in unique_elements:
            unique_elements.append(item)
    return unique_elements


original = [1, 2, 2, 3, 4, 4, 5]
result = unique_list(original)
print(result)


