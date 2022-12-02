#include <iostream>
using namespace std;

int main() {
    int numbers[3] = {10, 20, 30};
    // C++ : structured binding
    // Javascript : destructuring
    // Python : unpacking
    auto [x, y, z] = numbers;
    cout << x <<" "<< y <<" "<< z;
    return 0;
}
