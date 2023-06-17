#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    long long k = 1;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            k++;
            if (n == 1)
            {
                cout << k;
                break;
            }
        }
        else
        {
            n = n * 3 + 1;
            k++;
            if (n == 1)
            {
                cout << k;
                break;
            }
        }
    }
    return 0;
}
