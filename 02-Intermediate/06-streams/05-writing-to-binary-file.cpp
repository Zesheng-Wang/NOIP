#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int numbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream file;
    file.open("numbers.dat", ios::binary);
    if (file.is_open())
    {
        file.write(reinterpret_cast<char *>(&numbers), sizeof(numbers));
        file.close();
    }
    return 0;
}
