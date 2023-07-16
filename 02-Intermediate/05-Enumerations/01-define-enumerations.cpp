#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
using namespace std;

enum Action
{
    List = 1,
    Add,
    Update
};
int main()
{
    int input;
    cin >> input;
    if (input == Action::List)
        cout << "List";
    return 0;
}
