#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int m;
    char c;
    cin >> m >> c;
    if (m >= 200 && c == 'b')
        cout << 1;
    else if (m >= 200 && c == 'y')
        cout << 2;
    else if (m >= 100 && c == 'y')
        cout << 3;
    else if (m >= 100 && c == 'b')
        cout << 4;
    else if (m >= 50 && c == 'b')
        cout << 5;
    else if (m >= 50 && c == 'y')
        cout << 6;
    return 0;
}
