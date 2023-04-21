#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 2)
        cout << 6;
    else
        cout << 6 + (n - 2) * 2;
    return 0;
}
