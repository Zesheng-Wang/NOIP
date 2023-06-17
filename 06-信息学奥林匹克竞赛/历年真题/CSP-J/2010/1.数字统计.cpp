#include <iostream>
using namespace std;

int main()
{
    long long l, r, m = 0, count = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        int j = i;
        while (j != 0)
        {
            m = j % 10;
            if (m == 2)
                count++;
            j /= 10;
        }
    }
    cout << count;
    return 0;
}
