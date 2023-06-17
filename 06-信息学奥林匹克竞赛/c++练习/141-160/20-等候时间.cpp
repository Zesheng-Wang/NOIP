#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, sum = 0;
    cin >> n;
    int a[507];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i];
    }
    cout << sum;

    return 0;
}