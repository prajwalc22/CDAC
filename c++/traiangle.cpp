#include <iostream>
using namespace std;

class rectangle
{
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w)
    {
        length = l;
        width = w;

        // l = length;
        // w = width;
    }

    double calculateArea()
    {
        // return length * width;
        double area = length * width;
        cout << area << endl;
        return area;
    }

    double calculatePerimeter()
    {
        int perimeter = 2 * (length * width);
        // return 2 * (length * width);
        cout << perimeter << endl;
        return perimeter;
    }
};

int main()
{
    rectangle r1;
    // r1.length = 10;
    // r1.width = 2;
    int a, b;
    cin >> a >> b;
    r1.setDimensions(a, b);
    r1.calculateArea();
    r1.calculatePerimeter();
    return 0;
}