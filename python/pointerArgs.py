def myfun(name ,age,*argv):
    print(name,age,*argv)
    for i in argv:
        print(i)

myfun('ABC',25, 'Hello','Welcom','to','College')
