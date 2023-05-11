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
    cin >> a[100];
    sort(a, a + 101);
    for (int i = 0; i < 101; i++)
    {
        if (a[i] != 0)
            cout << a[i] << " ";
    }
    return 0;
}
