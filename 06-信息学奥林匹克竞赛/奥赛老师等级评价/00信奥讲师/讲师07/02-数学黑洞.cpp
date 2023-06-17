#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int black_hole(int num)
{
    int steps = 0;
    while (num != 6174 && steps <= 7)
    {
        string num_str = to_string(num);
        sort(num_str.begin(), num_str.end());
        int min_num = stoi(num_str);
        reverse(num_str.begin(), num_str.end());
        int max_num = stoi(num_str);
        num = max_num - min_num;
        steps++;
    }
    return steps;
}

int main()
{
    int c = 1234;
    cin >> c;
    int steps = black_hole(c);
    cout << steps << endl;
    return 0;
}