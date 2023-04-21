#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, cost = 0;
    cin >> n;
    if (n < 10)
        cost = 45 * n;
    else if (n >= 10 && n < 20)
        cost = 43 * n;
    else if (n >= 20 && n < 30)
        cost = 40 * n;
    else if (n >= 30)
        cost = 35 * n;
    cout << cost;
    return 0;
}
