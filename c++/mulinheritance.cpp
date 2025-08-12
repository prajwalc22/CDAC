#include <iostream>
using namespace std;
class landvehicles
{
public:
    landvehicles()
    {
        cout << "thsi is a land vehicle" << endl;
    }

    ~landvehicles()
    {
        cout << "land vehi destructor called" << endl;
    }
};

class watervehicle
{
public:
    watervehicle()
    {
        cout << "this is a water vehicle" << endl;
    }

    ~watervehicle()
    {
        cout << "water vehi destructor called" << endl;
    }
};

class amphi : public watervehicle, public landvehicles
{
public:
    amphi()
    {
        cout << "amphi called" << endl;
    }

    ~amphi()
    {
        cout << "amphibious destructor called" << endl;
    }
};
int main()
{
    landvehicles v1;
    watervehicle v2;
    amphi v3;
}