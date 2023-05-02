#include <iostream>
using namespace std;

int main() {
    string s, new_s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            new_s += (s[i] + s[0]);
            break;
        }
        char m = s[i];
        char n = s[i + 1];
        new_s += (m + n);
    }
    cout << new_s;
    return 0;
}
