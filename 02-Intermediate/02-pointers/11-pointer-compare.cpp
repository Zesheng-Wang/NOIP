#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int *ptr_x = &x;
    int *ptr_y = &x;
    if (ptr_x == ptr_y)
    {
        cout << *ptr_x;
    }
    cout << "Same";

    return 0;
}
