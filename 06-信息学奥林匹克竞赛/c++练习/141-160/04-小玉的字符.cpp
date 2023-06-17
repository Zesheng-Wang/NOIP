#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[1007];
    cin >> a;
    int result[200] = {0}, sum = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        result[a[i]] = 1;
    }
    for (int i = 0; i < 200; i++)
    {
        if (result[i] == 1)
        {
            sum++;
        }
    }
    cout << sum << endl;
    for (int i = 0; i < 200; i++)
    {
        if (result[i] == 1)
        {
            cout << char(i);
        }
    }
    return 0;
}
