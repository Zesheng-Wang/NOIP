#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int d1, d2;
    cin >> d1 >> d2;
    if (d1 % d2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
