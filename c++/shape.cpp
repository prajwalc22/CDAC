#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing circle" << endl;
    }
};
int main()
{
    Shape *s;
    Circle c;
    s = &c;
    s->draw();
}