#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[507] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
            cout << a[i] << " ";
    }
    return 0;
}
