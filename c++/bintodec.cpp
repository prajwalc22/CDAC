#include <iostream>
using namespace std;

int dectobin(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }

    return (dectobin(n / 2) * 10 + (n % 2));
}

int main()
{

    int n;
    cin >> n;
    // cout << n % 2;
    // for (int i = 0; i < n; i++)
    // {

    // }

    cout << dectobin(n);
}