#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows, cols;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}