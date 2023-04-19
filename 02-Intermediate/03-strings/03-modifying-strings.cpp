#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name = "Zesheng";
    name.append(" Wang");
    cout << name << endl;
    name.insert(2, "   ");
    cout << name << endl;
    // 删除指定步长的内容
    name.erase(0, 2);
    cout << name << endl;
    name.clear();
    cout << name << endl;
    name.replace(0, 2, "Ze");
    cout << name << endl;
    return 0;
}
