#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            continue;
        }
        cout << i << " ";
        sum += 1;
    }
    cout << endl;
    cout << sum;
    return 0;
}
    