#include <iostream>
using namespace std;
class Grade
{

public:
    Grade()
    {
    }
    double calculateGpa(double marks[])
    {
        double count = 0;
        double grade;
        for (int i = 0; i < 5; i++)
        {
            count += marks[i];
        }
        if (count < 300)
        {
            grade = 3.0;
        }
        else if (count < 400)
        {
            grade = 4.0;
        }
        else if (count <= 500)
        {
            grade = 5.0;
        }

        // cout << grade << endl;
        return grade;
    }
};
int main()
{
    double count = 0;
    double grade;
    double marks[5] = {30, 40, 50, 60, 70};
    Grade g;
    double result = g.calculateGpa(marks);
    cout << "Grade: " << result << endl;
}