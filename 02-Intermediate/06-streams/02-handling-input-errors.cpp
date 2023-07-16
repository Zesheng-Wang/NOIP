#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // Buffer : temporary storage
    // [10 20]

    int first;
    while (true)
    {
        cout << "First: ";
        cin >> first;
        if (cin.fail())
        {
            cout << "输入例如一个无效值" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cout << "Second: ";
    int second;
    cin >> second;
    cout << "You entered " << first << " and " << second;
    return 0;
}
