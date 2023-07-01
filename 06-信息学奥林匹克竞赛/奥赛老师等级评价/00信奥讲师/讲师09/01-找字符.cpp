#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    bool flag = false;
    getline(cin, s);
    for (char c : s)
    {
        if (int(c) % 3 == 0)
        {
            cout << c;
            flag = true;
        }
    }
    if (flag == false)
    {
        cout << "";
    }
    cout << endl
         << s.length();

    return 0;
}
