/*
 *@Description : B2064 斐波那契数列
 *@Author : Zesheng Wang
 *@Date : 2022/6/10 15:41
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int fibonacci(int n) {
    int result;
    if (n == 1 || n == 2) {
        return 1;
    } else {
        result = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return result;
}

int main() {
    int n, a[100] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", fibonacci(a[i]));
    }
    return 0;
}
 */