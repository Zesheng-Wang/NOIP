#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char c;
    cin >> c;
    cout << char(c - 2) << " " << char(c - 1) << " "
         << char(c + 1) << " " << char(c + 2);
    return 0;
}
