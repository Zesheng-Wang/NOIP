#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        if ((i * 10 + 3) * 6528 == (3 * 10 + i) * 8256)
        {
            cout << i;
        }
    }

    return 0;
}
