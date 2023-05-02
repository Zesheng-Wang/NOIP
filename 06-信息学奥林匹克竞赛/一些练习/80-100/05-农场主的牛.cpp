#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a[107];
    int n, w;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> w;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == w)
        {
            cout << i << endl;
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == w)
            continue;
        cout << a[i] << " ";
    }
    return 0;
}
