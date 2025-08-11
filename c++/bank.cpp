#include <iostream>
using namespace std;

class bank
{
private:
    int accountNumber;
    string accountHolder;
    float balance;

public:
    void setAccountDetails(int accNo, string holder, float ball)
    {
        accountNumber = accNo;
        accountHolder = holder;
        balance = ball;
    }

    void deposit()
    {
        float newbalance1 = balance + 1000;
        cout << newbalance1 << endl;
        // return newbalance;
    }

    void withdraw()
    {
        float newbalance2 = balance - 1000;
        cout << newbalance2 << endl;
    }
};

int main()
{

    bank transaction1;
    int accNo;
    string holder;
    float ball;
    cin >> accNo >> holder >> ball;
    transaction1.setAccountDetails(accNo, holder, ball);
    transaction1.deposit();
    transaction1.withdraw();
}