#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int maxn = *max_element(a, a + 5);
    cout << maxn;
    return 0;
}
