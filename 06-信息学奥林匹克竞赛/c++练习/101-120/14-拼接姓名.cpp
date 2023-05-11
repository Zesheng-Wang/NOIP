#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    if (s.compare(s1) > 0)
    {
        cout << s1 << s;
    }
    else
    {
        cout << s << s1;
    }

    return 0;
}
