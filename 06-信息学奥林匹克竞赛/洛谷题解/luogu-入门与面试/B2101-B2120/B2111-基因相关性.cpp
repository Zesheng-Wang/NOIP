#include <iostream>
#include <string>

using namespace std;

int main() {
    double threshold_value, actual_value;
    cin >> threshold_value;
    string base1, base2;
    int count = 0;
    cin >> base1;
    cin >> base2;
    int len = base1.length();
    for (int i=0; i<len; i++){
        if (base1[i] == base2[i]){
            count++;
        }
    }
    actual_value = count * 1.0 / len;
    if (actual_value >= threshold_value){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}
