class InvalidAgeError(Exception):
    pass #idk
age = -5
try:
    if age < 0:
        raise InvalidAgeError("Age cannot be negative!")
except InvalidAgeError as e:
    print("Error:",e)        