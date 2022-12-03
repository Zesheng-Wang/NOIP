/*
 *@Description : B2101 计算矩阵边缘元素之和
 *@Author : Zesheng Wang
 *@Date : 2022/7/30 18:30
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int m, n, a[101][101], sum = 0;
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if (m == 1 && n == 1) {
        printf("%d", a[1][1]);
        return 0;
    }
    for (int i = 1; i <= m; i++) {
        sum += a[i][1];
        sum += a[i][n];
        sum += a[1][i];
        sum += a[m][i];
    }

    printf("%d", sum - a[1][1] - a[1][n] - a[m][1] - a[m][n]);

    return 0;
}
 */