#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 9 == 0)
        cout << "KFC";
    else
        cout << "home";
    return 0;
}
