#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

struct Movie
{
    int id;
    string title;
    int year;
};

int main()
{
    ifstream file;
    file.open("data.csv");
    if (file.is_open())
    {
        string str;
        getline(file, str);
        while (!file.eof())
        {
            getline(file, str, ',');

            if (str.empty())
                continue;
            Movie movie;
            movie.id = stoi(str);

            getline(file, str, ',');
            movie.title = str;

            getline(file, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }
        file.close();
    }
    return 0;
}
