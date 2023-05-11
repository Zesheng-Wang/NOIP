#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0, a[10];
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}
