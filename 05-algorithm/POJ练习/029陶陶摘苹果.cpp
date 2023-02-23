#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int m = 0;
    int a[11];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] <= (m + 30))
        {
            sum++;
        }
    }
    cout << sum;
    return 0;
}