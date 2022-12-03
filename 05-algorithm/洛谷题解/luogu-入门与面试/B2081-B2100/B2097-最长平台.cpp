/*
 *@Description : B2097 最长平台
 *@Author : Zesheng Wang
 *@Date : 2022/7/28 16:43
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, m, a[3001] = {0}, max = -1, k = 1, len[2001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //if continuous k++ else k=1
    for (int i = 0; i <= n; i++) {
        m = a[i];
        if (m == a[i + 1]) {
            k++;
            if (max < k) {
                max = k;
            }
        } else {
            k = 1;
            continue;
        }
    }
    printf("%d", max);
    return 0;
}
 */