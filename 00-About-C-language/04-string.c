#include "stdio.h"

int main(void)
{
    char word[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char *str = "Hello";
    char words[] = "Hello";
    char line[10] = "Hello";

    char *s = "Hello World";
    s[0] = 'B';
    char *s2 = "Hello World";
    char s3[] = "Hello World";
    printf("s = %p\n", s);
    printf("s2 = %p\n", s2);
    printf("Hello!s[0]=%c\n", s[0]);
    return 0;
}