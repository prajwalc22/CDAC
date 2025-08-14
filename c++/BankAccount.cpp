#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    string holderName;
    double balance;
    string openingDate;

public:
    BankAccount()
    {
        cout << "default const for bankaccount" << endl;
    }
    BankAccount(int accNo, string name, double bal, string date)
    {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
        openingDate = date;
    }
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "deposited " << amount << ", new balance: " << balance << endl;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "withdrawn " << amount << ", new balance: " << balance << endl;
        }
        else
        {
            cout << "insufficient balance" << endl;
        }
    }
    double checkBalance()
    {
        return balance;
    }
};

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
    SavingsAccount(double inte_rate, double min_bal, int matu_per, int accNo, string name, double bal, string date) : BankAccount(accNo, name, bal, date)
    {
        cout << "parameterised const for savingsacc" << endl;
        interestRate = inte_rate;
        minimumBalance = min_bal;
        maturityPeriod = matu_per;
    }
    double calculateInterest()
    {
        double interest = (balance * interestRate * maturityPeriod) / 100;
        cout << "interest calculated: " << interest << endl;
        return interest;
    }
    void renewAccount()
    {
        cout << "account renewal after maturity" << endl;
        cout << "your account is due for renewal" << endl;
    }
};

class CurrentAccount : public BankAccount
{
private:
    double overdraftLimit;
    double transactionFee;
    string businessType;

public:
    CurrentAccount()
    {
        cout << "default constructor for curracc" << endl;
    }
    CurrentAccount(double od_limit, double trans_fee, string bus_type, int accNo, string name, double bal, string date) : BankAccount(accNo, name, bal, date)
    {
        overdraftLimit = od_limit;
        transactionFee = trans_fee;
        businessType = bus_type;
    }
    void processBusinessTransaction(double amount)
    {
        double totalAmount = amount + transactionFee;
        if (totalAmount <= balance + overdraftLimit)
        {
            balance = balance - totalAmount;
            cout << "Transaction Successful! Amount: " << amount << " Fee: " << transactionFee << " New balance: " << balance << endl;
        }
        else
        {
            cout << "Transaction Failed! Insufficient funds including overdraft" << endl;
        }
    }
    void getOverdraftInfo()
    {
        cout << "Overdraft limit: " << overdraftLimit << endl;
    }
};

int main()
{
    SavingsAccount savings(5.5, 1000.0, 12, 12345, "Pajwal", 5000.0, "2024-01-01");
    savings.deposit(1000);
    savings.withdraw(500);
    cout << "Current balance: " << savings.checkBalance() << endl;
    savings.calculateInterest();
    savings.renewAccount();

    cout << endl;

    CurrentAccount current(10000.0, 50.0, "Retail", 67890, "Prajwal", 15000.0, "2024-02-01");
    current.deposit(2000);
    current.processBusinessTransaction(1500);
    cout << "Current balance: " << current.checkBalance() << endl;
    current.getOverdraftInfo();

    return 0;
}