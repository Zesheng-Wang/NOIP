#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int sum, per, num;
    cin >> sum >> per >> num;
    if (per * num <= sum)
        cout << 1;
    else
        cout << 0;
    return 0;
}
