#include <iostream>

using namespace std;

void printNumbers(int numbers[])
{
    numbers[0] = 0;
}

int main()
{
    int numbers[] = {10, 20, 30};
    cout << "数组名实际是一个指针，指向数组的地址: " << numbers << endl;
    cout << "数组地址的值，指向a[0]存储的元素 " << *numbers << endl;
    int *ptr = numbers;
    cout << ptr[1] << endl;
    printNumbers(numbers);
    cout << numbers[0] << endl;
    return 0;
}
