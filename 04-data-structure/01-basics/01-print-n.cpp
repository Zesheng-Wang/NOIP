#include <iostream>
#include <cstdio>

using namespace std;

void PrintN(int N);
void print_n(int N);

void PrintN(int N)
{
    for (int i = 1; i <= N; i++)
    {
        printf("%d ", i);
    }
}

void print_n(int N)
{
    if (N)
    {
        print_n(N - 1);
        printf("%d ", N);
    }
}

int main()
{
    print_n(100000);
    printf("*******************\n");
    PrintN(100000);
    return 0;
}