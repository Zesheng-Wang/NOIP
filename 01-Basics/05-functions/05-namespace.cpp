#include <iostream>

using namespace std;


namespace messaging {
    void greet(string name){
        cout << "Hello "  << name << endl;
    }
}

int main() {


    string name = "Mosh";
    messaging::greet(name);
    cout << name <<endl;
    cout << "Hello World!\n";
}
