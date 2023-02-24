#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a < b)
    {
        swap(a, b);
    }
    if (a == b)
    {
        return a;
    }
    int r = 0;
    while (a % b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    cout << gcd(a, b);
    return 0;
}
