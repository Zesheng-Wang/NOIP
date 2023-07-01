#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool can_cut_wood(const vector<int> &woods, int k, int length)
{
    int count = 0;
    for (int wood : woods)
    {
        count += wood / length;
        if (count >= k)
        {
            return true;
        }
    }
    return false;
}

int find_max_length(const vector<int> &woods, int k)
{
    int left = 1;
    int right = *max_element(woods.begin(), woods.end());
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (can_cut_wood(woods, k, mid))
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> woods(n);
    for (int i = 0; i < n; i++)
    {
        cin >> woods[i];
    }

    int max_length = find_max_length(woods, k);
    cout << max_length << endl;

    return 0;
}
