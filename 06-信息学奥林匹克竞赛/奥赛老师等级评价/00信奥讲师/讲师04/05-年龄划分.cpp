#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0 && n <= 6)
        cout << "child";
    else if (n >= 7 && n <= 17)
        cout << "teenage";
    else if (n >= 18 && n <= 40)
        cout << "youth";
    else if (n >= 41 && n <= 65)
        cout << "midlife";
    else if (n >= 66)
        cout << "old";
    return 0;
}
    