
#include <iostream>
using namespace std;
class Student
{
    string name;
    int rollNumber;
    static int totalStudents;

public:
    Student()
    {
    }
    Student(string name1, int rno)
    {
        name = name1;
        rollNumber = rno;
        totalStudents++;
    }

    void display()
    {
        cout << "Student Details:" << name << endl;
        cout << rollNumber << endl;
        cout << totalStudents << endl;
    }
};

int Student::totalStudents = 50;
int main()

{
    string name = "ramesh";
    int rollNo = 22;
    Student s(name, rollNo);
    s.display();
}