#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[107][107], maxn = 9999;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (maxn > a[i][j])
            {
                maxn = a[i][j];
            }
        }
        cout << maxn << endl;
        maxn = 9999;
    }
    return 0;
}
