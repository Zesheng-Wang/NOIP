#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    for (int c = 'A'; c <= 'Z'; c++)
    {
        cout << char(c) << " ";
    }
    cout << endl;
    for (int c = 'Z'; c >= 'A'; c--)
    {
        cout << char(c) << " ";
    }
    return 0;
}
