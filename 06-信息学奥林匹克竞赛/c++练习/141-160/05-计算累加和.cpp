#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int sum1ton(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum1ton(a) << endl;
    cout << sum1ton(b) << endl;
    cout << sum1ton(c) << endl;
    return 0;
}
