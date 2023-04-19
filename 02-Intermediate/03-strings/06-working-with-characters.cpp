#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name = "Zesheng Wang";
    cout << islower(name[0]) << endl;
    cout << isupper(name[0]) << endl;
    cout << isalpha(name[0]) << endl;
    cout << isdigit(name[0]) << endl;
    cout << isspace(name[0]) << endl;
    cout << (char)toupper('a') << endl;
    cout << (char)tolower('a') << endl;
    char input;

    return 0;
}
