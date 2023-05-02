#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[107];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] - 32;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
