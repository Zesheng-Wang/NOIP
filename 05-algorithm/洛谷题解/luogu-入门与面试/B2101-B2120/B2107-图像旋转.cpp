/*
 *@Description : B2107 图像旋转 
 *@Author : Zesheng Wang
 *@Date : 2022/11/3 14:09
 *@Version : 1.0
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int m, n;
    int a[101][101], b[101][101], c[101][101];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[j][n -i - 1] = a[i][j];
        }
    }	
	
    // 输出结果
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
