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
    double h,s;
    scanf("%lf", &h);
    s = h;
    for (int i = 2; i <= 10; i++)
    {
        s += h;
        h /= 2;
    }
    h /= 2;
    printf("%g\n%g", s,h);
    return 0;
}
