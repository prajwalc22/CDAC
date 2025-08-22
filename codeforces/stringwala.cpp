#include <iostream>
#include <string> // Add this header
using namespace std;

int main()
{
    string s = "codeforces";
    int t;
    cin >> t;

    while (t--)
    {
        char ch;
        cin >> ch;
        bool found = false;

        // Check if character exists
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ch)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
