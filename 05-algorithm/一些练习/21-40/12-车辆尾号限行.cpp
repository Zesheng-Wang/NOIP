#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    string week[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int n;
    cin >> n;
    if (n == 0 || n == 5)
        cout << week[0];
    else if (n == 1 || n == 6)
        cout << week[1];
    else if (n == 2 || n == 7)
        cout << week[2];
    else if (n == 3 || n == 8)
        cout << week[3];
    else if (n == 4 || n == 9)
        cout << week[4];

    return 0;
}
