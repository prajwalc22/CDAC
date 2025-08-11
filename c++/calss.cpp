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
    }
};

int main()
{
    Students s;
    s.name = "Kaitari";
    s.age = 22;
    s.rno = 7;

    cout << s.name << endl
         << s.age << endl
         << s.rno << endl;
}