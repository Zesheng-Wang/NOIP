#include <iostream>

using namespace std;

int main() {
    /*
    int lucyNumber[5] = {2, 3, 5, 7, 9};
    cout << lucyNumber << endl;
    cout << &lucyNumber[0] << endl;
    cout << lucyNumber[2] << endl;
    cout << *(lucyNumber+2) << endl;
    */
    int lucyNumber[5];
    for (int i = 0; i < 5; i++) {
        cout << "Number: ";
        cin >> lucyNumber[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << *(lucyNumber + i);
    }
    return 0;
}