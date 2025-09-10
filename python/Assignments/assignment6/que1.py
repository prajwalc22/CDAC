# •	Q-1
# •	Create a Student class with the following attributes: name, age, and student_id.
# •	The constructor should initialize these attributes.
# •	Add a method display_info() that prints the student's details in a user-friendly format.
# •	Add a method is_eligible_to_vote() that returns True if the student's age is 18 or older, and False otherwise.
# •	Create a student object and test all the methods

class Students():
    def  __init__(self,Name,Age,Stu_id):
        self.name=Name
        self.age=Age
        self.stu_id=Stu_id

    def displayInfo(self):
        print(f"Name:{self.name}")
        print(f"Age:{self.age}")
        print(f"ID:{self.stu_id}")

    def isEligible(self):
        if self.age <18:
            return False
        else:
            return True
        


s1 =Students("Ramesh",12,12345)
s1.displayInfo()
s1.isEligible()


