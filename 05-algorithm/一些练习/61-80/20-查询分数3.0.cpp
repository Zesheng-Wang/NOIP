#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a[107];
    int n;
    int s;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> s;
    if (s == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else if (s >= 1 && s <= n)
    {
        cout << a[s];
        return 0;
    }
    else
    {
        cout << "error";
        return 0;
    }

    return 0;
}
