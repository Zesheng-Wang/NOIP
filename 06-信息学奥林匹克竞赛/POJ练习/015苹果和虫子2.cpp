#include <iostream>
using namespace std;
int main()
{
    int n, x, y, sy;
    cin >> n >> x >> y;
    sy = n - y / x;
    if (y % x != 0)
    {
        sy = sy - 1;
    }
    if (sy < 0)
    {
        sy = 0;
    }
    cout << sy << endl;
    return 0;
}