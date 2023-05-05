#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int s = t % 60;
    int m = t / 60 % 60;
    int h = t / 3600;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
