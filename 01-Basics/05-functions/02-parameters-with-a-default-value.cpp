#include <iostream>
using namespace std;

double calculateTax(double income, double taxRate = .2)
{
    return income * taxRate;
}

int main()
{
    cout << "Hello World!\n";
    // calling - invoking - executing
    double tax = calculateTax(10'000, .3);
    cout << tax << endl;
    cout << "Done";
    return 0;
}
