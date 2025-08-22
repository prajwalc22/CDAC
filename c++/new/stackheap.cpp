#include <iostream>
using namespace std;
class Student
{
public:
    Student()
    {
    }

    Student(string name)
    {
    }
};

Student *s1 = new Student("alice");
Student *students = new Student[2]{Student("Bob"),
                                   Student("Carol")};
int main()
{
    delete s1;
    delete[] students;
}