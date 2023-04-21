#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int length;
    cin >> length;
    for (int x = 1; x < length; x++)
    {
        int y = (length - 2 * x) / 2.0;
        if (y == int(y) && x <= y)
            cout << x << " " << y << endl;
    }

    return 0;
}
