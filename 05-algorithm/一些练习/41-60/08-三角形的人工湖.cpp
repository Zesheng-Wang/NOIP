#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b || a == c || b == c)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
