#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int a[1007], count = 0;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                count++;
                swap(a[j], a[j + 1]);

                flag = true;
            }
        }
        if (flag == false)
            break;
    }
    cout << count;

    return 0;
}
