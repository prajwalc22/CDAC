#include <iostream>
using namespace std;

class vehicle
{

public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class Car : public vehicle
{
public:
    Car()
    {
        cout << "This vehicle is car" << endl;
    }
};

int main()
{
    Car obj;
    return 0;
}