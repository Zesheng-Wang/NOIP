#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>
using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main()
{
    vector<Movie> movies;
    Movie movie{"terminator", 1984};
    movies.push_back(movie);
    movies.push_back(movie);

    cout << movies[0].title << endl;
    for (Movie movie : movies)
    {
        cout << movie.title << endl;
    }

    return 0;
}
