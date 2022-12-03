/*
 *@Description : B2094 不与最大数相同的数字之和
 *@Author : Zesheng Wang
 *@Date : 2022/7/15 16:20
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n, a[101];
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    int x = *max_element(a, a + n);
    // *** Remove duplicate max data ***
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            sum -= a[i];
        }
    }
    printf("%ld", sum);
    return 0;
}
 */