#include <iostream>
using namespace std;
int main()
{

    int minutes = 130;
    int hours = 0;
    if (minutes >= 60)
    {
        hours = hours + minutes / 60;
        minutes = minutes % 60;
    }

    cout << hours << ":" << minutes << endl;
}
