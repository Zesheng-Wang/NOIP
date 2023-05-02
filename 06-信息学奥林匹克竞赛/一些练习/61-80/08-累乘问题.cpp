#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int result = 1;
    for (int i = 1; i < 30; i++)
    {
        result *= i;
        if (result >= s)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}
