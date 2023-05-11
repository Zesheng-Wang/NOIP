#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    cout << s;
    swap(s.front(), s.back());
    cout << s;
    return 0;
}
