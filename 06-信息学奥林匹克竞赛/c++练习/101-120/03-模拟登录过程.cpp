#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int pwd;
    do
    {
        cin >> pwd;
        if (pwd == 123456)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            cout << "NO" << endl;
        }
    } while (pwd != 123456);
    return 0;
}
