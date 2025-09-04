list=[1,2,3,4,5]
print("Original list:",list)


print("Third ele:",list[2])



print("Last ele:",list[-1])



list[1]=6
print("Updated list:",list)



list[2:4]=[7,8,9]
print("Updated list after replacing a slice of a list with new elements",list)
print(list)

print("Accessign element by index:")
print(list[0])
print(list[-1])
print(list[2])


print("Add an element to the end of a list using append().")	
list.append(10)
print(list)

print("Insert an element at a specific position using insert().")

list.insert(2,22)
print(list)

print("Remove an element by value using remove().")
	
list.remove(22)
print(list)


print("Remove an element by index using del or pop().")
list.pop(5)
print(list)

print("Find the length of a list using len().")	
print(len(list))

print("Sort the elements in the list in descending order")	
list.sort()
print(list)
list.sort(reverse=True)
print(list)

print("Find the index of the first occurrence of an element.")
my_list = [10, 20, 30, 20, 40]
element = 20
index = my_list.index(element)

print("First occurrence of", element, "is at index:",index)


print("Count the occurrences of a specific element in a list.")	
list2=[7,8,9,7,7,7,7]
print(list2)
print(list2.count(7))

print("Find the sum or average of elements in a list.")	
sum=sum(list2)
print("Sum",sum)

print("Find the largest or smallest element in a list.")

print("Smallest",min(list))
print("Largest",max(list))

















