/*
 *@Description : B2079 求出 e 的值
 *@Author : Zesheng Wang
 *@Date : 2022/6/23 17:24
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

double facator(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * facator(n - 1);
    }
}

int main() {
    int n;
    double a[100];
    double e = 0.0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        a[i] = 1.0 / facator(i);
    }
    for (int i = 0; i <= n; i++) {
        e += a[i];
    }
    printf("%.10lf", e);
    return 0;
}
 */