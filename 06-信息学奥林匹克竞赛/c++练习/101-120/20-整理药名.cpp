#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    cout << (char)toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        cout << (char)tolower(s[i]);
    }

    return 0;
}