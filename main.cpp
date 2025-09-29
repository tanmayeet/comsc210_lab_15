#include <iostream>
#include <string>
using namespace std;

class Movie {
 private:
  string screenWriter;
  int yearReleased;
  string title;

 public:
  string getSW() { return screenWriter; }
  void setSW(string s) { screenWriter = s; }
  int getYR() { return yearReleased; }
  void setYR(int y) { yearReleased = y; }
  string getTitle() { return title; }
  void setGreen(int t) { title = t; }
};

int main() { return 0; }