#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int even_sum = 0;
    int odd_sum = 0;
    for (int i = 0; i <= 100; i += 2)
    {
        even_sum += i;
    }
    for (int i = 1; i <= 100; i += 2)
    {
        odd_sum += i;
    }
    cout << even_sum << " " << odd_sum;
    return 0;
}
