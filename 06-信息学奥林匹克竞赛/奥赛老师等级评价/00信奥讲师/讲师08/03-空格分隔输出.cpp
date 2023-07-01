#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    char a;
    int b;
    float c;
    double d;
    cin >> a >> b >> c >> d;
    printf("%c %d %.6f %.6lf", a, b, c, d);
    return 0;
}
