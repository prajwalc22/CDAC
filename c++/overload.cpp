#include <iostream>
using namespace std;

class Overloading
{

public:
    int add(int a, int b)
    {
        return a + b;
        cout << a + b << endl;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
        cout << a + b + c << endl;
    }

    int add(double a, double b)
    {
        return a + b;
        cout << a + b << endl;
    }
    int add(int a, double b)
    {
        return a + b;
        cout << a + b << endl;
    }
};

int main()
{
    int a = 10;
    int b = 12;
    int c = 5;
    Overloading o;
    o.add(a, b, c);
    cout << o.add(a, b) << endl;
    cout << o.add(a, b, c) << endl;
}