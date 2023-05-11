#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    char c;
    int cost;
    cin >> c >> cost;
    if (c == 'P')
        cost -= 100;
    else if (c == 'G')
        cost -= 80;
    else if (c == 'S')
        cost -= 70;
    else
        cost -= 30;
    cout << cost;
    return 0;
}
