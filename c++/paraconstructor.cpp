#include <iostream>
using namespace std;

class students
{
public:
    int rno;
    string name;
    int age;
    students()
    {
        cout << "Default constructor invoked" << endl;
    }

    // public:
    students(int rollno, string nm, int ag)
    {
        rno = rollno;
        name = nm;
        age = ag;
        cout << "parameterised invoked" << endl;
        ;
    }

    students(const students &s)
    {
        cout << "copy constructor invoked" << endl;
        rno = s.rno;
        name = s.name;
        age = s.age;
    }

    ~students()
    {
        cout << "destructor invoked" << endl;
    }
};

int main()
{

    // students s1;

    int rollnumber = 11;
    string name1 = "ramesh";
    int aage = 24;
    students s2(rollnumber, name1, aage);

    students s3(s2);
}