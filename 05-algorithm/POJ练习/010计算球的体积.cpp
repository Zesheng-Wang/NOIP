#include <iostream>
#include <cstdio>
#define PI 3.14
using namespace std;

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.2lf", 4*1.0/3*PI*r*r*r);
    return 0;
}