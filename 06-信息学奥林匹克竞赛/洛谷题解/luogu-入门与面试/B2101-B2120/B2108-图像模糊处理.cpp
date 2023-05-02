#include <cmath>
#include <cstdio>
#include <iostream>


using namespace std;

int main() {
    int n;
    int m;
    double matrix[101][101];
    double new_matrix[101][101];
    cin >> n >> m;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= m; col++) {
            cin >> matrix[row][col];
        }
    }
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= m; col++) {
            if (row == 1 || row == n || col == 1 || col == m) {
                new_matrix[row][col] = matrix[row][col];
            } else {
                new_matrix[row][col] =
                    round((matrix[row - 1][col] + matrix[row + 1][col] +
                     matrix[row][col - 1] + matrix[row][col + 1] + matrix[row][col]) /
                    5);
            }
        }
    }
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= m; col++) {
            cout << new_matrix[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}