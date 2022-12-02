#include <iostream>
using namespace std;


int main() {
    // int numbers[5];
    int numbers[5] = {10, 20};
    cout << endl;
    // 迭代遍历
    for (int number : numbers){
        cout << number << " ";
    }
    cout << endl;
    for (auto number : numbers){
        cout << number << " ";
    }
    cout << endl;
    int len = sizeof(numbers) / sizeof(int);
    len = size(numbers);  // size函数计算 大小
    // 索引遍历
    for (int i=0; i<5; i++){
        cout << i << " ";
    }
}
