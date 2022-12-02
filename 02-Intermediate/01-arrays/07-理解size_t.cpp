#include <iostream>
#include <iterator>
#include <limits>
using namespace std;


int main() {

    // size_t = unsigned long long 
    int numbers[] = {10, 20, 30};
    cout << sizeof(long long) << endl;
    cout << sizeof(size_t) << endl;
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;
    size_t a = 10;
    cout << a;
    return 0;
}
