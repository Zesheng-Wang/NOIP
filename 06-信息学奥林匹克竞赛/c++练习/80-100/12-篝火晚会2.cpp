#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a[107] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k, v;
    int maxn = 0, minn = 9999;
    for (int i = 0; i < n; i++)
    {
        if (maxn < a[i])
        {
            maxn = a[i];
            k = i;
        }
        if (minn > a[i])
        {
            minn = a[i];
            v = i;
        }
    }
    swap(a[k], a[v]);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
