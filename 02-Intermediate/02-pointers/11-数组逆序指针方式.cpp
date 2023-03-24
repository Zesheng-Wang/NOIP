#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30};
    int size = sizeof(numbers) / sizeof(int);
    cout << size << endl;
    int *ptr = numbers;
    //    int* ptr = &numbers[size - 1];

    for (int i = size - 1; i >= 0; i--)
        cout << *(ptr + i) << " ";
    return 0;
}
