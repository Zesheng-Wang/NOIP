#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int c, sum = 0;
    char type, level;
    cin >> c >> type >> level;
    if (type == 'a')
        sum = c;
    else if (type == 'b')
        sum = 2 * c;
    else if (type == 'c')
        sum = 3 * c;

    if (level == 'f')
        sum *= 1;
    else if (level == 'm')
        sum -= 3;
    else if (level == 'e')
        sum += 10;
    cout << sum;
    return 0;
}
