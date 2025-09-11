# Q.3
# •  Employee Management System:
# •	Create a base class Employee with attributes name, employee_id, and salary.
# •	Create a derived class Manager that inherits from Employee and has an additional attribute for a list of employees they manage.
# •	Add methods to both classes, such as a method in Manager to add an employee to their managed list.

class Employee:
    def __init__(self,name,emp_id,salary):
        self.name=name
        self.emp_id=emp_id
        self.salary=salary
    def displayInfo(self):
        print(f"Name={self.name}")
        print(f"Name={self.emp_id}")
        print(f"Name={self.salary}")


class Manager(Employee):
    l=list()
    def __init__(self, name, emp_id, salary,li):
        super().__init__(name, emp_id, salary)
        self.l=li

    def displayInfo(self):
        for i in self.l:
         print(f"Employees :{i}")

list = ['One','Two','Three','Four']
e1=Employee("Ramesh",1234,20000)
m1=Manager("Suresh",1235,20001,list)
e1.displayInfo()
m1.displayInfo()



