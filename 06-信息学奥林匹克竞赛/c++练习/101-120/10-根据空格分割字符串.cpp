#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (char c : s)
    {
        cout << c;
        if (c == ' ')
        {
            cout << endl;
        }
    }

    return 0;
}
