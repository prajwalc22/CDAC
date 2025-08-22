#include <iostream>
using namespace std;
int main()
{
    int *ptr1 = new int(100);
    int *ptr2 = ptr1;

    cout << "Value" << *ptr1 << endl;

    delete ptr1;

    int *safePtr = new int(200);
    delete safePtr;
    safePtr = nullptr;

    cout << "\nBEST PRACTICE:" << endl;
    cout << "1.Set pointers to nullptr after delete" << endl;
    cout << "2.Check for nullptr before using" << endl;
    cout << "3.Use smart pointers when possible" << endl;
}