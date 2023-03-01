#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numbers[] = {1, 2, 3};
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << numbers[i] << endl;
    }

    for (int number : numbers)
    {
        cout << number << endl;
    }
    return 0;
}