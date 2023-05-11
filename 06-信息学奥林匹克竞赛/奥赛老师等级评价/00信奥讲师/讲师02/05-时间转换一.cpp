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
    printf("%d:%d:%d", h, m, s);
    return 0;
}
