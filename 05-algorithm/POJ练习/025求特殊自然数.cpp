#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string seven_base(int num)
{
    int j = 0;
    string s = "";
    while (num != 0)
    {
        int m = num % 7;
        s += to_string(m);
        j++;
        num /= 7;
    }
    return s;
}

string nine_base(int num)
{
    int j = 0;
    string s = "";
    while (num != 0)
    {
        int m = num % 9;
        s += to_string(m);
        j++;
        num /= 9;
    }
    string result = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        result += s[i];
    }
    return result;
}

int main()
{

    for (int i = 121; i < 700; i++)
    {
        string s = seven_base(i);
        string s1 = nine_base(i);
        if (s == s1)
        {
            string result = "";
            for (int i = s.length() - 1; i >= 0; i--)
            {
                result += s[i];
            }
            cout << i << endl
                 << result << endl
                 << s << endl;
        }
    }

    return 0;
}