#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    auto lambda = [&]()
    { x = x + 5; };
    lambda();

    int y = 10;
    auto lambda1 = [=]()
    { cout << "y+5:" << y + 5 << endl; };
    lambda1();
    cout << "y:" << y << endl;

    cout << "x:" << x << endl;

    int a = 10, b = 20;
    auto lambda2 = [a, &b]()
    { cout <<"a:"<< a << endl;
    b+=5; };
    lambda2();
    cout << "b:" << b;
}