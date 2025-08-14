#include <iostream>
using namespace std;

class Complex
{

private:
    double real;
    double imaginary;

public:
    Complex(double r, double i)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(const Complex &obj)
    {
        real = real + obj.real;
        imaginary = imaginary + obj.imaginary;
        return Complex(real, imaginary);
    }
    void Display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex n1(3.2, 4.5);
    Complex n2(1.1, 6.7);
    Complex result = n1 + n2;
    // cout << "Addition of Complex numbers n1 and n2: " << result.Display();
    result.Display();
}