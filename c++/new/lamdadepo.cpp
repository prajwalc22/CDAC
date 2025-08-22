#include <iostream>
using namespace std;
int main()
{
    int deposit = 500;
    int withdraw = 200;

    auto change_bal = [&](int d1, int d2)
    {
        return deposit - withdraw;
    };

    cout << change_bal(deposit, withdraw);
}