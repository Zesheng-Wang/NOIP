#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct student
{
    string name;
    int score;
};
int main()
{
    int n, maxn = 0, k;
    cin >> n;
    student stu[100];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name >> stu[i].score;
        if (maxn < stu[i].score)
        {
            maxn = stu[i].score;
            k = i;
        }
    }
    cout << stu[k].name;

    return 0;
}
