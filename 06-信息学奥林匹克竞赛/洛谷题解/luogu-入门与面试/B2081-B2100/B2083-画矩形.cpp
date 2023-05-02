/*
 *@Description : B2083 画矩形
 *@Author : Zesheng Wang
 *@Date : 2022/6/24 11:24
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int a, b, f;
    char c;
    scanf("%d %d %c %d", &a, &b, &c, &f);
    // 1是实心，0是空心
    if (f != 0) {
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                printf("%c", c);
            }
            if (i == a) {
                return 0;
            }
            printf("\n");
        }
    } else if (f == 0) {
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= b; j++) {
                if (i == 1 || j == 1 || j == b || i == a) {
                    printf("%c", c);
                } else {
                    printf(" ");
                }
            }
            if (i == a) {
                return 0;
            }
            printf("\n");
        }
    }
    return 0;
}
*/