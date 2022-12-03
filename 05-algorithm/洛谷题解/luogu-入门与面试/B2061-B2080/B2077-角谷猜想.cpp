/*
 *@Description : B2077 角谷猜想
 *@Author : Zesheng Wang
 *@Date : 2022/6/23 16:34
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1){
        printf("End");
        return 0;
    }
    while (n!=0) {
        if (n % 2 == 0) {
            printf("%d/%d=%d\n", n, 2, n / 2);
            n /= 2;
            if (n == 1) {
                printf("End");
                break;
            }
            continue;
        } else {
            printf("%d*%d+1=%d\n", n, 3, n * 3 + 1);
            n = n * 3 + 1;
        }
    }

    return 0;
}
 */