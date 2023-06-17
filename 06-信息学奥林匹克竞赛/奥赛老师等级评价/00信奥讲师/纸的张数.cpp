#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a, b;
    int k;
    scanf("%lf %lf", &a, &b);
    k = a / b;
    printf("%.2lf", a - k * b);
    return 0;
}