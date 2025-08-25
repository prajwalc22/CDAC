#include <iostream>
using namespace std;
enum season
{
    spring,
    summer,
    autumn,
    winter
};
enum course
{
    DAC,
    DDDA,
    HPCAI
};
int main()
{

    enum season seasonVar = spring;
    enum course course_Var = DAC;
    cout << seasonVar;
    if (seasonVar == course_Var)
    {
        // cout << true << endl;
        return true;
    }
}