#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int m, c;
    cin >> m >> c;
    if (m == 3)
    {
        if (c == 1)
            cout << "park";
        else
            cout << "read";
    }
    else if (m == 6)
    {
        if (c == 1)
            cout << "park";
        else
            cout << "sweep";
    }
    else if (m == 7)
    {
        if (c == 1)
            cout << "hill";
        else
            cout << "learn";
    }
    return 0;
}
