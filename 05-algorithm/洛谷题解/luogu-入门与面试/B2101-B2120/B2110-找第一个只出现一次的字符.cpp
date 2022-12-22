#include <iostream>
#include <string>

using namespace std;

int bucket[1110];
int main() {
    string s;
    cin >> s;
    bool flag = false;
    
    int len = s.length();
    for (int i = 0; i < len; i++) {
        bucket[int(s[i])] += 1;
    }
    for (int i = 0; i < 1110; i++) {
        if (bucket[int(s[i])] == 1) {
            cout << s[i];
            return 0;
        }
    }
    cout << "no";
    return 0;
}
