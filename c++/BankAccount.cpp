#include <iostream>
using namespace std;

class BankAccount
{

protected:
    int accountNumber;
    string holderName;
    double balance;

public:
    BankAccount()
    {
        cout << "default const for banaccount" << endl;
    }

    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    double deposit(double amount)
    {
        cout << "needs to return the amount after the deposit" << endl;
        balance = balance + amount;
        return balance;
    }

    double withdraw(double amount)
    {

        cout << "needs to display the amount after withdraw" << endl;
        balance = balance - amount;
        return balance;
    }
};
// child 1
class SavingsAccount : public BankAccount
{
private:
    double interestRate;
    double minimumBalance;
    int maturityPeriod;

public:
    SavingsAccount()
    {
        cout << "default constructor for savingsacc" << endl;
    }

    SavingsAccount(double inte_rate, double min_bal, int matu_per, int accNo, string name, double bal) : BankAccount(accNo, name, bal)
    {
        cout << "parameterised const for savingsac" << endl;
        interestRate = inte_rate;
        minimumBalance = min_bal;
        maturityPeriod = matu_per;
    }

    int calculateInterest(double inte_rate, double min_bal, int matu_period, int interest)
    {
        cout << "interest is calculated here" << endl;
        interest = (min_bal * inte_rate * matu_period) / 100;
        return interest;
    }

    void renewAccount()
    {
        cout << "account renewal after maturity" << endl;
        cout << "your account is due for renewal" << endl;
    }
    void display()
    {
        cout << interestRate << minimumBalance << maturityPeriod << endl;
    }
};
// child 2
class CurrentAccount : public BankAccount
{
private:
    double overdraftLimit;
    double transactionFee;
    string businessType;

    CurrentAccount()
    {
        cout << "default constructor for curracc" << endl;
    }

    CurrentAccount(double od_limit, double trans_fee, string bus_type, int accNo, string name, double bal) : BankAccount(accNo, name, bal)
    {
        overdraftLimit = od_limit;
        transactionFee = trans_fee;
        businessType = bus_type;
    }

public:
    bool processBusinessTransaction(double amount, double transaction_fee)

    {
        if (amount + transaction_fee <= balance + overdraftLimit)
        {
            balance = balance - (amount + transactionFee);
            cout << "Transaction Successful!" << endl;
            return true;
        }
        else
        {
            cout << "Transaction Failed!" << endl;
            return false;
        }
        // status
    }

    double getOverdraftInfo(double overdraftLimit)
    {
        return overdraftLimit;
    }

    void display()
    {
        cout << overdraftLimit << transactionFee << businessType << endl;
    }
};

int main()
{
}