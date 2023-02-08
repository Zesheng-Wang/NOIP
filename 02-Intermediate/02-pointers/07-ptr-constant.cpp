#include <iostream>
using namespace std;


int main() {
    const int x = 10;
    const int* ptr = &x;  // 如果变量是常量，那个指针变量也应该是常量
    cout << *ptr << endl;

    int y = 20;
    ptr = &y;
    cout << *ptr << endl;

    // 常量指针必须初始化
    int z = 10;
    int* const ptr1 = &z;

    int v = 20;
    // ptr1 = &v; 这里常量指针不能被赋值



    return 0;
}
