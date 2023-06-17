#include <iostream>
using namespace std;

int main()
{
    double height = 100;
    int count = 0;
    while (height >= 0.5)
    {
        height /= 2;
        count += 1;
    }
    cout << count;
    return 0;
}