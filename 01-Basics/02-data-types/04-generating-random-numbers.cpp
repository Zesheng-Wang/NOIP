#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // Jan 1 1970 : time(0) or time(nullptr) is ok
    srand(time(nullptr));
    int a = 1;
    int b = 10;
    int result = rand() % (b - a + 1) + a;
    cout << result;
    return 0;
}