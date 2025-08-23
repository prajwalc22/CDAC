#include <tuple>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    tuple<double, int, vector<int>> t = {1.2,
                                         3,
                                         {4, 5, 6}};

    cout << get<0>(t) << endl;

    cout << get<1>(t) << endl;

    for (auto x : get<2>(t))
    {

        cout << x << " ";
    }
}