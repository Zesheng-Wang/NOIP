#include <iostream>
using namespace std;

#define NUM 10  // 符号常量 便于修改

int numbers[NUM];
int main() {

    for (int i=0; i<NUM; i++){
        cin >> numbers[i];
    }
    for (int i=NUM-1; i>=0; i--){
        cout << numbers[i] << " ";
    }
    return 0;
}
