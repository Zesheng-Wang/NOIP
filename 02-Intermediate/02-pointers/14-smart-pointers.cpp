#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // working with unique pointers
    unique_ptr<int> x(new int);
    unique_ptr<int> y = make_unique<int>();
    *x = 10;
    cout << *x << " " << *y << endl;
    auto numbers = make_unique<int[]>(10);
    numbers[0] = 10;
    cout << numbers[0] << "\n************" << endl;

    // working with share pointers
    shared_ptr<int> z = make_shared<int>();
    *z = 10;
    shared_ptr<int> zz(z);
    if (z == zz)
        cout << "Equal";
    return 0;
}
