#include <iostream>
using namespace std;
class BankAccount
{
    string accountNumber;
    string ownerName;
    double balance;

    BankAccount(string accNo, string ownName, double bal)
    {
        accountNumber = accNo;
        ownerName = ownerName;
        balance = bal;
    }
    static int totalAccounts;
    static double totalBankMoney;
    static double interestRate;
    static string bankName;
    static void display();
};

// int StaticDemo::y = 20;

int BankAccount::totalAccounts = 100;
double BankAccount::totalBankMoney = 10000000000;
double BankAccount::interestRate = 16;
string BankAccount::bankName = "SBI";

void BankAccount::display()
{
    cout << BankAccount::totalAccounts << endl;
}

int main()
{
}