#include <bits/stdc++.h>
#include <stack>
using namespace std;

int mul(int n)
{
}

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n * n; i++)
    {
        cout << i << " ";
        if (i % n == 0)
            cout << endl;
    }
    return 0;
}
