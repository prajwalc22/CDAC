my_set={1,2,3}
print(my_set)
print(my_set)

my_set.update({0,5})
print(my_set)

my_set.remove(5)
print(my_set)

my_set.add(5)
my_set.add(6)
my_set.add(7)

my_set.discard(6)
print(my_set)

set1={1,2,3,4}
set2={3,4,5}

result1=set1.union(set2)
print("Union:" ,result1)
result2=set1.intersection(set2)
print("Intersection",result2)

result3=set1.difference(set2)
print("Difference:",result3)


my_set2={1,2,3}
# new_set = my_set2.copy()
new_set = my_set2

print(id(new_set))
print(id(my_set2))
