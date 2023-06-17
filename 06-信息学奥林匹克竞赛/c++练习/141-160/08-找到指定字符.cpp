#include <bits/stdc++.h>
using namespace std;

int stats(string s, char target)
{
    int count = 0;
    for (char c : s)
    {
        if (c == target)
            count++;
    }
    return count;
}
int main()
{
    string s;
    getline(cin, s);
    char target;
    cin >> target;
    cout << stats(s, target);
    return 0;
}
