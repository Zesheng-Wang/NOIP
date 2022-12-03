/*
 *@Description : B2069 求分数序列和
 *@Author : Zesheng Wang
 *@Date : 2022/6/14 14:48
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int q[100], p[100];
    int n;
    double sum;
    scanf("%d", &n);
    p[1] = 1;
    q[1] = 2;
    for (int i = 1; i <= n; i++) {
        sum += q[i] * 1.0 / p[i];
        q[i + 1] = q[i] + p[i];
        p[i + 1] = q[i];
    }
    printf("%.4lf", sum);
    return 0;
}
 */