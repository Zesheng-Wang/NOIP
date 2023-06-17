#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    // 1、输入数据
    int n, m;
    cin >> n >> m;
    int a[5007];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp);

    // 2、对分数进行降序排序
    int c = floor(m * 1.5);

    cout << a[c - 1];

    return 0;
}