#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count++;
        }
    }
    cout << count;
}