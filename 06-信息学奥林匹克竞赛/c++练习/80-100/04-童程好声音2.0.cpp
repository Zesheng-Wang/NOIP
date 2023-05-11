#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a[11];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int maxn = *max_element(a, a + 10);
    int minn = *min_element(a, a + 10);
    cout << maxn - minn;
    return 0;
}
