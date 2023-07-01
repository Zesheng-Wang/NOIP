#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

struct Route
{
    int l, r;
    bool operator<(const Route &rhs) const
    {
        return r < rhs.r;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> groups(n);
    for (int i = 0; i < n; i++)
    {
        cin >> groups[i];
    }
    vector<Route> routes(m);
    for (int i = 0; i < m; i++)
    {
        cin >> routes[i].l >> routes[i].r;
    }
    sort(groups.begin(), groups.end());
    sort(routes.begin(), routes.end());
    int ans = 0, j = 0;
    multiset<int> s;
    for (int i = 0; i < m; i++)
    {
        while (j < n && groups[j] <= routes[i].r)
        {
            s.insert(groups[j]);
            j++;
        }
        auto it = s.lower_bound(routes[i].l);
        if (it != s.end())
        {
            s.erase(it);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}