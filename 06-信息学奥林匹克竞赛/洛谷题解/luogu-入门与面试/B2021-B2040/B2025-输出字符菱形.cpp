/*
 *@Description : B2025 输出字符菱形
 *@Author : Zesheng Wang
 *@Date : 2022/4/13 14:02
 *@Version : 1.0
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char ch = '*';
    printf("  %c\n", ch);
    printf(" %c%c%c\n", ch, ch, ch);
    printf("%c%c%c%c%c\n", ch, ch, ch, ch, ch);
    printf(" %c%c%c\n", ch, ch, ch);
    printf("  %c\n", ch);
    return 0;
}
