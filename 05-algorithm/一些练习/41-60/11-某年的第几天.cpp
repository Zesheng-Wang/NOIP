#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool is_leap(int n)
{
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
        return true;
    return false;
}

int main()
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m, d, sum = 0;
    cin >> y >> m >> d;
    if (is_leap(y))
        a[2] = 29;
    for (int i = 1; i < m; i++)
    {
        sum += a[i];
    }
    cout << sum + d;
    return 0;
}
