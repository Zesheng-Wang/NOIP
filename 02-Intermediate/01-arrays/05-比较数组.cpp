#include <ios>
#include <iostream>
#include <iterator>
#include <cstring>
using namespace std;

int main() {
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30};
    cout << first << endl << second << endl;

    bool areEqual = true;
    for (int i = 0; i < sizeof(first) / sizeof(int); i++) {
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }
    }
    cout << boolalpha << areEqual;
    return 0;
}
