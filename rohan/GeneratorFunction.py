def generator():
    t = 1
    print('First result is ', t)
    yield t 

    t = t+1
    print('Second result is ', t)
    yield t 

    t=t+1
    print('Third result',t )
    yield t

call = generator()
next(call)
next(call)
next(call)