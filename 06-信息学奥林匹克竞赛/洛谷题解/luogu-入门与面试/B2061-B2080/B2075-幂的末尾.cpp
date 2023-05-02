/*
 *@Description : B2075 幂的末尾
 *@Author : Zesheng Wang
 *@Date : 2022/6/16 17:34
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b, n = 1;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) {
        n = n * a;
        n = n % 1000;
    }
    int single_digit = n % 10;
    int ten_digit = n % 100 / 10;
    int hundred_digit = n % 1000 / 100;
    printf("%d%d%d", hundred_digit, ten_digit, single_digit);


    return 0;
}
 */