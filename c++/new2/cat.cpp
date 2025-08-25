#include <iostream>
#include <regex>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    getline(cin, s);
    regex pattern("cat");
    if (regex_search(s, pattern))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no";
    }
}