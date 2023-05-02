/*
 *@Description : B2082 数字统计
 *@Author : Zesheng Wang
 *@Date : 2022/6/24 11:17
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int digit_sum(int n) {
    int m, count = 0;
    while(n!=0){
        m = n % 10;
        if (m == 2){
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int l, r, sum = 0;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++) {
        sum += digit_sum(i);
    }
    printf("%d", sum);
    return 0;
}
 */