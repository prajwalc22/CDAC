#include <iostream>
using namespace std;

class Shape
{
public:
    Shape()
    {
    }
    virtual void print()
    {
        cout << "Base" << endl;
    }
};

class Circle : public Shape
{
public:
    Circle()
    {
        cout << "Circle class constructor" << endl;
    }

    void roll()
    {
        cout << "circle is rolling";
    }
};

int main()
{
    Circle c;
    Shape s;

    Shape *s1 = &c;
    Shape *s2 = &s;

    Circle *c1 = dynamic_cast<Circle *>(s1);

    if (c1 != nullptr)
    {
        cout << "converion successful" << endl;
    }
    else
    {
        cout << "Conversion failed" << endl;
    }

    Circle *c2 = dynamic_cast<Circle *>(s2);
    if (c2 != nullptr)
    {
        cout << "converion successful" << endl;
    }
    else
    {
        cout << "Conversion failed" << endl;
    }
}