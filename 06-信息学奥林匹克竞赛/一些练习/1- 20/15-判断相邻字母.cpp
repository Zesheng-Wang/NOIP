#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    char c, nc;
    cin >> c >> nc;
    if (abs(int(c) - int(nc)) == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
