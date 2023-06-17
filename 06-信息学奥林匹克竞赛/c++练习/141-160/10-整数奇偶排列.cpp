#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[11];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 10);
    for (int i = 9; i >= 0; i--)
    {
        if (a[i] % 2 == 1)
            cout << a[i] << " ";
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    }

    return 0;
}
