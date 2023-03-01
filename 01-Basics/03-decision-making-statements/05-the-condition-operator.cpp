#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    a = a > b ? a : b;
    return 0;
}