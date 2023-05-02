#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int l, m, a[10001], b, c, sum = 0;
    cin >> l >> m;
    for (int i = 0; i <= l; i++)
        a[i] = 1;
    for (int i = 0; i < m; i++)
    {
        cin >> b >> c;
        for (int j = b; j <= c; j++)
            a[j] = 0;
    }
    for (int i = 0; i <= l; i++)
        if (a[i] == 1)
            sum++;
    cout << sum;
    return 0;
}
