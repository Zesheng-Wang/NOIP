/*
初见于百炼 : 2692
http://bailian.openjudge.cn/practice/2692/
描述
赛利有12枚银币。其中有11枚真币和1枚假币。假币看起来和真币没有区别，但是重量不同。但赛利不知道假币比真币轻还是重。于是他向朋友借了一架天平。朋友希望赛利称三次就能找出假币并且确定假币是轻是重。例如:如果赛利用天平称两枚硬币，发现天平平衡，说明两枚都是真的。如果赛利用一枚真币与另一枚银币比较，发现它比真币轻或重，说明它是假币。经过精心安排每次的称量，赛利保证在称三次后确定假币。
*/
#include <cstring>
#include <iostream>

using namespace std;
char Left[3][7];   // 天平左边硬币
char Right[3][7];  // 天平右边硬币
char result[3][7]; // 结果
bool IsFake(char c, bool light);
// light 为真表示假设假币为轻，否则表示假设假币为重
bool IsFake(char c, bool light)
// light 为真表示假设假币为轻，否则表示假设假币为重
{
    for (int i = 0; i < 3; ++i)
    {
        char *pLeft, *pRight; // 指向天平两边的字符串
        if (light)
        {
            pLeft = Left[i];
            pRight = Right[i];
        }
        else
        { // 如果假设假币是重的，则把称量结果左右对换
            pLeft = Right[i];
            pRight = Left[i];
        }
        switch (result[i][0])
        { // 天平右边的情况
        case 'u':
            if (strchr(pRight, c) == NULL)
                return false;
            break;
        case 'e':
            if (strchr(pLeft, c) || strchr(pRight, c))
                return false;
            break;
        case 'd':
            if (strchr(pLeft, c) == NULL)
                return false;
            break;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; ++i)
            cin >> Left[i] >> Right[i] >> result[i];
        for (char c = 'A'; c <= 'L'; c++)
        {
            if (IsFake(c, true))
            {
                cout << c << " is the counterfeit coin and it is light.\n";
                break;
            }
            else if (IsFake(c, false))
            {
                cout << c << " is the counterfeit coin and it is heavy.\n";
                break;
            }
        }
    }
    return 0;
}