/*
 *@Description : B2102 计算鞍点
 *@Author : Zesheng Wang
 *@Date : 2022/7/30 19:30
 *@Version : 1.0
*/
/*
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int A[5][5], n = 5, i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            cin >> A[i][j];
    bool flag = 0;
    int row, col;
    for (row = 0; row < n; row++) {
        col = 0;
        for (j = 1; j < n; j++) {//查找第row行最大值的列号
            if (A[row][j] > A[row][col])
                col = j;
        }
        flag = 1;
        for (i = 0; i < n; i++) {//查找第col列最小值的行号，确定A[row][col]是否为鞍点
            if (A[i][col] < A[row][col]) {//A[row][col]不是鞍点
                flag = 0;
                break;
            }
        }
        if (flag) //A[row][col]是鞍点
            break;
    }
    if (flag)
        cout << row + 1 << " " << col + 1 << " " << A[row][col] << endl;
    else
        cout << "not found" << endl;
    return 0;
}
 */