#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (char c : s)
    {

        if (c == ' ')
            c = ',';
        cout << c;
    }

    return 0;
}
