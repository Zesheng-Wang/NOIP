#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Movie
{
    string title = " ";
    int releaseYear = 0;
    bool isPopular;
};

int main()
{

    Movie movie = {"灌篮高手", 2023};

    string title = movie.title;
    int releaseYear = movie.releaseYear;
    bool isPopular = movie.isPopular;
    // c++ : structured binding
    // js : destructuring  
    // python : unpacking
    // auto [t, r, p]{movie}; c++17之后才能使用的语法
    cout << title;
    return 0;
}
