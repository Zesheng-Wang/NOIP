#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, num, m, sum = 0;
    cin >> n >> num;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m == num)
            sum += 1;
    }
    cout << sum;
    return 0;
}
