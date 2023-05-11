#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int g = a % 10;
    int s = a / 10;
    cout << g + s;
    return 0;
}