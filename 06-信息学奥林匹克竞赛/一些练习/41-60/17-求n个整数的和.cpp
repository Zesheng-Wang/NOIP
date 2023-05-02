#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        sum += m;
    }
    cout << sum;
    return 0;
}
