#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int sum_c = 0, sum_d = 0;
    string s;
    getline(cin, s);
    for (char c : s)
    {
        if (isprint(c))
        {
            sum_c += 1;
        }
        if (isdigit(c))
        {
            sum_d += 1;
        }
    }
    cout << sum_c << endl
         << sum_d;

    return 0;
}
