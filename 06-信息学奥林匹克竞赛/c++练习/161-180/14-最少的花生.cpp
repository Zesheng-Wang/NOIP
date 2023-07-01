#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[107][107], b[107], maxn = 0, min = 9999;
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
        }
        b[i] += sum;
    }
    int q = 0;
    for (int i = 0; i < m; i++)
    {
        //    	cout << b[i] << " ";
        if (min > b[i])
        {
            min = b[i];
            q = i;
        }
    }
    cout << q + 1 << " " << min;
    return 0;
}
