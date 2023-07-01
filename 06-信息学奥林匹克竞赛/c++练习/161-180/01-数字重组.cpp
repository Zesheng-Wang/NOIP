#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int black_hole(int num)
{
    string num_str = to_string(num);
    sort(num_str.begin(), num_str.end());
    int min_num = stoi(num_str);
    reverse(num_str.begin(), num_str.end());
    int max_num = stoi(num_str);
    num = max_num - min_num;
    return num;
}

int main()
{
    int c = 1234;
    cin >> c;
    int num = black_hole(c);
    cout << num;
    return 0;
}