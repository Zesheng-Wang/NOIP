#include <iostream>
using namespace std;

int main()
{
    string s;
    int k, c, q;
    bool ing_exist = false, er_exist = false, ly_exist = false;
    getline(cin, s);
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'i' && s[i + 1] == 'n' && s[i + 2] == 'g')
        {
            ing_exist = true;
            k = i;
        }
        if (s[i] == 'e' && s[i + 1] == 'r')
        {
            er_exist = true;
            c = i;
        }
        if (s[i] == 'l' && s[i + 1] == 'y')
        {
            ly_exist = true;
            q = i;
        }
    }
    if (ing_exist)
        cout << "ing " << k << endl;
    if (er_exist)
        cout << "er " << c << endl;
    if (ly_exist)
        cout << "ly " << q << endl;
    return 0;
}