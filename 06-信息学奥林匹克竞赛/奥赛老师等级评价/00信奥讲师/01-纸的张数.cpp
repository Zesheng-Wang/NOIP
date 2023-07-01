#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    int start_paper = (x + 1) / 2;                 // 开始页所在纸的编号
    int end_paper = (y + 1) / 2;                   // 结束页所在纸的编号
    int paper_count = end_paper - start_paper + 1; // 纸张数量

    cout << paper_count << endl;

    return 0;
}
