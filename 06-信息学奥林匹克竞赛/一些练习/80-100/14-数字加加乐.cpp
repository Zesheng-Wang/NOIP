#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    while (n != 0)
    {
        int m = n % 10;
        sum += m;
        n /= 10;
    }
    cout << sum;

    return 0;
}