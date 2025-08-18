#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    Shape s;

    Shape *s = new circle();

    s->draw();
}