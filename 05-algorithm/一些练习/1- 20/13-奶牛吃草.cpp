#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n * 5 * 10 <= m)
        cout << m / 5 / n;
    else
        cout << "NO";
    return 0;
}
