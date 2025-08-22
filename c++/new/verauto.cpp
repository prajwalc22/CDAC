#include <iostream>
using namespace std;
int main()
{
    // int number = 42;
    // double pi = 3.14159;
    // char letter = 'A';
    // bool flag = true;

    auto num = 42;
    auto pi = 3.14159;
    auto letter = 'A';
    auto flag = true;

    decltype(num) verified_num = 100;
    decltype(pi) verified_pi = 2.718;
    decltype(letter) verified_letter = 'z';
    decltype(flag) verified_flag = false;

    cout << num << endl;
    cout << verified_num << endl;

    cout << flag << endl;
    cout << verified_flag << endl;

    int x = 10;
    double y = 20.5;

    auto sum = x + y;
    auto product = x * y;
    auto division = y / x;

    // cout << typeid(sum).nam;
    cout << typeid(sum).name;
    // << endl;
}