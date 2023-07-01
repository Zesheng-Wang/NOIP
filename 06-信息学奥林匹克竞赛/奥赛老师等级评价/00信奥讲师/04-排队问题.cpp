#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> people(n + 1, 1);
    for (int i = 2; i <= k; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            people[j] = !people[j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (people[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}