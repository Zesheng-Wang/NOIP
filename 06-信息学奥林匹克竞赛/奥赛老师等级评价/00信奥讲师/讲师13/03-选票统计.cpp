#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[107];
    int n, li_num = 0, zhang_num = 0, sun_num = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (string str : s)
    {
        if (str.compare("li") == 0)
            li_num += 1;
        else if (str.compare("zhang") == 0)
            zhang_num += 1;
        else if (str.compare("sun") == 0)
            sun_num += 1;
    }
    cout << "li:" << li_num << endl;
    cout << "zhang:" << zhang_num << endl;
    cout << "sun:" << sun_num << endl;
    return 0;
}
