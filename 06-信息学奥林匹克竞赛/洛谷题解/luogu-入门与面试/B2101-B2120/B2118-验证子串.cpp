#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    // s1 = "abc";
    // s2 = "dddncabca";
    bool flag = false;
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 <= len2) {
        for (int i = 0; i < len2; i++) {
            string temp = "";
            for (int j = i; j < len2; j++) {
                temp += s2[j];
                if (temp == s1) {
                    flag = true;
                    cout << s1 << " is substring of " << s2;
                    return 0;
                }
            }
        }
    } 
    if (len1 > len2) {
        for (int i = 0; i < len1; i++) {
            string temp = "";
            for (int j = i; j < len1; j++) {
                temp += s1[j];
                if (temp == s2) {
                    flag = true;
                    cout << s2 << " is substring of " << s1;
                    return 0;
                } 
            }
        }
    }
    if (!flag){
        cout << "No substring";
    }
    return 0;
}
