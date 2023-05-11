#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int k, a[50];
    cin >> k;
    a[1] = a[2] = 1;
    for (int i = 3; i <= k; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
