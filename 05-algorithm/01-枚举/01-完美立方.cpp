/*
初见于百炼 : 2810
http://bailian.openjudge.cn/practice/2810/
描述
形如a3= b3 + c3 + d3的等式被称为完美立方等式。例如123= 63 + 83 + 103 。
编写一个程序，对任给的正整数N (N≤100)，寻找所有的四元组(a, b, c, d)，
使得a3 = b3 + c3 + d3，其中a,b,c,d 大于 1, 小于等于N，且b<=c<=d。
*/
#include <cmath>
#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            for (int k = j + 1; k < i; k++)
            {
                for (int l = k + 1; l < i; l++)
                {
                    if (pow(i, 3) == pow(j, 3) + pow(k, 3) + pow(l, 3))
                    {
                        cout << "Cube = " << i << ", Triple = (" << j << ","
                             << k << "," << l << ")" << endl;
                    }
                }
            }
        }
    }
    return 0;
}