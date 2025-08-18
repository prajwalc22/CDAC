#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string holderName;
    int balance;
    string pin;

public:
    BankAccount()
    {
    }

    BankAccount(int accNo, string holName, int bal, string peen)

    {
        accountNumber = accNo;
        holderName = holName;
        balance = bal;
        pin = peen;
    }

    void displayPublicInfo()
    {
        cout << accountNumber << endl;
        cout << holderName << endl;
        cout << balance << endl;
    }

    friend class Bank;
};
class Bank
{

    void createMonthlyStatement() {}
    void addInterest() {}
    void restPin() {}
    // pure virtual function is a must
    friend void atm_transaction(BankAccount &ba, string entered_pin, double amount);
};
void atm_transaction(BankAccount &ba, string entered_pin, double amount)
{
    cout << "performs withdrawl with pin verification" << endl;
    cout << "checks balance and display success/failure messages" << endl;
    // check whether entered pin is correct

    // if (entered_pin == ba.pin)
    // {
    //     /* code */
    // }

    // check whether amount is less than account balance
}

int main()
{
    // account details
    int accountNumber = 4321;
    string holder_name = "ramcharan";
    int balance = 100;
    string pin = "1234";
    double amount;
    string entered_pin = "1235";

    BankAccount ba(accountNumber, holder_name, balance, pin);
    ba.displayPublicInfo();

    atm_transaction(ba, entered_pin, amount);
    // ba.displayPublicInfo();
    // Bank b1;
}