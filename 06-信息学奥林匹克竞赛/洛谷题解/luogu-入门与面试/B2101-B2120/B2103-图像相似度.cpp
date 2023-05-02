/*
 *@Description : B2103 图像相似度
 *@Author : Zesheng Wang
 *@Date : 2022/8/9 11:23
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int m, n;
    int a[101][101], b[101][101];
    int sum = 0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == b[i][j]) {
                sum += 1;
            }
        }
    }
    printf("%.2lf", 100*sum * 1.0 / (m * n));
    return 0;
}
 */