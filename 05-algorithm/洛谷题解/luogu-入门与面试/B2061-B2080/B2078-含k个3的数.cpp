/*
 *@Description : B2078 含 k 个 3 的数
 *@Author : Zesheng Wang
 *@Date : 2022/6/23 16:52
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    // First Method
    long long m;
    int k, n, count = 0;
    scanf("%lld %d", &m, &k);
    while (m != 0) {
        n = m % 10;
        m = m / 10;
        if (n == 3) {
            count++;
        }
    }
    if (count == k) {
        printf("YES");
    } else {
        printf("NO");
    }
    // Second method
    char a[15];
    int k, count = 0;
    scanf("%s", a);
    scanf("%d", &k);
    for (int i = 0; i < 16; i++) {
        if (a[i] == '3') {
            count++;
        }
    }
    if (count == k) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
*/