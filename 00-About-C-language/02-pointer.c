#include "stdio.h"

int main(void)
{
    // 取地址运算
    int a;
    a = 6;
    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(int));

    int i = 0;
    printf("0x%x\n", &i);
    printf("%p\n", &i);
    return 0;
}