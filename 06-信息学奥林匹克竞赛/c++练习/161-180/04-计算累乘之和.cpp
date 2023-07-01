#include <bits/stdc++.h>
#include <stack>
using namespace std;

int mul(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main()
{

    int n, n1, n2;
    cin >> n >> n1 >> n2;
    cout << mul(n) + mul(n1) + mul(n2);

    return 0;
}
