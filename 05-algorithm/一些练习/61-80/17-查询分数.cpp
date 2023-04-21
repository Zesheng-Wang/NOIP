#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int m, a[10];
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    cout << a[m];
    return 0;
}
