#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2;
    char op;
    cin >> n1 >> op >> n2;
    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    case '%':
        cout << n1 % n2;
        break;
    }
    return 0;
}
