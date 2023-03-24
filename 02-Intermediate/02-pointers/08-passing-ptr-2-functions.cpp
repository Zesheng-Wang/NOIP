#include <iostream>
using namespace std;

void increasePrice(double price)
{
    price *= 1.2;
}
void increasePrice1(double &price)
{
    price *= 1.2;
}
void increasePrice2(double *price)
{
    *price *= 1.2;
}
int main()
{
    double price = 100;
    increasePrice(price);
    cout << price << endl;
    increasePrice1(price);
    cout << price << endl;
    increasePrice2(&price);
    cout << price << endl;
    return 0;
}
