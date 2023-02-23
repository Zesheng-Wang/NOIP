#include <iostream>
#include <cstdio>
#include <limits>

using namespace std;

int main()
{
    int a[1007], n;
    int maxx = numeric_limits<int>::min();
    int minn = numeric_limits<int>::max();
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (maxx < a[i])
            maxx = a[i];
        if (minn > a[i])
            minn = a[i];
    }
    printf("%d", maxx - minn);
    return 0;
}
