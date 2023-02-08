#include <iostream>

using namespace std;

int main() {
    int n = 5;
    cout << n << endl;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;

    cout << *ptr << endl;
    *ptr = 10;
    cout << n << endl;

    // declaring and using pointers
    int number = 10;
    cout << &number;
    // & : The address-of operator
    int* ptr1 = &number; // int* ptr = nullptr;
    cout << ptr1 << endl;
    // Indirection (de-referencing) operator 解除指针关联
    *ptr1 = 20;
    cout << number << endl;

    // exercise
    int x = 10;
    int y = 20;
    int* ptr2 = &x;
    *ptr2 *= 2;
    ptr2 = &y;
    *ptr2 *= 3;
    cout << x << " " << y << endl; // 20 60

    return 0;
}
