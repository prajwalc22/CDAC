#include <iostream>
using namespace std;

//    int x = 10;
//     auto lambda = [&]()
//     { x = x + 5; };
//     lambda();

int main()
{

    // string op;
    // cin >> op;
    double a = 10, b = 12;
    char o;
    cin >> o;

    auto add = [=](double a1, double b1)
    {
        return a + b;
    };

    auto substract = [&](double a, double b)
    {
        return a - b;
    };

    auto multiply = [&](double a, double b)
    {
        return a * b;
    };

    auto divide = [&](double a, double b)
    {
        return a / b;
    };
    switch (o)
    {
    case ('+'):
        // add();
        cout << add(a, b) << endl;
        break;

    case ('-'):
        // add();
        cout << substract(a, b) << endl;
        break;
    case ('*'):
        // add();
        cout << multiply(a, b) << endl;
        break;
    case ('/'):
        // add();
        cout << divide(a, b) << endl;
        break;

    default:
        break;
    }

    // cout << add(a, b);
}