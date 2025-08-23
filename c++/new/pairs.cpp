#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, double> p{4, 8.5};
    cout << p.first << endl;
    cout << p.second << endl;

    // pair<int, int> foo(int x)
    // {
    //     return {x, x * x};
    // };

    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    pair<int, pair<int, pair<int, int>>> p2 = {
        1,
        {2, {5, 6}},
    };
    // cout << p1.first << endl;
    // cout << p1.second.first << endl;
    // cout << p1.second.second << endl;
    cout << p2.second.second.first << endl;
}