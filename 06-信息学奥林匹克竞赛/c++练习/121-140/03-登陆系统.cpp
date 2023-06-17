#include <iostream>
using namespace std;

int main()
{
    string user, pwd;
    getline(cin, user);
    getline(cin, pwd);
    if (user == "TCTM" && pwd == "20230101")
        cout << "yes";
    else
        cout << "no";
    return 0;
}