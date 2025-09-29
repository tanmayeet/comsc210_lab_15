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

  void print() {
    cout << title << ": (" << red << ", " << green << ", " << blue << ")\n";
  }
};
}
;

int main() {
  Movie burgundy;
  // Create and initialize the Color burgundy
  burgundy.setName("Burgundy");
  burgundy.setRed(128);
  burgundy.setGreen(0);
  burgundy.setBlue(32);
  burgundy.print();  // Displays Color burgundy

  // Create and initialize the Color viridian
  Movie viridian;
  viridian.setName("Viridian");
  viridian.setRed(64);
  viridian.setGreen(130);
  viridian.setBlue(109);
  viridian.print();  // Displays Color viridian

  return 0;
}