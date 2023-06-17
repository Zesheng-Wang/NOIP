#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        cout << s[i - 1];
    }
    return 0;
}