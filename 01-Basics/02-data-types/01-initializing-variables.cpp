#include <iostream>
using namespace std;

int main()
{
    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;
    auto isLight = true;
    // 现代C++可以使用大括号赋值，如果无初始值，默认为0
    int number  {1.2};
    cout << number;
    
    return 0;
}