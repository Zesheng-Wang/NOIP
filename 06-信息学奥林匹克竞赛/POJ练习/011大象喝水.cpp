#include <iostream>
#include <cstdio>
#define PI 3.14
using namespace std;

int main()
{
    int h, r;
    double v;
    scanf("%d %d", &h, &r);
    v = PI * r * r * h / 1000;
    printf("%d", (int)(20 * 1.0 / v + 1));
    return 0;
}