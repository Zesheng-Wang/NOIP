#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[11][11];
    int k = 1;
    int q, v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (k <= n * n)
            {
                a[i][j] = k;
            }
            k++;
        }
    }
    cin >> q >> v;
    swap(a[q][v], a[v][q]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
