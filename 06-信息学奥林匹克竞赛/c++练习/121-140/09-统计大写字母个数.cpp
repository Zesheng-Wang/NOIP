#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    getline(cin, s);
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
