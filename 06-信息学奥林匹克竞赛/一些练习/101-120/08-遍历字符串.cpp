#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        cout << c << " ";
    }
    return 0;
}