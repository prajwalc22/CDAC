#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int emp_id;
    int basic_salary;

public:
    Employee()
    {
        name = "default";
        emp_id = 0;
        basic_salary = 0;
        cout << "default constructor for employee" << endl;
    }

public:
    Employee(string names, int id, int salary)
    {
        cout << "parameterised constructor for employee" << endl;
        name = names;
        emp_id = id;
        basic_salary = salary;
    }
};
class Manager : public Employee
{
    string department;
    int bonus;

public:
    Manager()
    {
        cout << "default const for manager" << endl;
        department = "default dept";
        bonus = 0;
    }

public:
    Manager(string names, int id, int salary, string dept, int bons)
    {
        Employee(names, id, salary);
        cout << "parameterised constructor for manager" << endl;
        department = dept;
        bonus = bons;
    }
    void displayManager()
    {
        cout << "Manager Details" << endl;
    }
    void getLeave()
    {
        cout << "manager is on leave" << endl;
    }
};

int main()
{
    string name = "ramesh";
    int id = 123;
    int salary = 10000;
    string dept = "sales";
    int bonus = 2000;
    Employee e1(name, id, salary);
    Manager m(name, id, salary, dept, bonus);
    m.displayManager();
    Manager l;
    l.getLeave();
}