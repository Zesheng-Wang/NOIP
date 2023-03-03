#include <iostream>
#include <cstdio>

using namespace std;

void PrintN(int N);
void print_n(int N);

void PrintN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }
}

void print_n(int N)
{
    if (N)
    {
        print_n(N - 1);
        printf("%d\n", N);
    }
}

int main()
{
    print_n(10);
    printf("*******************\n");
    PrintN(10);
    return 0;
}