#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b)
{
    if (a > b)
    {
        // cout << a << endl;
        return a;
    }
    else if (b > a)
    {
        // cout << b << endl;
        return b;
    }
    // return T;
}

int main()
{
    cout << findMax(2, 5) << endl;
    cout << findMax(3.141, 2.222) << endl;
    cout << findMax('a', 'c') << endl;
    cout << findMax("A", "a") << endl;
}