#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;
    do
    {
        cout << "Number:";
        cin >> number;
    } while (number < 1 || number > 5);

    return 0;
}