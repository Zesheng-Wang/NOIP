#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0;
    int a[1007] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        a[m] = 1;
    }
    for (int i = 0; i < 1000; i++)
    {
        if (a[i] == 1)
        {
            sum++;
        }
    }
    cout << sum << endl;
    for (int i = 0; i < 1000; i++)
    {
        if (a[i] == 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}
