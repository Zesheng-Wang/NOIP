#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
string s1, s2;
int main()
{

    getline(cin, s1);
    getline(cin, s2);
    if (s1.find(s2) != s1.npos)
        cout << "yes";
    else
        cout << "no" << endl;
    return 0;
}
