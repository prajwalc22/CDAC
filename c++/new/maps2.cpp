#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert({2, "A"});

    m.emplace(1, "B");
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

    // if (m.contains(2))
    // {
    //     return true;
    // }

    // values can be same but keys can not

    // m.erase()
}