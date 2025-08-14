#include <iostream>
using namespace std;

class AreaCalculator
{
private:
    double area;

public:
    // Default constructor
    AreaCalculator()
    {
        area = 0;
        cout << "Default area calculator created" << endl;
    }

    // Constructor for circle
    AreaCalculator(double radius)
    {
        const double pi = 3.14159;
        area = pi * (radius * radius);
        // cout << "Area of Circle : " << area << endl;
    }

    // Constructor for rectangle
    AreaCalculator(int length, int width)
    {
        area = length * width;
        // cout << "Area of rectangle: " << area << endl;
    }

    // Constructor for triangle
    AreaCalculator(double base, double height)
    {
        area = (base * height) / 2.0;
        // cout << "Area of Triangle: " << area << endl;
    }

    AreaCalculator(int side)
    {
        area = side * side;
    }

    // Method to get calculated area
    double getArea()
    {
        return area;
    }
};

int main()
{
    // Areas are calculated during object construction
    AreaCalculator circle(4.0);
    AreaCalculator rectangle(5, 6);
    AreaCalculator triangle(2.0, 3.0);
    AreaCalculator square(6);

    cout << " Area of Circle: " << circle.getArea() << endl;
    cout << " Area of Rectangle: " << rectangle.getArea() << endl;
    cout << " Area of Triangle: " << triangle.getArea() << endl;
    cout << " Area of Square: " << square.getArea() << endl;

    return 0;
}
