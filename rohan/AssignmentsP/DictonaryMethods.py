    # clear() 

my_dict = {'name': 'Alice', 'age': 25, 'city': 'New York'}
my_dict.clear()
print("Cleared Dict : ", my_dict)

# pop() 
marks = { 'Physics': 67, 'Chemistry': 72, 'Math': 89 }
element = marks.pop('Chemistry')
print('Popped Marks:', element)

    #Copy()
dict = {'1' : 'Rohan' ,'2' : 'Kumbhar'}
new_dict = dict.copy()
print("Copied dict : " , new_dict)

    #fromkeys()

keys = {'rk', 'pk', 'dk', 'zk'} 
value = '1'  
dictionary = dict.fromkeys(keys, value)
print("Added Both dict's : ", dictionary)

    #get()
score ={"Physics" : 60, "Math" : 85, "English" : 96}
result = score.get("Math")
print("Marks pf Math is :" , result)

    #items()
score ={"Physics" : 60, "Math" : 85, "English" : 96}
print(score.items())

    #keys()
score ={"Physics" : 60, "Math" : 85, "English" : 96}
final = score.keys()
print("Dict using keys: ", final)

    #values()
score1 ={"Physics" : 60, "Math" : 85, "English" : 96}
final2 = score1.values()
print("Dict using values : ", final2)

    #update()

marks = {'Physics':67, 'Maths':87}
internal_marks = {'Practical':48}
marks.update(internal_marks)
print("Updated Marks :" , marks)

