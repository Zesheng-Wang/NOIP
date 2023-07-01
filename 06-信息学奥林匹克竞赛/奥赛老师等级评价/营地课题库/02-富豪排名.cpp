#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct magnate
{
    string name;     // 姓名
    double property; // 财产（亿元）
};

bool compare(const magnate &a, const magnate &b)
{
    return a.property > b.property; // 按财产从大到小排序
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<magnate> magnates(n);

    for (int i = 0; i < n; i++)
    {
        cin >> magnates[i].name >> magnates[i].property;
    }

    // 按财产从大到小排序
    sort(magnates.begin(), magnates.end(), compare);

    // 输出排名前K的富豪的姓名和财产
    for (int i = 0; i < k; i++)
    {
        cout << magnates[i].name << " " << magnates[i].property << endl;
    }

    return 0;
}
