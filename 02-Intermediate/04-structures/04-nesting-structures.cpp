#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>

using namespace std;
struct Date
{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie
{
    string title;
    Date releaseDate;
    bool isPopular;
};

int main()
{
    // first
    Date date{1984, 6, 1};
    Movie movie{"terminator", date};
    // second
    Movie movie1{"terminator",
                 {1984, 6, 1}};
    cout << movie.releaseDate.year;

    return 0;
}
