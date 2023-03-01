#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i % 3 == 0)
            break;
        cout << i << endl;
    }
    return 0;
}