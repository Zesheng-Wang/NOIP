#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int numbers[3];
    ifstream file;
    file.open("numbers.dat", ios::binary);
    if (file.is_open())
    {
        int number;

        while (file.read(reinterpret_cast<char *>(&number), sizeof(number)))
            cout << number << endl;
        file.close();
    }
    return 0;
}
