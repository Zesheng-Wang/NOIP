/*
 *@Description : B2053 求一元二次方程
 *@Author : Zesheng Wang
 *@Date : 2022/6/9 18:34
 *@Version : 1.0
*/
/*
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
    } else if (x1 < x2) {
        printf("x1=%.5lf;x2=%.5lf", x1, x2);
    } else if (b * b < 4 * a * c) {
        printf("No answer!");
    }
    return 0;
}
 */