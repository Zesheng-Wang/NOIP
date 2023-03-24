#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30};
    int *ptr = numbers;
    ptr++;
    ptr--;
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    return 0;
}
