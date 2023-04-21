#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, lower, higher, m, sum_l = 0, sum_h = 0;
    cin >> n;
    cin >> lower >> higher;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m < lower)
            sum_l += 1;
        if (m >= higher)
            sum_h += 1;
    }
    cout << sum_l << " " << sum_h;

    return 0;
}
