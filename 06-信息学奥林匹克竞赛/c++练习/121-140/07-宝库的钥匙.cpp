#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 创建数组两个字符数组，用于接收输入
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    int length = s.length();
    for (int i = 0; i < length / 2; i++)
    {
        cout << s[i];
    }
    cout << s1;
    for (int i = length / 2; i < length; i++)
    {
        cout << s[i];
    }
    return 0;
}