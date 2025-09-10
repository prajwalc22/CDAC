# Q-2
# •	Create a base class Vehicle with attributes: make, model, and year. The constructor should initialize these.
# •	Add a method display_info() that prints the basic vehicle information.
# •	Create a child class Car that inherits from Vehicle.
# •	The Car class should have an additional attribute num_doors. The constructor should take make, model, year, and num_doors.
# •	Override the display_info() method in the Car class to also include the number of doors.
# •	Create instances of both Vehicle and Car to demonstrate inheritance and method overriding.

class Vehicle:
    def __init__(self,make , model, year):
        self.make = make
        self.model=model
        self.year=year
    def displayInfo(self):
        print(f"Make: {self.make}")
        print(f"Model: {self.model}")     
        print(f"Year: {self.year}")
    
class Car(Vehicle):
    def __init__(self, make, model, year, num_door):
        super().__init__(make, model, year)
        self.num_door=num_door    
    
    
    def displayInfo(self):
        print(f"Make: {self.make}")
        print(f"Model: {self.model}")     
        print(f"Year: {self.year}")     
        print(f"Doors : {self.num_door}")


v1=Vehicle("Make","Model",2020)
c1=Car("Make1","Model1",2021,4)
v1.displayInfo()
c1.displayInfo()

