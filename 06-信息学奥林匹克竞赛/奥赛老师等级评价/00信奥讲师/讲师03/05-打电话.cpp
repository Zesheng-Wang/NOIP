#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double m;
    cin >> m;
    if (m == 0.5)
    {
        cout << 3;
    }
    else
    {
        cout << ceil((m - 0.5) / 0.2) + 3;
    }
    return 0;
}