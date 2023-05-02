#include <iostream>
#include <cstdio>
using namespace std;

bool judge(int n)
{
    if (n % 7 == 0 || n % 10 == 7)
        return false;
    return true;
}
int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (judge(i))
            sum += i;
    }
    cout << sum;
    return 0;
}
