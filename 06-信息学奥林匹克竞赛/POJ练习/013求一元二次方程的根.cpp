#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    // y = ax^2 + bx +c
    double x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);
    x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if (x1 == x2) {
        printf("x1=x2=%.5lf", x1);
    } else if (x1 > x2) {
        printf("x1=%.5lf;x2=%.5lf", x2, x1);
    } else if (b * b < 4 * a * c) {
        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", -1*b/(2*a), sqrt(4 * a * c - b * b) / (2 * a),
												  1*b/(2*a), sqrt(4 * a * c - b * b) / (2 * a));
    }
    return 0;
}
