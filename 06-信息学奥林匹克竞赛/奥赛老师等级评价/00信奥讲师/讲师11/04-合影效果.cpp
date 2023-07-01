#include <bits/stdc++.h>
using namespace std;
struct human
{
    int type;
    int height;
};

bool cmp(human a, human b)
{
    return a.height < b.height;
}

int main()
{

    human a[51];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].type >> a[i].height;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (a[i].type == 0)
            cout << a[i].height << " ";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i].type == 1)
            cout << a[i].height << " ";
    }

    return 0;
}
