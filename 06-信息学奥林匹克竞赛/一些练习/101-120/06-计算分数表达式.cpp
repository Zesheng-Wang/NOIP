#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    double sum = 0.0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(3) << sum;
    return 0;
}