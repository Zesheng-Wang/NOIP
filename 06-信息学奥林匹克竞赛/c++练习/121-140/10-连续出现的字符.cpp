#include <iostream>
#include <string>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;
    char prev = '\0';
    int count = 0;
    for (char c : s)
    {
        if (c == prev)
        {
            count++;
            if (count == k)
            {
                cout << c << endl;
                return 0;
            }
        }
        else
        {
            prev = c;
            count = 1;
        }
    }
    cout << "No" << endl;
    return 0;
}