#include <iostream>
#include <vector>

using namespace std;

// 计算宝藏的钥匙
int calculateTreasureKey(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int treasureKey = 0;

    for (int i = 0; i < n; i++)
    {
        treasureKey += matrix[i][i];         // 主对角线上的数字之和
        treasureKey += matrix[i][n - i - 1]; // 副对角线上的数字之和
    }

    if (n % 2 == 1)
    {
        int center = n / 2;
        treasureKey -= matrix[center][center]; // 减去中间点的数字，因为它被重复计算了一次
    }

    return treasureKey;
}

int main()
{
    int n;
    cin >> n; // 读取方阵的大小

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j]; // 读取方阵中的数字
        }
    }

    int treasureKey = calculateTreasureKey(matrix); // 计算宝藏的钥匙
    cout << treasureKey << endl;                    // 输出结果

    return 0;
}
