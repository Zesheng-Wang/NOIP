#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[107][107], sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}
