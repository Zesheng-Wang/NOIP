#include <iostream>
using namespace std;

void greet(string firstName, string lastName){
    cout << "Hello " 
         << firstName << " "
         << lastName  
         << endl;
}

string fullName(string firstName, string lastName){
    return firstName + " " + lastName;
}

int main() {
    cout << "Hello World!\n";
    // calling - invoking - executing
    greet("Wang", "Zesheng");
    string name = fullName("Zesheng", "Wang");
    cout << name << endl;
    cout << "Done";
}
