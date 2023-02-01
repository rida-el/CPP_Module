// classes example
#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_values (1,4);
  cout << "area: " << rect.area()<<endl;
  cout << std::setw(10) << "reda" << endl;
  cout << std::setw(10) << "el" << endl;

  return 0;
}