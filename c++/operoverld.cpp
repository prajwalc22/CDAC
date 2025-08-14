#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time()
    {
    }
    Time(int hrs, int mins)
    {
        hours = hrs;
        minutes = mins;
    }

    void calcTime(int hours, int minutes)
    {

        if (minutes >= 60)
        {
            hours = hours + minutes / 60;
            minutes = minutes % 60;
        }
        cout << hours << ":" << minutes << endl;
    }

    void Displaytime()
    {

        cout << hours << minutes << endl;
    }

    Time operator+(const Time &t1)
    {
        hours = hours + t1.hours;
        minutes = minutes + t1.minutes;
        // return Time(hours, minutes);
        // Displaytime();
    }
};

int main()
{
    // Time t1;
    // cout << t1.calcTime(2, 120);
    // cout << Time(2, 20) << endl;
    Time a = Time(2, 40);
    a.Displaytime();
}