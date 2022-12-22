#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    for (char c : s) {
        if (c == 'A')
            cout << "T";
        else if (c == 'T')
            cout << "A";
        else if (c == 'G')
            cout << "C";
        else if (c == 'C')
            cout << "G";
    }
    return 0;
}
