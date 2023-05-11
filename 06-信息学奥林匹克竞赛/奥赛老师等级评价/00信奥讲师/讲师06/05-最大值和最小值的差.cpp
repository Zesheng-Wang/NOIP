#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10007];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxn = *max_element(a, a + n);
    int minn = *min_element(a, a + n);
    cout << maxn - minn;
    return 0;
}