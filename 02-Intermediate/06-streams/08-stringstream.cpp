#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    double number = 12.34;
    stringstream stream;
    stream << fixed << setprecision(2) << number << endl;
    string str = stream.str();
    cout << str;
    return 0;
}
