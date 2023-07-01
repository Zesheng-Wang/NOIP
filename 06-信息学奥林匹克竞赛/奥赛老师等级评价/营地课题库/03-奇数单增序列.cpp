#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;
int arr[MAX];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << ' ';
        }
    }
    return 0;
}