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
    if (movie.title == movie1.title &&
        movie.releaseDate.year == movie1.releaseDate.year &&
        movie.releaseDate.month == movie1.releaseDate.month &&
        movie.releaseDate.day == movie1.releaseDate.day)
        cout << "equal";
    return 0;
}
