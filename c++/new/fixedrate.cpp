#include <iostream>
using namespace std;
int main()
{
    int bal = 1000;
    int interest_rate = 5;
    auto acount_bal = [&](int b, int ir)
    {
        return (bal + (bal * interest_rate) / 100);
    };

    cout << acount_bal << endl;
}