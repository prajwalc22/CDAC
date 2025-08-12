#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

int main()
{
    A a1;
    a1.x = 10;
    cout << a1.x << endl;
    // creating another object usig a1
    A a2(a1); // copy constructor calling
    cout << a2.x;
}