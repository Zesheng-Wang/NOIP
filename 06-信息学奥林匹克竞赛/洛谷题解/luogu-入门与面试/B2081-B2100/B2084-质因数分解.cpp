/*
 *@Description : B2084 质因数分解
 *@Author : Zesheng Wang
 *@Date : 2022/6/24 12:50
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

bool is_prime(int num) {
    for (int i = 2; i * i <= num; i++) {    //遍历不大于num开方的数
        if (num % i == 0) return false;    //如果余数为0，说明i为因数，num不是素数
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (n == i * j && is_prime(i) && is_prime(j)) {
                if (i > j) {
                    printf("%d", i);
                    return 0;
                } else {
                    printf("%d", j);
                    return 0;
                }
            }
        }
    }
    return 0;
}*/