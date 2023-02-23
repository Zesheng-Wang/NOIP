#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int num_digit(int num)
{
    int m, digit = 0;
    while (num != 0)
    {
        m = num % 10;
        digit++;
        num /= 10;
    }
    return digit;
}

int main()
{
    int n, d;

    int result1 = 0;
    scanf("%d", &n);
    int n2 = n;
    n = abs(n);
    int n1 = n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    int digit = num_digit(n);

    while (n1 != 0)
    {
        d = n1 % 10;
        result1 += d * pow(10, digit - 1);
        digit--;
        n1 /= 10;
    }
    if (n2 < 0)
        cout << "-";
    cout << result1 << endl;
    return 0;
}
