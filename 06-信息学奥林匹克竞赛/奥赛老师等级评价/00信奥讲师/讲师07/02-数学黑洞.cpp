#include <iostream>
#include <algorithm>
using namespace std;

int blackHoleSteps(int number)
{
    int steps = 0;

    while (number != 6174 && steps < 7)
    {
        string strNum = to_string(number);

        // 将数字转换为字符串，并在不足四位时在前面补零
        while (strNum.length() < 4)
        {
            strNum = "0" + strNum;
        }

        // 对数字进行升序和降序排序
        sort(strNum.begin(), strNum.end());
        int ascendingNum = stoi(strNum);
        sort(strNum.begin(), strNum.end(), greater<char>());
        int descendingNum = stoi(strNum);

        number = descendingNum - ascendingNum;
        steps++;
    }

    return steps;
}

int main()
{
    int inputNumber;
    cin >> inputNumber;

    int steps = blackHoleSteps(inputNumber);
    cout << steps << endl;

    return 0;
}
