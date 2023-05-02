#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, a[101], sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double avg = sum * 1.0 / n;
    cout << int(avg) << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > avg)
            cout << a[i] << " ";
    }
    return 0;
}
