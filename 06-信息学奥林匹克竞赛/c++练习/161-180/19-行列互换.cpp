#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    int k = 1;
    // 读取输入的方阵
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k <= n * n)
            {
                matrix[i][j] = k;
                k++;
            }
        }
    }

    // 行列互换
    vector<vector<int>> transposedMatrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    // 输出互换后的方阵
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
