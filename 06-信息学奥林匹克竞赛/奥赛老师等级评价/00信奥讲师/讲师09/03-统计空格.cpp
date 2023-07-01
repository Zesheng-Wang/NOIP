#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int sum_space = 0;
    string s;
    getline(cin, s);
    for (char c : s)
    {
        if (isspace(c))
        {
            sum_space += 1;
        }
    }
    cout << sum_space;

    return 0;
}
