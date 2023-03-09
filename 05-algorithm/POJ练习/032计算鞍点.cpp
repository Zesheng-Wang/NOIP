#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int A[5][5], n = 5, i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> A[i][j];
    bool flag = 0;
    int row, col;
    for (row = 0; row < n; row++)
    {
        col = 0;
        for (j = 1; j < n; j++)
        {
            if (A[row][j] > A[row][col])
                col = j;
        }
        flag = 1;
        for (i = 0; i < n; i++)
        {
            if (A[i][col] < A[row][col])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag)
        cout << row + 1 << " " << col + 1 << " " << A[row][col] << endl;
    else
        cout << "not found" << endl;
    return 0;
}