#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct person
{
    string name;
    double tall = 0;
    string gender;
};

vector<person> p;

bool cmp(person a, person b)
{
    if (a.gender != b.gender)
    {
        return a.gender == "male"; // 男生优先
    }
    else
    {
        if (a.gender == "male")
        {
            return a.tall < b.tall; // 男生排序从矮到高
        }
        else
        {
            return a.tall > b.tall; // 女生排序从高到矮
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    // 读入人员信息
    for (int i = 0; i < n; i++)
    {
        person temp;
        cin >> temp.gender >> temp.tall;
        p.push_back(temp);
    }
    // 按照要求排序
    sort(p.begin(), p.end(), cmp);

    // 输出最后的排序结果
    int cnt = 1;
    for (auto it = p.begin(); it != p.end(); it++)
    {
        printf("%.2lf", it->tall);
        if (cnt != n)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
        cnt++;
    }

    return 0;
}