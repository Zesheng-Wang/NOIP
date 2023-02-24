#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left << setw(10) << "Spring"
         << "Nice" << endl
         << "Summer"
         << "Hot";
    // format floating numbers
    cout << fixed << setprecision(4) << 12.34567;
    return 0;
}