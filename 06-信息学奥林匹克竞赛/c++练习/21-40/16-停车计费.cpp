#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << 10;
        break;
    case 2:
        cout << 25;
        break;
    case 3:
        cout << 45;
        break;
    default:
        cout << 45 + (n - 3) * 20;
    }
    return 0;
}
