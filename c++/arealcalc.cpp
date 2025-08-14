#include <iostream>
using namespace std;
class AreaCalculator
{
public:
    AreaCalculator()
    {
        cout << "this is a default constructor" << endl;
    }
    double calculateArea(double radius)
    {
        const double pi = 3.14;
        return pi * (radius * radius);
    }

    double calculateArea(int length, int width)
    {
        return length * width;
    }

    double calculateArea(double base, double height)
    {
        return (base * height) / 2.0;
    }

    double calculateArea(int side)
    {
        return side * side;
    }
};
int main()
{
    AreaCalculator a1;
    double radius = 4.0;
    int side = 6;
    double base = 2.0;
    double height = 3.0;
    int length = 5;
    int width = 6;
    double pi = 3.14;

    cout << "Area of Circle: " << a1.calculateArea(radius) << endl;
    cout << "Area of Rectangle: " << a1.calculateArea(length, width) << endl;
    cout << "Area of Triangle: " << a1.calculateArea(base, height) << endl;
    cout << "Area of Square: " << a1.calculateArea(side) << endl;
}