#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 计算所有顾客的最少等待时间
int calculateMinimumWaitTime(vector<int> &paymentTimes)
{
    int n = paymentTimes.size();

    // 按照付款时间升序排序
    sort(paymentTimes.begin(), paymentTimes.end());

    int totalWaitTime = 0;
    for (int i = 0; i < n; i++)
    {
        // 第 i 个顾客的等待时间为前 i 个顾客的付款时间之和
        totalWaitTime += paymentTimes[i] * (n - i - 1);
    }

    return totalWaitTime;
}

int main()
{
    int n;
    cin >> n; // 读取排队的人数

    vector<int> paymentTimes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> paymentTimes[i]; // 读取每个人的付款时间
    }

    int minimumWaitTime = calculateMinimumWaitTime(paymentTimes); // 计算最少等待时间
    cout << minimumWaitTime << endl;                              // 输出结果

    return 0;
}
