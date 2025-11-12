def fibonacci(n):
   
    a, b = 0, 1
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b
    print()


fibonacci(10)



def fibonacci_iterative(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    
    fib_list = [0, 1]
    for i in range(2, n):
        fib_list.append(fib_list[i-1] + fib_list[i-2])
    return fib_list


result = fibonacci_iterative(10)
print(result)