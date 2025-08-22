#include <iostream>
using namespace std;

class Transaction
{
protected:
    double amount;
    string accountNumber;
    string transactionId;

public:
    Transaction()
    {
    }
    Transaction(double amt, string accNum, string txnId)
    {
        amount = amt;
        accountNumber = accNum;
        transactionId = txnId;
    }
    virtual void processTransaction() = 0;
};

class Deposit : public Transaction
{
private:
    string depositMethod; // Atm couter online

public:
    Deposit()
    {
        cout << "default for deposit" << endl;
    }
    Deposit(double amt, string accNum, string txnId, string depositmethod) : Transaction(amt, accNum, txnId)
    {
        depositMethod = depositmethod;
    }

    void processTransaction() override
    {
        cout << "process deposit of Rs." << amount << "to account" << accountNumber << endl;
    }

    void processDepositLogic()
    {
        cout << "the amout is deposit is " << amount << "and method" << depositMethod << endl;
    }
};
class LoanPayment : public Transaction
{
private:
    string loanAccountNumber;
    double principleAmount;
    double interestAmount;

public:
    LoanPayment()
    {
        cout << "defaulat constructor" << endl;
    }
    LoanPayment(double amt, string accNum, string txnId, string loanAcc, double principle, double interest) : Transaction(amt, accNum, txnId)
    {

        loanAccountNumber = loanAcc;
        principleAmount = principle;
        interestAmount = interest;
    }
    void processTransaction() override
    {
        cout << "Processing loan payment of Rs." << amount << "for loan" << loanAccountNumber;
    }

    void processLoanSpecificLogic()
    {

        cout << "Processing loan-specific logic:\n";
        cout << " -principle payment: Rs" << principleAmount << endl;
        cout << " -interest payment: Rs" << interestAmount << endl;
        cout << "- updating loan balance and payment schedule\n";
    }
};

int main()
{

    // crete an array of promise of type transactioon to store all transction
    Transaction *transactions[4];
    double amount = 10000;
    string accountNumber = "123";
    string transactionId = "2345";
    

    // add different type of transction to the array
    // process all th transcation

    //     for (int i = 0; i < n; i++)
    //     {
    //         transactions[i]->processTransaction();
    //     }
    //     return 0;
}