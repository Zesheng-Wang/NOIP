/*
 *@Description : B2100 同行列对角线的格
 *@Author : Zesheng Wang
 *@Date : 2022/7/28 19:08
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n = 0, x = 0, y = 0;
    scanf("%d %d %d", &n, &x, &y);

    for (int i = 1; i <= n; i++) {
        printf("(%d,%d) ", x, i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("(%d,%d) ", i, y);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i - j == x - y) {
                printf("(%d,%d) ", i, j);
            }
        }
    }
    cout << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (i + j == x + y) {
                printf("(%d,%d) ", i, j);
            }
        }
    }
    return 0;
}
*/