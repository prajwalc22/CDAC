#include <iostream>
using namespace std;
class Outer
{
    int outervar;

public:
    Outer()
    {
        // default const.
        outervar = 10;
    }

    class Inner
    {
        int innervar;

    public:
        Inner()
        {
            innervar = 20;
        }

        void display_both()
        {
            Outer o;
            cout << "Outer var:" << o.outervar << endl;
            cout << "Inner var:" << innervar;
        }
    };
};
int main()
{
    // Outer o;
    Outer::Inner i;
    i.display_both();
}