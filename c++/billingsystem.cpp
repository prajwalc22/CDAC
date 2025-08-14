#include <iostream>
using namespace std;
class Bill
{
protected:
    string cust_name;
    string address;
    int bill_no;
    string bill_date;
    double fixed_charge;
    double tax_percentage;

public:
    Bill()
    {
        cout << "default const for bill" << endl;
    }

    Bill(string name, string addr, int bilno, string billdate, double fixchrg, double taxperc)
    {
        cust_name = name;
        address = addr;
        bill_no = bilno;
        fixed_charge = fixchrg;
        tax_percentage = taxperc;
    }

    virtual int generateBill()
    {
        return bill_no;
    }
};

class electricityBill : public Bill
{
protected:
    int unitsConsumed;
    double ratePerUnit;

public:
    electricityBill()
    {
    }

    electricityBill(int unitcon, double rateperunit, string name, string addr, int bilno, string billdate, double fixchrg, double taxperc) : Bill(name, addr, bilno, billdate, fixchrg, taxperc)
    {

        unitsConsumed = unitcon;
        ratePerUnit = rateperunit;
    }
    virtual int generateBill()
    {
        return (unitsConsumed * ratePerUnit) + fixed_charge;
        // cout <<  << endl;
    }
};

class waterBill : public Bill
{
protected:
    int liters_consumed;
    double ratePerLiter;

public:
    waterBill()
    {
    }

    waterBill(int liters, double rateperlitr, string name, string addr, int bilno, string billdate, double fixchrg, double taxperc) : Bill(name, addr, bilno, billdate, fixchrg, taxperc)
    {
        liters_consumed = liters;
        ratePerLiter = rateperlitr;
    }

    virtual int generateBill()
    {
        return (liters_consumed * ratePerLiter) + fixed_charge;
    }
};
int main()
{
    Bill *b;
    electricityBill e(100, 15, "Prajwal", "Pune", 22, "22-8-25", 50, 18);
    waterBill w(1000, 15, "Prajwal", "Pune", 23, "22-8-25", 40, 18);
    b = &e;
    b->generateBill();
    b = &w;
    b->generateBill();
}
