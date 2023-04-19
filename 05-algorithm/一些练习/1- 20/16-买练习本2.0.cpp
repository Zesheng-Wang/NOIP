#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int sum, per, num;
    cin >> sum >> per >> num;
    if (per * num <= sum)
        cout << sum - per * num;
    else
        cout << "NO";
    return 0;
}
