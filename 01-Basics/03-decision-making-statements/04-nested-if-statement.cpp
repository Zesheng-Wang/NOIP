#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool isCitizen = true;
    bool caResident = true;
    short tuition = 0;
    if (isCitizen)
    {
        if (caResident)
            tuition = 0;
        else
            tuition = 1000;
    }
    return 0;
}