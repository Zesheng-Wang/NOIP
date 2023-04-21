#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, d, sum = 0;
    cin >> y >> d;
    for (int i = 1; i < y; i++)
    {
        sum += a[i];
    }
    cout << sum + d;
    return 0;
}
    