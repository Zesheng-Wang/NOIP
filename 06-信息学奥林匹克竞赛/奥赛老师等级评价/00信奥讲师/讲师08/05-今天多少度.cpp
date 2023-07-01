#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double f;
    scanf("%lf", &f);
    printf("%.4lf", 5 * (f - 32) / 9.0);
    return 0;
}