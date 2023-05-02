#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    string week[8] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int n;
    cin >> n;
    cout << week[n - 1];
    return 0;
}
