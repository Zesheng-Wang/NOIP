#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Movie
{
    string title = " ";
    int releaseYear = 0;
};

int main()
{

    Movie movie;
    movie.title = "灌篮高手";
    movie.releaseYear = 2013;
    cout << "Title : " << movie.title << endl;
    cout << "releaseYear : " << movie.releaseYear;
    return 0;
}
