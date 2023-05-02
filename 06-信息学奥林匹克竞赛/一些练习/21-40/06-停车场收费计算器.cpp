#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 2)
        cout << n * 5;
    else
        cout << 10 + (n - 2) * 8;
    return 0;
}
