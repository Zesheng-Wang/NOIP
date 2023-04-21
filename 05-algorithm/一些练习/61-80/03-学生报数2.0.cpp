#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    int k;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
        cout << i << endl;
        if (sum >= 1000)
        {
            cout << sum << endl;
            k = i;
            break;
        }
    }
    cout << k;
    return 0;
}
