#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            flag = false;
    }
    return flag;
}

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 2; i <= n - 2; i++)
    {
        if (is_prime(i) && is_prime(i + 2))
        {
            flag = true;
            cout << i << " " << i + 2 << endl;
        }
    }
    if (flag == false)
        cout << "empty";

    return 0;
    // 等差数列
}
