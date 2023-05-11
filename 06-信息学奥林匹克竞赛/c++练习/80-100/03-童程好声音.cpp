#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int a[107];
    int n, maxn = 0, minn = 9999;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int k, j;
    for (int i = 1; i <= n; i++)
    {
        if (maxn < a[i])
        {
            maxn = a[i];
            k = i;
        }
        if (minn > a[i])
        {
            minn = a[i];
            j = i;
        }
    }
    cout << maxn << " " << k << endl;
    cout << minn << " " << j << endl;
    return 0;
}
