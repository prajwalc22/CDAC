#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    A()
    {
        x = 5;
    }
    friend class B;
    // friend void display(A a1);
};
class B
{
    friend void display(A a1);
};
void display(A a1)
{
    cout << a1.x;
}

int main()
{
    A a;
    B b;
    display(a);
}
