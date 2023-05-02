/*
 *@Description : B2096 直方图
 *@Author : Zesheng Wang
 *@Date : 2022/7/28 15:51
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, a[100001] = {0}, m, max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        if (max < m){
            max = m;
        }
        a[m] += 1;
    }
    for (int i = 0; i <= max; i++) {
        printf("%d", a[i]);
        if (i < max){
            printf("\n");
        }
    }

    return 0;
}
 */