#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a[1007];
    int n, num, price;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> num >> price;
    for (int i = 1; i < num; i++)
    {
        cout << a[i] << " ";
    }
    cout << price << " ";
    for (int i = num; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
