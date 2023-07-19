#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Member
{
    string name;
    int year;
    int month;
    int day;
};

bool compareMembers(const Member &m1, const Member &m2)
{
    // 计算年龄
    int age1 = 2022 - m1.year;
    int age2 = 2022 - m2.year;

    if (age1 == age2)
    {
        if (m1.month == m2.month)
        {
            return m1.day < m2.day;
        }
        return m1.month < m2.month;
    }
    return age1 > age2; // 按年龄从大到小排序
}

int main()
{
    int n;
    cin >> n;

    vector<Member> members(n);

    for (int i = 0; i < n; i++)
    {
        cin >> members[i].name >> members[i].year >> members[i].month >> members[i].day;
    }

    sort(members.begin(), members.end(), compareMembers);

    for (int i = 0; i < n; i++)
    {
        cout << members[i].name << endl;
    }

    return 0;
}
