/*
 *@Description : B2098 整数去重
 *@Author : Zesheng Wang
 *@Date : 2022/7/28 18:15
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, a[20001] = {0}, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    // Determine the elements after a, and set zero if there are repetitions
    for (int i = 1; i <= n; i++) {
        for (int j=i+1; j<=n ;j++){
            if (a[j] == a[i]){
                a[j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
 */