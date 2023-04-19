#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // C++ strings
    string name = "Zesheng";
    name[0] = 'z';
    cout << name.length() << endl;
    name += " Wang";
    cout << name << endl;
    cout << name.starts_with('z') << endl;
    cout << name.ends_with('g') << endl;
    cout << name.empty() << endl;
    cout << name.front() << endl;
    cout << name.back() << endl;

    return 0;
}
