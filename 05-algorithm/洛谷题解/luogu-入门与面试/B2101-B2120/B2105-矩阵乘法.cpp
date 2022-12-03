/*
 *@Description : B2105 矩阵乘法
 *@Author : Zesheng Wang
 *@Date : 2022/8/9 12:31
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int m, n, k;
    int a[101][101], b[101][101], c[101][101];
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // 计算矩阵相乘
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            c[i][j] = 0;
            for (int q=0; q<m; q++){
                c[i][j] += a[i][q] * b[q][j];
            }
        }
    }

    // 输出结果
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/