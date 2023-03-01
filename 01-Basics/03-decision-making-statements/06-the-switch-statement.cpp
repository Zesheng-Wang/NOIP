#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int input = 0;
    cin >> input;
    switch (input)
    {
    case 1:
        cout << "You selected 1";
        break;
    case 2:
        cout << "You selected 2";
        break;
    default:
        cout << "Good Bye";
    }
    return 0;
}