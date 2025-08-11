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

    void deposit(float depositamt)
    {
        float newbalance1 = depositamt + balance;
        cout << newbalance1 << endl;
        // return newbalance;
    }

    void withdraw(float withdrawamt)
    {
        float newbalance2 = balance - withdrawamt;
        cout << newbalance2 << endl;
    }
};

int main()
{

    bank transaction1;
    int accNo;
    string holder;
    float ball;
    int depositamt;
    int withdrawamt;
    cout << "Enter your account number , your name and your balance:" << endl;
    cin >> accNo >> holder >> ball;
    cout << "Enter the amount you want to deposit:" << endl;
    cin >> depositamt;
    cout << "Enter the amount you want to withdraw:" << endl;
    cin >> withdrawamt;
    transaction1.setAccountDetails(accNo, holder, ball);
    transaction1.deposit(depositamt);
    // transaction1.withdraw();
}