    #append()
series1 = ["Rohan","Soham","Amar"]
series1.append('Sham') 
print("Added in Series :" , series1)

    #insert(index, element)
name= ["Rohan","Soham","Amar"]
name.insert(1,'RK')
print("Inserted Element is :" , name)

    #extend(iterable)
list = ([1,2,3,4])
list.extend([5,6,7,8])
print("Total List is : ", list)

    #remove()
series1 = ["Rohan","Soham","Amar"]
series1.remove("Amar")
print("Final list is : " , series1)

    #pop(index)
items = ["Rohan","Soham","Amar",'a', 'b', 'c', 'd',5,6,7,8 ]
last_item = items.pop()     
second_item = items.pop(4)   
print("Remaining Items :" , items)  

    #remove()
items = ["Rohan","Soham","Amar",'a', 'b', 'c', 'd',5,6,7,8 ]
items.clear()
print("Remaing Items : " , items)

    #index(element, start, end)
letters = ['a', 'b', 'c', 'b', 'd']
print(letters.index('b'))    
print(letters.index('b', 2))  

    #Count
numbers = [1, 2, 2, 3, 2, 4]
print("Count is : " , numbers.count(2))  

    #reverse()
numbers = [1, 2, 2, 3, 2, 4]
numbers.reverse()
print("Reversed : ", numbers)
