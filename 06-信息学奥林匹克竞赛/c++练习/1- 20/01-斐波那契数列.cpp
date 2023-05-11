#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, a1 = 1, a2 = 1;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 1 << endl;
    else
    {
        int sum;
        for (int i = 0; i < n - 2; i++)
        {
            sum = a1 + a2;
            a1 = a2;
            a2 = sum;
        }
        cout << a2;
    }

    return 0;
}