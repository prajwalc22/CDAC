list=[1,2,3,4,5]

# •	Access the third element of a given list.
print(list[2])


# •	Access the last element of a list using negative indexing.
print(list[-1])


# 	Change the value of a specific element in a list.
list[1]=6
print(list)


# •	Replace a slice of a list with new elements.
list[2:4]=[7,8,9]
print(list)

# Access elements by index (e.g., first, last, a specific element).
print(list[0])
print(list[-1])
print(list[2])

# •	Add an element to the end of a list using append().
list.append(10)
print(list)


# •	Insert an element at a specific position using insert().
list.insert(2,22)
print(list)

# •	Remove an element by value using remove().
list.remove(22)
print(list)

# •	Remove an element by index using del or pop().
list.pop(5)
print(list)

# •	Find the length of a list using len().
print(len(list))


# •	Sort the elements in the list in descending order
list.sort()
print(list)

# •	Find the index of the first occurrence of an element. 
list.sort(reverse=True)
print(list)

# •	Count the occurrences of a specific element in a list.
list2=[7,8,9,7,7,7,7]
print(list2.count(7))

# •	Find the sum or average of elements in a list.
sum=sum(list2)
print(sum)

# •	Find the largest or smallest element in a list.
print(min(list))
print(max(list))

















