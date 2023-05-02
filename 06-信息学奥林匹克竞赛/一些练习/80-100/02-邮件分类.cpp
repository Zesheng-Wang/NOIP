#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[10007];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "Beijing" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] / 10000 == 10)
            cout << a[i] << " ";
    }
    cout << endl;
    cout << "Shanghai" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] / 10000 == 20)
            cout << a[i] << " ";
    }
    cout << endl;
    cout << "Tianjin" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] / 10000 == 30)
            cout << a[i] << " ";
    }
    return 0;
}
