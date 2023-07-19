#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int score;
    string name;
} s[107];

bool cmp(const Student &a, const Student &b)
{
    return a.score > b.score;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].score >> s[i].name;
    }
    sort(s, s + n, cmp);
    cout << s[0].name;

    return 0;
}
