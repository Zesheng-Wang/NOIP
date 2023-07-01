#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    bool flag = false;
    getline(cin, s);
    for (char c : s)
    {
        if (c == ',')
        {
            break;
        }
        cout << c;
    }

    return 0;
}
