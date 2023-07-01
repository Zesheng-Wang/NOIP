#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> students(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i];
    }
    sort(students.begin(), students.end());
    int votes = 0;
    for (int i = 0; i < (n+1)/2; i++) {
        votes += students[i]/2 + 1;
    }
    cout << votes << endl;
    return 0;
}