#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int factortal = 1;
    for (int i = 1; i <= n; i++)
    {
        factortal *= i;
        sum += factortal;
    }

    return 0;
}