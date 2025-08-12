#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // int c = a + b;
    // a = b;
    // b = c;

    if (n <= 0)

    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << fibonacci(i) << " ";
    }
}