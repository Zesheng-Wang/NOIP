#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int a[1008] = {};
    int choice;
    int position;
    int force_value;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> choice;
    if (choice == 0)
    {
        cin >> position >> force_value;
        for (int i = 1; i < position; i++)
        {
            cout << a[i] << " ";
        }
        cout << force_value << " ";
        for (int i = position; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else if (choice == 1)
    {
        cin >> position;
        for (int i = 1; i < position; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = position + 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}
