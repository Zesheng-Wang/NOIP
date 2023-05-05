#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int a[100007];

int main()
{
    int n, sum = 0, count = 0;
    cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 10 == 2)
        {
            flag = true;
            break;
        }
        else
        {
            continue;
        }
    }
    if (flag == false)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (flag && a[i] % 2 == 0 && a[i] % 10 == 2)
        {
            count++;
            sum += a[i];
        }
    }
    double avg = sum * 1.0 / count;
    cout << fixed << setprecision(3) << avg;
    return 0;
}