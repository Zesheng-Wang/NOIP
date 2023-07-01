#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int diagonalSum = 0; // 对角线和

    for (int i = 0; i < n; i++)
    {
        diagonalSum += matrix[i][i];
        diagonalSum += matrix[i][n - i - 1];
    }

    // 如果矩阵的维度为奇数，则副对角线上的中间元素会被重复计算，需要减去
    if (n % 2 == 1)
    {
        diagonalSum -= matrix[n / 2][n / 2];
    }

    cout << diagonalSum << endl;

    return 0;
}
