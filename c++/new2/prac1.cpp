#include <iostream>
using namespace std;
class Mobile
{
private:
    string brand;
    string model;
    double price;
    int storage;

public:
    Mobile()
    {
        // cout << "This is a default constructor" << endl;
    }
    Mobile(string br, string mdl, double pri, int stor)
    {
        brand = br;
        model = mdl;
        price = pri;
        storage = stor;
    }

    void display_specifications(string brand, string model, double price, int storage)
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model;
        cout << "Storage: " << storage;
        cout << "Price is: " << price << endl;

        if (price < 20000)
        {
            cout << "It is affordable" << endl;
        }
        else
        {
            cout << "It is not affordable" << endl;
        }
    }
};

int main()
{
    string brand = "Google";
    string model = "Pixel 7";
    double price = 31000;
    int storage = 128;

    Mobile m;
    m.display_specifications(brand, model, price, storage);
}