#include <iostream>
#include <string>

using namespace std;

// 统计连续重复字符的个数
pair<char, int> countMaxConsecutive(string str)
{
    char maxChar = '\0'; // 最大连续重复字符
    int maxCount = 0;    // 最大连续重复字符的个数

    char prevChar = '\0'; // 上一个字符
    int count = 0;        // 当前连续重复字符的个数

    for (char ch : str)
    {
        if (ch == prevChar)
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                maxChar = prevChar;
            }
            count = 1;
            prevChar = ch;
        }
    }

    if (count > maxCount)
    {
        maxCount = count;
        maxChar = prevChar;
    }

    return make_pair(maxChar, maxCount);
}

int main()
{
    string str;
    cin >> str; // 读取字符串

    pair<char, int> result = countMaxConsecutive(str);    // 统计连续重复字符的个数
    cout << result.first << " " << result.second << endl; // 输出结果

    return 0;
}
