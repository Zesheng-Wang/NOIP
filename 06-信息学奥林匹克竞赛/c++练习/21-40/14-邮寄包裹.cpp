#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 10)
        cout << n;
    else if (n > 10 && n <= 20)
        cout << 2 * n;
    else if (n > 20 && n <= 30)
        cout << 3 * n;
    else if (n > 30)
        cout << "overweight";
    return 0;
}
