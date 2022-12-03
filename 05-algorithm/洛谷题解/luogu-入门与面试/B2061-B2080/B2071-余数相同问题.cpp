/*
 *@Description : B2071 余数相同问题
 *@Author : Zesheng Wang
 *@Date : 2022/6/14 15:18
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, n = 0;
    int x[1000] = {0};
    scanf("%d %d %d", &a, &b, &c);
    int min_num = min(a, b);
    min_num = min(min_num, c);
    for (int i = 2; i <= min_num; i++) {
        if (a % i == b % i && b % i == c % i) {
            x[n] = i;
            n++;
        }
    }
    printf("%d", x[0]);
    return 0;
}
 */