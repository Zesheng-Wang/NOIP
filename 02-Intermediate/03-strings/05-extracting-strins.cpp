#include <iostream>
#include <cstring>

using namespace std;


int main() {
    string name = "Zesheng";
    // 提取字符串
    string copy = name.substr(3, 5);
    name = "";
    cout << copy << endl;

    return 0;
}
