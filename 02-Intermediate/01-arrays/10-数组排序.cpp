#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 30, 20};
    int len = sizeof(numbers) / sizeof(int);
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < len; j++) {
            if (numbers[j] < numbers[j - 1])
                swap(numbers[j], numbers[j - 1]);
        }
    }
    for (int number : numbers) {
        cout << number << " ";
    }
    return 0;
}
