#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, m, sum = 0;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m % 2 == 0)
        {
            sum += 1;
        }
        else
        {
            flag = false;
        }
    }
    cout << sum << endl;
    if (flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
