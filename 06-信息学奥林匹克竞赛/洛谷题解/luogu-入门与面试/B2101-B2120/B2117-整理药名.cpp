#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[0] >= 'a' && s[0] <= 'z') {
                s[0] -= 32;
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                if (i != 0)
                    s[i] += 32;
            } else {
                s[i] = s[i];
            }
        }
        cout << s << endl;
    }
    return 0;
}
