#include <iostream>
using namespace std;

class Vehicle
{
private:
    int year;
    string brand;
    double speed;

public:
    Vehicle()
    {

        cout << "Default Constructor for vehicle" << endl;
    }

public:
    Vehicle(int yr, string brnd, double spd)
    {
        year = yr;
        brand = brnd;
        speed = spd;

        cout << "Parameterised Constructor for vehicle" << endl;
    }
};

class Car : public Vehicle
{
public:
    string fuel_type;
    int milage;

    Car() : Vehicle()
    {
        cout << "this is a default constructor for car" << endl;
    }

    Car(int yr, string brnd, double spd, string ftyp, int mlg) : Vehicle(yr, brnd, spd)
    {
        fuel_type = ftyp;
        milage = mlg;

        cout << "This is a parameterised constructor for car" << endl;
    }
};

class Electric : public Car
{
public:
    int battery_cap;
    string charging_type;

    Electric() : Car()
    {
        cout << "Default Constructor for electric" << endl;
    }

    Electric(int yr, string brnd, double spd, string ftyp, int mlg, int bat_cap, string ch_typ) : Car(yr, brnd, spd, ftyp, mlg)
    {

        battery_cap = bat_cap;
        charging_type = ch_typ;

        cout << "Parameterised constructor for electric" << endl;
    }
};

int main()
{

    int yearr;
    string brandd;
    double speedd;
}