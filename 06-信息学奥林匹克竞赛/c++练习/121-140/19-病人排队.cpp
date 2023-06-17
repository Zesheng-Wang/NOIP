#include <bits/stdc++.h>
using namespace std;
struct patient
{
    int id, age;
} st[305];
bool cmp(patient a, patient b)
{
    if (a.age > b.age)
        return true;
    else if (a.age < b.age)
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
        cin >> st[i].id >> st[i].age;
    }
    sort(st + 1, st + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
        cout << st[i].id << ' ' << st[i].age << "\n";
    return 0;
}
