#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    char n;
    cin >> n;
    int s = 800;
    switch (n)
    {
    case '1':
        s = 900;
        break;
    case '2':
        s = 1000;
        break;
    case '3':
        s = 1100;
        break;
    case '4':
        s = 1200;
        break;
    }
    cout << s << endl;
    if (s >= 1000)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
