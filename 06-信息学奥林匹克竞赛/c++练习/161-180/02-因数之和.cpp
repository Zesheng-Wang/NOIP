#include <bits/stdc++.h>
#include <stack>
using namespace std;

int factor_sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += 1;
        }
    }
    return sum;
}

int main()
{
    int sum = 0;
    int n, n1, n2, n3;
    cin >> n >> n1 >> n2 >> n3;
    sum = factor_sum(n) + factor_sum(n1) + factor_sum(n2) + factor_sum(n3);

    cout << sum;

    return 0;
}
