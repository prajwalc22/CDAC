#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert({2, "B"});

    m.emplace(1, "A");
    m.emplace(3, "C");
    // for(auto i)
    auto i = m.find(2);
    if (i != end(m))
    {
        cout << i->first << " " << endl;
    }
    for (auto pair : m)
    {
        cout << pair.first << ": " << pair.second << endl;
    }
}