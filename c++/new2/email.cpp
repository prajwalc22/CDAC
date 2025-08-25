#include <iostream>
#include <regex>
using namespace std;
int main()
{
    string s;
    // cin >> s;
    getline(cin, s);
    regex email("^[A-Za-z0-9._%+-]+@[A-Za-z0-9._%+-]+\\.com$");
    if (regex_search(s, email))
    {
        cout << "valid" << endl;
    }
    else
    {
        cout << "invalid";
    }
}