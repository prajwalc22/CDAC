def myfun(**kwargs):
    for key,value in kwargs.items():
        print("%s : %s " % (key ,value))

myfun(first='hello',mid ='world',last='today')
myfun(firstname='jay',lastname='kumar')
myfun()