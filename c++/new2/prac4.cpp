#include <iostream>
using namespace std;

class Employee
{
    string name;
    int ID;
    string dept;

public:
    Employee()
    {
        name = "emp";
    }
    Employee(string nm, int id, string department)
    {
        name = nm;
        ID = id;
        dept = department;
        cout << "para const invoked" << endl;
    }
    Employee(const Employee &emp)
    {
        this->name = emp.name;
    }
    ~Employee()
    {
        cout << "Destructor invoked" << endl;
    }
};
int main()
{

    Employee emp("Ramesh", 23, "Civil");

    Employee emp2 = emp;
}   