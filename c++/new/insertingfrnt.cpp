#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    v.insert(begin(v), 5);
    v.insert(begin(v) + 1, {7, 8});
    v.clear();
    for (auto x : v)
    {
        cout << x << " ";
    }
}