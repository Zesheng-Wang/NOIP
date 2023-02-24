#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    double y = 2.2;
    // int z = x + (int)y;
    int z = x + static_cast<int>(y); // 静态编译
    cout << z;
    return 0;
}