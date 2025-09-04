def calculate(a,b):
    x=a+b
    y=a-b
    z=a*b
    u=a/b
    return x,y,z,u
result =calculate(10,20)
print(result)
for i in result:
    print(i)