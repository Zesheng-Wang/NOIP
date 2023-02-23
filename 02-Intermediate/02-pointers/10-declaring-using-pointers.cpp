#include <iostream>
using namespace std;

int main()
{

    int number = 10;
    cout << &number << endl;

    int *ptr = &number;
    cout << *ptr << endl;

    int *ptr1;
    cout << ptr1 << endl;

    int *ptr2 = nullptr;
    cout << ptr2 << endl; 
    return 0;
}