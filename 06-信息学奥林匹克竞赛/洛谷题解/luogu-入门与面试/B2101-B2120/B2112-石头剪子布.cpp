#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string p1, p2;
        cin >> p1 >> p2;
        if (p1[0] == 'R' && p2[0] == 'S' || p1[0] == 'S' && p2[0] == 'P' ||
            p1[0] == 'P' && p2[0] == 'R') {
            cout << "Player1" << endl;
        }
        else if (p1[0] == 'R' && p2[0] == 'P' || 
            p1[0] == 'P' && p2[0] == 'S' ||
            p1[0] == 'S' && p2[0] == 'R') {
            cout << "Player2" << endl;
        }
        else {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
