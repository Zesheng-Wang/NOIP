#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    char n;
    cin >> n;
    switch (n)
    {
    case 'A':
        cout << 8500;
        break;
    case 'B':
        cout << 8200;
        break;
    case 'C':
        cout << 8000;
        break;
    case 'D':
        cout << 7800;
        break;
    case 'E':
        cout << 7500;
        break;
    default:
        cout << "error" << endl
             << 8000;
    }
    return 0;
}
