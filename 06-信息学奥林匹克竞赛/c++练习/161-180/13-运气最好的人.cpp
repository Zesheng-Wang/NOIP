#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[107][107], maxn = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
            if (maxn < sum)
            {
                maxn = sum;
                k = i;
            }
        }
    }
    cout << k + 1 << " " << maxn;
    return 0;
}
