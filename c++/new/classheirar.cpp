#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    double salary;

public:
    Employee()
    {
    }
    Employee(string nm, int emp_id, double sal)
    {
        name = nm;
        id = emp_id;
        salary = sal;
    }

    virtual double calculateSal()
    {
        return salary;
    }
};

class Manager : public Employee
{
    int teamsize;
    double bonus;

public:
    Manager()
    {
    }
    Manager(int ts, double bns, string nm, int emp_id, double sal) : Employee(nm, emp_id, sal)
    {
        teamsize = ts;
        bonus = bns;
    }

    double calculateSal(double salary, double bonus)
    {
        salary = salary + bonus;
        cout << salary << endl;
        return salary + bonus;
    }

    void assigntask()
    {
        cout << "task assigned!" << endl;
    }
};

class Developer : public Employee
{
    string programming_language;
    int experience;

public:
    Developer()
    {
    }
    Developer(string proglang, int exp, string nm, int emp_id, double sal) : Employee(nm, emp_id, sal)
    {
        programming_language = proglang;
        experience = exp;
    }

    double calculateSal(double salary)
    {
        cout << salary << endl;
        return salary;
    }
    void findbugs()
    {
        cout << "bug found" << endl;
    }
};

int main()
{
    int ts = 4;

    double bonus = 1200;
    string name = "ramesh";
    int id = 12;
    double salary = 10000;
    string prolang = "c++";
    int exp = 12;
    Employee e(name, id, salary);
    Manager m(ts, bonus, name, id, salary);
    Developer d(prolang, exp, name, id, salary);
    Employee *e1 = &m;
    Employee *e2 = &d;
    // return salary;
    e1->calculateSal();
    e2->calculateSal();

    Manager *m1 = dynamic_cast<Manager *>(e1);
    Developer *d1 = dynamic_cast<Developer *>(e2);

    m1->assigntask();
    d1->findbugs();
    Developer *d2 = dynamic_cast<Developer *>(e1);
    if (d2 != nullptr)
    {
        cout << "conversion successful!" << endl;
    }
    else
    {
        cout << "conversion failed" << endl;
    }

    d1->findbugs();

    d2->findbugs();

    Employee *arr[5];
    arr[0] = &e;
    arr[1] = &m;
    arr[2] = &d;

    for (int i = 0; i <= 2; i++)
    {
        arr[i]->calculateSal();
    }
}