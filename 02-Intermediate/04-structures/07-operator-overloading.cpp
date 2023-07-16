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

bool operator==(const Movie &first, const Movie &second)
{
    return (first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day);
}

ostream &operator<<(ostream &stream, const Movie &movie)
{
    stream << movie.title;
    return stream;
}

int main()
{
    // first
    Date date{1984, 6, 1};
    Movie movie{"terminator", date};
    // second
    Movie movie1{"terminator",
                 {1984, 6, 1}};
    if (movie1 == movie)
        cout << "equal";
    cout << movie1;
    return 0;
}
