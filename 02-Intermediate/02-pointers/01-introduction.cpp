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
    return 0;
}
