#include <iostream>

using namespace std;

void incresePrice (double& price){
    price *= 1.2;
}
void greet(string& name){
    cout << "Hello "  << name << endl;
    name = "a"; 
}
int main() {
    double price = 100;
    incresePrice(price);
    cout << price << endl;

    string name = "Mosh";
    greet(name);
    cout << name <<endl;
    cout << "Hello World!\n";
}
