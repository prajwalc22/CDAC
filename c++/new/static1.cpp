#include <iostream>
using namespace std;
class StaticDemo
{
private:
    int x;
    static int y;

public:
    // StaticDemo()
    // {
    //     x = 10;
    // }
    static void display();
};

int StaticDemo::y = 10;
void StaticDemo::display()
{
    cout << StaticDemo::y;
}
int main()
{
    StaticDemo sd;
    sd.display();
}