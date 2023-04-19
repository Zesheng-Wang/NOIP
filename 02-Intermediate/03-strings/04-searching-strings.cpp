#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string name = "Zesheng";
    // 查找指定字符位置 可以传递两个参数，待搜索字符和起始搜索位置
    // 返回-1代表查找失败
    cout << name.find('e') << endl;
    //
    cout << name.rfind('e') << endl;
    cout << name.find_first_of("se") << endl;
    cout << name.find_last_of("se") << endl;

    return 0;
}
