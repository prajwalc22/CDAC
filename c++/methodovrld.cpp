#include <iostream>
using namespace std;

class Employee
{
protected:
    string emp_name;
    int emp_id;
    int basic_salary;

public:
    Employee()
    {
        cout << "default constructor for Employee" << endl;
    }

    Employee(string name, int id, int salary)
    {
        emp_name = name;
        emp_id = id;
        basic_salary = salary;
    }
    virtual double calculatePay()
    {
        return basic_salary;
    }
};

class Manager : public Employee
{
private:
    int bonus;

public:
    Manager()
    {
        cout << "default const for Manager" << endl;
    }

    Manager(int bns, string name, int id, int salary) : Employee(name, id, salary)
    {
        bonus = bns;
    }

    virtual double calculatePay()
    {
        return basic_salary + bonus;
    }
};

class Worker : public Employee
{

protected:
    int hourly_wage;
    int hours_worked;

public:
    Worker()
    {
        cout << "default coonst for worker" << endl;
    }

    Worker(int wages, int hours, string name, int id, int salary) : Employee(name, id, salary)
    {
        hourly_wage = wages;
        hours_worked = hours;
    }
    virtual double calculatePay()
    {
        return hourly_wage * hours_worked;
    }
};

int main()
{
    Employee *e;
    Manager m(5000, "Pajwal", 20, 50000);
    Worker w(30, 40, "Prajwal", 20, 0);
    e = &m;
    e->calculatePay();
    e = &w;
    e->calculatePay();
}