#include <iostream>
using namespace std;
template <typename T>
T addTemplate(T a, T b)
{
    return a + b;
    cout << a + b << endl;
}

int main()
{
    cout << addTemplate(4, 5) << endl;
    cout << addTemplate(6, 7) << endl;
    cout << addTemplate(7, 8) << endl;
}