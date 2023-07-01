#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[107][107], maxn = 0;
    cin >> n >> m;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
            if (maxn < sum)
            {
                maxn = sum;
            }
        }
    }
    cout << maxn;
    return 0;
}
