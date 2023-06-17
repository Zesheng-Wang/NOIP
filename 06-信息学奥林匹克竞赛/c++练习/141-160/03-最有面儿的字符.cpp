#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count[207] = {0}, maxn = 0;
    for (char c : s)
    {
        count[c]++;
    }
    for (int i = 0; i < 200; i++)
    {
        if (maxn < count[i])
            maxn = count[i];
    }
    for (int i = 0; i < 200; i++)
    {
        if (count[i] == maxn)
        {
            cout << char(i) << " " << count[i] << endl;
            break;
        }
    }
    return 0;
}
