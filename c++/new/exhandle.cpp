#include <iostream>

using namespace std;

int divide(int n, int d)
{
    if (d == 0)
    {
        throw runtime_error("Division by zero error");
    }
    return n / d;
}

int main()
{
    try
    {
        int n = 10;
        int d = 0;
        int result = divide(n, d);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
