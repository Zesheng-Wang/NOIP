#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // C style string
    // Null terminator (\0)
    char name[5] = {'Z', 'e', 's', 'h', '\0'};
    // string literal
    char name1[5] = "Zesh";
    name1[0] = 'z';
    cout << name1 << endl;
    cout << "length : " << strlen(name1) << endl;
    char lastName[] = "Zesheng";
    strcat(name1, lastName);
    cout << name1 << endl;
    // 字符串拷贝
    strcpy(name1, lastName);
    cout << name1 << endl;
    // 字符串比较函数
    // == : 0
    // > : 正数
    // < : 负数
    cout << strcmp(name1, lastName);
    return 0;
}
