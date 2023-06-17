#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    int count = 0;
    getline(cin, s);
    for (char c : s)
    {
        if (c == ',')
        {
            count++;
        }
    }
    cout << count;

    return 0;
}