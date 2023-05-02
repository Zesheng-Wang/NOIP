#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int m, k, sum = 0;
    cin >> m >> k;
    while (m != 0)
    {
        int i = m % 10;
        if (i == 3)
            sum += 1;
        m /= 10;
    }
    if (m % 9 == 0 && sum == k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
