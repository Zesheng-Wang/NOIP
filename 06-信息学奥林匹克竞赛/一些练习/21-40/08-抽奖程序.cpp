#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 10)
    {
        if (n <= 5)
            cout << "computer";

        else
            cout << "luggage";
    }
    else
        cout << "coupon";

    return 0;
}
