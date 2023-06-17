#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
  string phrase;
  getline(cin, phrase);

  stringstream ss(phrase);
  string word;
  string abbreviation = "";
  while (ss >> word)
  {
    abbreviation += toupper(word[0]);
  }

  cout << abbreviation << endl;

  return 0;
}