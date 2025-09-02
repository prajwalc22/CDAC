my_dict={'a':1 , 'b':2}
print(my_dict)

my_dict={'a':1 , 'b':2}
new_dict = my_dict.copy
print(id(my_dict))
print(id(new_dict))

my_dict.clear()
print(my_dict)

my_dict={'a':1 , 'b':2}

keys =['a','b','c']
new_dict = dict.fromkeys(keys,0)
print(new_dict)


keys = ['Name','age','city']
values = ['rk' , '20000', 'pak']
dict_from_lists= dict(zip(keys,values))
print(dict_from_lists)

#Get()

dict = {'a':1,'b':2}
print(dict.get('a'))
print(dict.get('c', 'Not Found'))