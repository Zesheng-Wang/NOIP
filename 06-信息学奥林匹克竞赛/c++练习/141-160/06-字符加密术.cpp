#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

void psd(string s, int n)
{
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            cout << char(c + n);
        }
        else if (c >= 'a' && c <= 'z')
        {
            cout << char(c - n);
        }
        else
            cout << c;
    }
}

int main()
{
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    psd(s, n);
    return 0;
}
