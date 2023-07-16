#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::app | ios ::binary);
    if (file.is_open())
    {
        file.close();
    }
    return 0;
}
