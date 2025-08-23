#include <iostream>

#include <unordered_set>
using namespace std;
int main()
{
    unordered_multiset<int> s;

    s.insert(8);
    s.insert(7);
    s.insert(6);
    s.insert(7);
    s.insert(5);
    s.insert(6);
    s.insert(8);
    s.insert(2);
    s.insert(10);

    for (auto x : s)
    {
        cout << x << " ";
    }
}
