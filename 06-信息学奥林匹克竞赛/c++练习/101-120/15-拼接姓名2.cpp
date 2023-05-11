#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s, s1, s2;
    getline(cin, s);
    getline(cin, s1);
    getline(cin, s2);
    if (s.compare(s1) > 0)
    {
        swap(s, s1);
    }
    if (s.compare(s2) > 0)
    {
        swap(s, s2);
    }
    if (s1.compare(s2) > 0)
    {
        swap(s1, s2);
    }
    cout << s << s1 << s2;
    return 0;
}
