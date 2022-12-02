#include <iostream>
using namespace std;


int linearSearch(int numbers[], int size, int value){
    for (int i=0; i<size; i++){
        cout << numbers[i] << " " << value << endl;
        if (numbers[i] == value){
            return i;
        }
    }
   return -1;
}


int main() {
    int numbers[] = {10, 20, 30};
    int value;
    cin >> value;
    cout << linearSearch(numbers, sizeof(numbers)/sizeof(int), value);
    return 0;
}
