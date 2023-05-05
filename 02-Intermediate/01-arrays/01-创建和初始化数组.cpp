#include <iostream>
using namespace std;

 
int main() {
    // int numbers[5];
    int numbers[5] = {10, 20};
    numbers[0] = 10;
    numbers[4] = 20;
    cout << numbers;  // 打印地址
    return 0;
}
