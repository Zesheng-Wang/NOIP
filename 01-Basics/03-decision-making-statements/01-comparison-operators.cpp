#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 10;
    x > 5;
    // >、<、>=、<=、==、!=
    int y = 5;
    bool result = (x != y);
    cout << boolalpha << result;
    return 0;
}