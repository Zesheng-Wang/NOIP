#include <iostream>

using namespace std;

int main()
{
    int capacity = 5;
    int *numbers = new int[capacity];
    int entries = 0;
    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        if (entries == capacity)
        {
            // create a temp array (twice the size)
            capacity *= 2;
            int *temp = new int[capacity];
            // copy all the element
            for (int i = 0; i < entries; i++)
                temp[i] = numbers[i];
            // have "numbers" pointer  point to the new array
            delete[] numbers;
            numbers = temp;
        }
    }
    for (int i = 0; i < entries; i++)
    {
        cout << numbers[i] << endl;
    }
    delete[] numbers;

    return 0;
}
