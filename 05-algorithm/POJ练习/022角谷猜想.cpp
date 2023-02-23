#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long n;
    scanf("%ld", &n);
    if (n == 1)
    {
        printf("End");
        return 0;
    }
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            printf("%ld/%ld=%ld\n", n, 2, n / 2);
            n /= 2;
            if (n == 1)
            {
                printf("End");
                break;
            }
            continue;
        }
        else
        {
            printf("%ld*%ld+1=%ld\n", n, 3, n * 3 + 1);
            n = n * 3 + 1;
        }
    }

    return 0;
}