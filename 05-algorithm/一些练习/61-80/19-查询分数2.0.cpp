#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, a[107];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    cout << a[m];
    return 0;
}
