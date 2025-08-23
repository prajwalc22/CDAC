#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v = {2, 4, 5};
    // v.emplace_back(6);
    // v[1] = 3;
    // v.resize(5, 0);
    // cout << v[0] << endl;

    // cout << v[1] << endl;

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }

    // vector<int> v = {0, 1, 2, 3};
    // vector<int> w(4, 2);
    // vector<int> b = {v};
    // for (int i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // for (int i : w)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // for (int i : b)
    // {
    //     cout << i << " ";
    // }

    vector<int> u = {1, 2};
    vector<int> v = {1, 2, 3};

    u = v;
    v.assign(4, 9);
    v.emplace_back(4);
    v.reserve(5);

    for (auto x : u)
    {
        cout << x << " ";
    }
    cout << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    int b = v.size();
    cout << "size:" << b << endl;
    int a = v.capacity();
    cout << "capacity:" << a;
}
