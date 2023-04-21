#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a >= 80)
        cout << "A";
    else if (a >= 60 && a < 80)
        cout << "B";
    else
        cout << "C";
    return 0;
}
