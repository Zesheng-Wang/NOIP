#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
using namespace std;

enum class Action
{
    List = 1,
    Add,
    Update
};

enum class Operator
{
    List = 1,
    Add,
    Update
};

int main()
{
    int input;
    cin >> input;
    if (input == static_cast<int>(Action::List))
        cout << "List";
    return 0;
}
