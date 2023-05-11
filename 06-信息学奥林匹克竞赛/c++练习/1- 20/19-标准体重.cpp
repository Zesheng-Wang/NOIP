#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int s = h - 110;
    if (w - s >= 5)
        cout << "Fat";
    else if (w - s <= 5)
        cout << "Normal";
    return 0;
}
