/*
 *@Description : B2067 药房管理
 *@Author : Zesheng Wang
 *@Date : 2022/6/14 14:24
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int m, n, a[100], sum = 0, count = 0;
    scanf("%d", &m);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        // 如果当前加入的数据超过剩余量 直接continue
        if (a[i] > m - sum) {
//            cout << a[i] << ' ';
            count += 1;
            continue;
        }
        sum += a[i];
    }
    printf("%d", count);
    return 0;
}
 */