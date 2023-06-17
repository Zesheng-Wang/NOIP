#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string s1 = reverse(s.begin(), s.end());
    if (s == s1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}