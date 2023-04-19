#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char c;
    cin >> c;
    cout << char(c - 1) << " " << c << " " << char(c + 1);
    return 0;
}
