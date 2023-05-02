#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a[107] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = a[0];
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
