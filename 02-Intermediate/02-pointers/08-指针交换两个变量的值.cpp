#include <iostream>

using namespace std;

void Swap(int *first, int *second)
{
    int temp = *second;
    *second = *first;
    *first = temp;
}

int main()
{
    int first;
    int second;
    cin >> first >> second;
    cout << "first value: " << first << endl;
    cout << "second value: " << second << endl;
    Swap(&first, &second);
    cout << "first value: " << first << endl;
    cout << "second value: " << second << endl;
    return 0;
}
