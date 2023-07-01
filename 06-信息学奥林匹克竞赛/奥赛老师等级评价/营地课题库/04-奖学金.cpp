#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct stu
{
    int num = 0;
    int Chinese = 0, math = 0, english = 0;
    int total_sum = 0;
};
vector<stu> s;

bool cmp(stu a, stu b)
{
    if (a.total_sum != b.total_sum)
    {
        return a.total_sum > b.total_sum; // 总分降序排列
    }
    else if (a.Chinese != b.Chinese)
    {
        return a.Chinese > b.Chinese; // 语文成绩降序排列
    }
    else
    {
        return a.num < b.num;
    } // 学号升序排列
}

int main()
{
    int n;
    cin >> n;
    // 输入数据保存到vector数组 s
    for (int i = 0; i < n; i++)
    {
        stu temp;
        temp.num = i + 1;
        cin >> temp.Chinese >> temp.math >> temp.english;
        temp.total_sum = temp.Chinese + temp.math + temp.english;
        s.push_back(temp);
    }

    // sort()
    sort(s.begin(), s.end(), cmp);

    // 输出前5个学生的信息
    for (int i = 0; i < 5; i++)
    {
        cout << s[i].num << " " << s[i].total_sum << endl;
    }
    return 0;
}