#include <bits/stdc++.h>
using namespace std;

struct stu
{
    int id;
    double score;
} s[107];

bool cmp(stu a, stu b)
{
    return a.score > b.score;
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i].id >> s[i].score;
    }
    sort(s + 1, s + 1 + n, cmp);
    cout << s[k].id << " " << s[k].score;
    return 0;
}
