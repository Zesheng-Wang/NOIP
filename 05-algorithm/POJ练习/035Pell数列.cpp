#include <bits/stdc++.h>
using namespace std;
int pell(int n)
{
    if (n <= 2)
        return n;
    int a = 1, b = 2;
    int t;
    for (int i = 3; i <= n; i++)
    {
        t = (2 * b + a) % 32767; 
        a = b;                   
        b = t;                   
    }
    return b;
}

int main()
{
    int n, x;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        cout << pell(x) << endl;
    }
    return 0;
}
