#include <bits/stdc++.h>
using namespace std;
struct stu
{
    int id;      // 学号
    int c, m, e; // 语、数、外
    int sum;
} st[305];
bool cmp(stu a, stu b)
{
    if (a.sum > b.sum)
        return true;
    else if (a.sum < b.sum)
        return false;
    else
    {
        if (a.id > b.id)
            return false;
        else
            return true;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        st[i].id = i; // 学号
        cin >> st[i].c >> st[i].m >> st[i].e;
        st[i].sum = st[i].c + st[i].m + st[i].e; // 总分
    }
    sort(st + 1, st + 1 + n, cmp);
    for (int i = 1; i <= 5; i++)
        cout << st[i].id << ' ' << st[i].sum << "\n";
    return 0;
}
