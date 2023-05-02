#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int k, p;
    cin >> k >> p;
    for (int i = 1; i <= k; i++)
    {
        cout << 1 + (i - 1) * p << " ";
    }
    return 0;
}
