// Parent Class:employee
// child class

#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;
    string department;
    double salary;

public:
    Employee()
    {
        cout << "Default const for employee" << endl;
    }

    Employee(int id, string nm, string dept, double sal)
    {
        emp_id = id;
        name = nm;
        department = dept;
        salary = sal;
        cout << "parameterised constructor for employee" << endl;
    }
};
// Child 1 manager
class Manager : public Employee
{
private:
    int teamsize;
    double bonus;

public:
    Manager() : Employee()
    {
        cout << "Default constructor for manager" << endl;
    }

    Manager(int tmsz, double bns, int id, string nm, string dept, double sal) : Employee(id, nm, dept, sal)

    {
        teamsize = tmsz;
        bonus = bns;
        cout << "parameterised constructor for manager" << endl;
    }
    void getLeave()
    {
        cout << "manager is on leave" << endl;
    }
};

// child 2 developer

class Developer : public Employee

{
private:
    string programming_language;
    int number_of_projects;

public:
    Developer() : Employee()
    {
        cout << "Default constructor for developer" << endl;
    }

    Developer(string pg_lang, int prjt, int id, string nm, string dept, double sal) : Employee(id, nm, dept, sal)
    {
        programming_language = pg_lang;
        number_of_projects = prjt;
        cout << "parameterised constructor for developer" << endl;
    }
};

int main()
{
    int emp_id;
    string name;
    string department;
    double salary;
    int teamsize;
    double bonus;
    string programming_language;
    int number_of_projects;

    Employee e;
    Manager m;
    Developer d;
    Manager l;
    l.getLeave();
}