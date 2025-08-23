#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m = {{1, "A"}, {2, "B"}, {3, "C"}};

    // This requires C++20
    if (m.contains(2))
    {
        cout << "Key 2 found!" << endl;
    }

    if (!m.contains(5))
    {
        cout << "Key 5 not found!" << endl;
    }

    return 0;
}
