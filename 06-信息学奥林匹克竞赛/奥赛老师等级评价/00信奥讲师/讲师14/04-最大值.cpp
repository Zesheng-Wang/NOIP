#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[107][107], maxn = 0, col_num, row_num;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (maxn < a[i][j])
            {
                maxn = a[i][j];
                row_num = i;
                col_num = j;
            }
        }
    }
    cout << maxn << endl;
    cout << row_num + 1 << " " << col_num + 1;
    return 0;
}
