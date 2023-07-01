#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int tra, value, sum = n;
    for (int i = 0; i < n; i++)
    {
        cin >> tra >> value;
        if (tra == 1 && value == 1)
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}
