#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int b_h, b_m;
    int a_h, a_m;
    cin >> b_h >> b_m;
    cin >> a_h >> a_m;
    cout << (a_h * 60 + a_m) - (b_h * 60 + b_m);

    return 0;
}