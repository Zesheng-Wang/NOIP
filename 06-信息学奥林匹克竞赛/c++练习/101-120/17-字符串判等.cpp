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
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    for (int i = 0; i <= s.length(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] = s1[i] - 32;
    }
    if (s.compare(s1) != 0)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }

    return 0;
}
