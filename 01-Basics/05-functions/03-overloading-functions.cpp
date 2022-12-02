#include <iostream>
#include <string>
using namespace std;

void greet(string name){
    cout << "Hello " << name;
}

// Signature = name + (number and type of parameters)
void greet(string title, string name){
    cout << "Hello " << title << " " << name; 
}
int main() {
    cout << "Hello World!\n";
    greet("Mosh");

}
