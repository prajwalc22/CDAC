#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << static_cast<void *>(ptr) << endl;
}