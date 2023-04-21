#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (isupper(c))
        cout << "capital";
    else if (islower(c))
        cout << "lowercase";
    else if (isdigit(c))
        cout << "number";
    else
        cout << "others";
    return 0;
}
