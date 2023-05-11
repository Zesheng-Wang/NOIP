#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 90)
    {
        cout << "A";
    }
    else if (n >= 70 && n < 90)
    {
        cout << "B";
    }
    else if (n >= 60 && n < 70)
    {
        cout << "C";
    }
    else
    {
        cout << "D";
    }

    return 0;
}
