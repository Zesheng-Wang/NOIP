#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    int r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n);
    return 0;
}
