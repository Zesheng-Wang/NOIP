/*
 *@Description : B2076 球弹跳高度的计算
 *@Author : Zesheng Wang
 *@Date : 2022/6/16 17:56
 *@Version : 1.0
 */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int h;
    double result, sum = 0;
    scanf("%d", h);
    for (int i = 0; i < 10; i++)
    {
        sum += h;
        h *= 2;
    }
    printf("%llf", sum);
    return 0;
}
