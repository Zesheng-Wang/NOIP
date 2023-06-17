#include <bits/stdc++.h>
using namespace std;

void graph(int row, int col, char c)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << c;
        }
        cout << endl;
    }
}
int main()
{
    int row, col;
    char c;
    cin >> row >> col >> c;
    graph(row, col, c);
    return 0;
}
