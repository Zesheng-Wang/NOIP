#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int w, id;
    cin >> w >> id;
    int m = 0;
    if (id == 1)
        m = 13;
    else if (id == 2)
        m = 12;
    else if (id == 3)
        m = 14;
    if (w <= 2)
    {
        cout << m;
        return 0;
    }
    else
    {
        if (id != 3)
            m = m + (w - 2) * (4 - id);
        else
            m = m + (w - 2) * 4;
        cout << m;
    }

    return 0;
}
