/*
 *@Description : B2065 鸡尾酒疗法
 *@Author : Zesheng Wang
 *@Date : 2022/6/14 13:00
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, total_array[100], efficient_array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &total_array[i], &efficient_array[i]);
    }
    double source_method = efficient_array[0] * 1.0 / total_array[0];
    double improve_method;
    for (int i = 1; i < n; i++) {
        improve_method = efficient_array[i] * 1.0 / total_array[i];
        if (improve_method - source_method > 0.05) {
            printf("better\n");
        }
        if (source_method - improve_method > 0.05) {
            printf("worse\n");
        }
        if (abs(source_method - improve_method) - 0.05 < 0.001) {
            printf("same\n");
        }
    }
    return 0;
}
 */