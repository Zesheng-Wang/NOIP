#include <iostream>

using namespace std;

int main()
{
    int sum = 15;
    int i = 1;
    int s = 15;
    while (sum <= 312)
    {
        cout << i << " " << s << " " << sum << endl;
        i++;
        s += 2;
        sum += s;
    }
    return 0;
}
