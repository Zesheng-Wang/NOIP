#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 计算行列式的值
int determinant(vector<vector<int>> &matrix, int n)
{
    int det = 0;

    // 递归终止条件，当行列式为2阶时直接计算
    if (n == 2)
    {
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        return det;
    }

    // 定义子矩阵
    vector<vector<int>> subMatrix(n - 1, vector<int>(n - 1));

    for (int i = 0; i < n; i++)
    {
        int subRow = 0, subCol = 0;

        // 构造子矩阵
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (k != i)
                {
                    subMatrix[subRow][subCol++] = matrix[j][k];
                }
            }
            subRow++;
            subCol = 0;
        }

        // 递归计算行列式的值
        det += pow(-1, i) * matrix[0][i] * determinant(subMatrix, n - 1);
    }

    return det;
}

int main()
{
    int n;
    cin >> n; // 读取 n

    vector<vector<int>> matrix(n, vector<int>(n)); // 创建空的矩阵
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j]; // 读取元素
        }
    }

    int det = determinant(matrix, n); // 计算行列式的值
    cout << det << endl;              // 输出结果

    return 0;
}
