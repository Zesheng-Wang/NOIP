#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (abs(x) <= 1 && abs(y) <= 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}