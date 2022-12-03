/*
 *@Description : B2068 统计满足条件的 4 位数
 *@Author : Zesheng Wang
 *@Date : 2022/6/14 14:42
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, m, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        int g = m % 10;
        int s = m / 10 % 10;
        int b = m / 100 % 10;
        int q = m / 1000;
        if (g - s - b - q > 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
 */