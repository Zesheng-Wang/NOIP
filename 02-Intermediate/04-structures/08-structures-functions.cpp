#include <iostream>
#include <iomanip>
#include <cstring>
#include <vector>

using namespace std;
struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string title;
    Date releaseDate;
    bool isPopular;


};

bool operator==(const Movie &first, const Movie &second) {
    return (first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day);
}

ostream& operator<<(ostream& stream, const Movie& movie){
    stream << movie.title;
    return stream;
}

Movie getMovie(){
    return {"terminator", 1984};
}

void showMovie(Movie& movie){
    cout << movie.title;
}
int main() {
    auto movie = getMovie();
    showMovie(movie);
    return 0;
}
