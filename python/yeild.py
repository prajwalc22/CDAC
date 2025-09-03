def evenOdd(x):
    if(x % 2 == 0):
        print("even")
        yield
    else:
        print("odd")   

next(evenOdd(6))