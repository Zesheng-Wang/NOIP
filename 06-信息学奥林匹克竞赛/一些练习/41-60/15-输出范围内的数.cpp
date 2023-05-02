#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < 100; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i < 100; i += 2)
    {
        cout << i << " ";
    }
    return 0;
}
