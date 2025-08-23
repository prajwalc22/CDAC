#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    // for (auto i = begin(v); i != end(v); ++i)
    // {
    //     cout << *i << " ";
    // }
    auto i = rbegin(v);
    cout << *i << endl;
    cout << *(i + 1) << endl;
    cout << *(i + 2) << endl;
}