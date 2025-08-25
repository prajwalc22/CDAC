#include <iostream>
using namespace std;
enum class season
{
    spring,
    summer,
    autumn,
    winter
};
enum class course
{
    DAC,
    DDDA,
    HPCAI
};
int main()
{

    enum season seasonVar = season::spring;
    course course_Var = course::DAC;

    int s = static_cast<int>(seasonVar);
    int c = static_cast<int>(course_Var);

    cout << s << endl;
    cout << c;
}