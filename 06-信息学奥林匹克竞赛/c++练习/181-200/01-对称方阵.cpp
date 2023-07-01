#include <iostream>
#include <vector>
using namespace std;

bool isSymmetricMatrix(const vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false; // 方阵不对称
            }
        }
    }

    return true; // 方阵对称
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    if (isSymmetricMatrix(matrix))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
