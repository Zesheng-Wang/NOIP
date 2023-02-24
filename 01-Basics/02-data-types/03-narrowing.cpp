#include <iostream>
using namespace std;
// 
int main()
{
    int number = 1'000'000;
    short another = number;
    short other {number};
    cout << other;
    return 0;
}