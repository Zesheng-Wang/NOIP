#include <iostream>
#include <iterator>
using namespace std;

int main() {
    string s, s2;
    cin >> s;
    s2 = s;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == 'x') {
            s2[i] = 'a';
        } else if (s[i] == 'y') {
            s2[i] = 'b';
        } else if (s[i] == 'z') {
            s2[i] = 'c';
        } else if (s[i] == 'X') {
            s2[i] = 'A';
        } else if (s[i] == 'Y') {
            s2[i] = 'B';
        } else if (s[i] == 'Z') {
            s2[i] = 'C';
        } else {
            s2[i] = s[i] + 3;
        }
    }
    string s3;
    for (int i = len - 1; i >= 0; i--) {
        s3 += s2[i];
    }
    for (int i = 0; i < len; i++) {
        if (s3[i] >= 'a' && s3[i] <= 'z') {
            s3[i] -= 32;
        } else if (s3[i] >= 'A' && s3[i] <= 'Z') {
            s3[i] += 32;
        }
    }

    cout << s3;
    return 0;
}
