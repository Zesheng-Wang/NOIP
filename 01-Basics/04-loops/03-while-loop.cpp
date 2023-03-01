#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number = 0;
    while (number < 1 || number > 5)
    {
        cout << "Number:";
        cin >> number;
    }
    return 0;
}