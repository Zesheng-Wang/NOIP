/*
 *@Description : B2048 计算邮资
 *@Author : Zesheng Wang
 *@Date : 2022/6/8 18:31
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int x, sum = 8;
    char c;
    scanf("%d %c", &x, &c);
    if (x > 1000) {
        if ((x - 1000) % 500 != 0) {
            sum += (((x - 1000) / 500 + 1) * 4);
        } else {
            sum += ((x - 1000)) / 500 * 4;
        }
    }
    if (c == 'y') {
        sum += 5;
    }
    printf("%d", sum);
    return 0;
}
 */