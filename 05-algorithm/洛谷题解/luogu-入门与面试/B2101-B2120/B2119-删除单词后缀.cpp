#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    bool flag2 = false;
    bool flag3 = false;
    for (int i = len - 1; i >= 0; i--) {
        if ((s[len - 2] == 'e' && s[len - 1] == 'r') ||
            (s[len - 2] == 'l' && s[len - 1] == 'y')) {
            flag2 = true;
            break;
        } else if (s[len - 3] == 'i' && s[len - 2] == 'n' &&
                   s[len - 1] == 'g') {
            flag3 = true;
            break;
        }
    }
    if (flag2) {
        for (int i = 0; i < len - 2; i++) {
            cout << s[i];
        }
    }
    if (flag3) {
        for (int i = 0; i < len - 3; i++) {
            cout << s[i];
        }
    }

    return 0;
}
