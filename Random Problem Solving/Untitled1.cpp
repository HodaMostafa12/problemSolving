#include <iostream>
using namespace std;

class Circle {
  private:
    int radius ;

  public:
    void setRadius(int r) {
      radius = r;
    }
    int getRadius() {
      return radius;
    }   
};

int main() {
  Circle circle;
  int m;
  cin>>circle.setRadius(m);
  cout <<"Area of Circle :"<<Circle.getRadius();
  return 0;
}
