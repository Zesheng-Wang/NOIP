#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    int k;
    cin >> k;
    int j = 1;
    for (int i = 0; i <= 100; i += 2)
    {
        sum += i;

        if (sum >= k)
        {
            cout << j;
            break;
        }
        j++;
    }
    return 0;
}
