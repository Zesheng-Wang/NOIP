#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (c == 'z')
            {
                cout << 'a';
                continue;
            }
            cout << char(c + 1);
        }

        else if (c >= 'A' && c <= 'Z')
        {
            if (c == 'Z')
            {
                cout << 'A';
                continue;
            }
            cout << char(c + 1);
        }

        else
            cout << c;
    }
    return 0;
}
