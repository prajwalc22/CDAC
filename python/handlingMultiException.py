try:
    number  = int(input("Enter a number: "))
    result = 10 / number
except ValueError:
    print("Please enter a valid integer.")
except ZeroDivisionError:
    print("Number cannot be zero.")        