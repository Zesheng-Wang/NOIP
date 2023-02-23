#include <iostream>
using namespace std;

int main()
{
    int m, a, b, c = 0, d = 0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
        {
            c++;
        }
        else
        {
            if (c > d)
            {
                d = c;
            }
            c = 0;
        }
    }
    if (c > d)
        cout << c << endl;
    else
        cout << d << endl;
    return 0;
}
