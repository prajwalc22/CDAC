#include <iostream>
using namespace std;
int main()
{
    double price = 19.99;
    int dollars = static_cast<int>(price);

    cout << "Price: $" << dollars << "(decimal removed)" << endl;

    char letter = 'A';
    int asciiCode = static_cast<int>(letter);

    cout << "Letter: " << letter << ", as number: " << asciiCode << endl;
}
