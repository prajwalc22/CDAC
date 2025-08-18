#include <iostream>
using namespace std;

class A
{
public:
    void publicdemo()
    {
        cout << "Public A" << endl;
    }

private:
    void privatedemo()
    {
        cout << "Private A" << endl;
    }

protected:
    void protecteddemo()
    {
        cout << "protected A" << endl;
    }
    friend class B;
    friend void privatedemo(A &a);
};
class B
{
public:
    void publicdemo(A &a)
    {
        cout << "Public B" << endl;
        // to check access call the A class function here
        a.publicdemo();
        a.privatedemo();
        a.protecteddemo();
    }

private:
    void privatedemo()
    {
        cout << "Private B" << endl;
        // a.privatedemo();
    }

protected:
    void protecteddemo(A &a)
    {
        cout << "protected B" << endl;
    }
};

int main()
{
    A a;
    B b;
    b.publicdemo(a);
    // b.privatedemo(a);
    // b.protecteddemo(a);
    // b.privatedemo();
}