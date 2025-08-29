#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accno;
    double balance;

public:
    BankAccount()
    {
    }
    BankAccount(int acno, double bal)
    {
        accno = acno;
        balance = bal;
    }

    void check_balance(double balance)
    {
        cout << "Balance: " << balance << endl;
    }
    void deposit(double balance, int amount)
    {
        balance = balance + amount;
        cout << "Balance after deposit: " << balance << endl;
    }
    void withdraw(double balance, int amount)
    {
        balance = balance - amount;
        cout << "Balance after withdraw: " << balance << endl;
    }
};
int main()
{
    int accno = 1234;
    double balance = 25000;
    int amount = 5000;

    BankAccount b1;
    b1.check_balance(balance);
    b1.deposit(balance, amount);
    b1.withdraw(balance, amount);
}