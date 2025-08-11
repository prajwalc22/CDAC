#include <iostream>
using namespace std;

class Students
{

public:
    // data members
    string name;

    int age;
    int rno;

    // methods
    void getDetails()
    {
        // method defination
        cout << name << endl
             << age << endl
             << rno << endl;
    }
};

int main()
{
    Students s;
    s.name = "name";
    s.age = 22;
    s.rno = 7;
    s.getDetails();

    Students s2;
    s2.name = "name2";
    s2.age = 24;
    s2.rno = 8;

    s2.getDetails();
    // return 0;

    // getDetails();
}