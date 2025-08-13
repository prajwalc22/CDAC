#include <iostream>
using namespace std;
class Base
{
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base()
    {
        cout << "Base constructor called" << endl;
    }
};

// Public visibility mode
class PublicChild : public Base
{
    PublicChild()
    {
        cout << "PublicChild constructor called" << endl;
        publicVar = 10;
        protectedVar = 10;
        // privateVar = 10;
        cout << publicVar << protectedVar << endl;
    }
};

class ProtectedChild : protected Base
{
    ProtectedChild()
    {
        cout << "PublicChild constructor called" << endl;
        publicVar = 11;
        protectedVar = 11;
        // privateVar = 11;
        cout << publicVar << protectedVar << endl;
    }
};

class PrivateChild : private Base
{
    PrivateChild()
    {
        cout << "PublicChild constructor called" << endl;
        publicVar = 12;
        protectedVar = 12;
        // privateVar = 12;
        cout << publicVar << protectedVar << endl;
    }
};

int main()
{
    PublicChild p1;
    PrivateChild p2;
    ProtectedChild p3;
}