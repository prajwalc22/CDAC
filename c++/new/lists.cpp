#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l = {3};
    l.push_back(2);
    l.push_front(4);

    l.splice(begin(l) , list<int>{8, 9, 7});
    l.sort();

    for (auto x : l)

    {
        cout << x << " ";
    }
}