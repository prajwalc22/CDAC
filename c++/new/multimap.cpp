// same key different values

#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // multimap<int, string> m;
    // m.emplace(1, "A");
    // m.emplace(1, "B");
    // m.emplace(2, "C");
    // for (auto i : m)
    // {
    //     cout << i.first << ":" << i.second << endl;
    // }

    unordered_multimap<int, string> m;
    m.emplace(1, "A");
    m.emplace(1, "B");
    m.emplace(2, "C");
    for (auto i : m)
    {
        cout << i.first << ":" << i.second << endl;
    }
}