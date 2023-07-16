#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream file;
    file.open("data.csv");
    if (file.is_open())
    {
        // CSV : Comma Sepatated Value
        // 可以使用'\n'代替endl 可以防止刷新缓冲区
        file << "if,title,year" << endl;
        file << "1, Terminator 1, 1984" << endl;
        file << "2, Terminator 2, 1991" << endl;
        file << setw(20) << "Hello" << setw(20) << " World" << endl;
        file.close();
    }

    return 0;
}
