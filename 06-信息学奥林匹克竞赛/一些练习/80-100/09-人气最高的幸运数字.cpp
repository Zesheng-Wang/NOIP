#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int a[200] = {};
    int m;
    int maxn = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        a[m] += 1;
    }
    int k = 0;
    for (int i = 0; i < 200; i++)
    {
        if (maxn < a[i])
        {
            maxn = a[i];
            k = i;
        }
    }
    cout << k << " " << maxn;
    return 0;
}
