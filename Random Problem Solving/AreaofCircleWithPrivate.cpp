#include <iostream>
#include <cmath>
using namespace std;

	class Circle{
				
		private :
			double radius ; 
			
		public:
			Circle(double r) : radius(r){}
			
			void setRadius(double r) {
				radius = r;
			}
			
			double getRadius() const{
				return radius ;
			}
			
			double calcAres() const{
				return 3.14 * pow(radius,2);
			}
			
			double calcCircumference() const {
			return 2 * 3.14 * radius;
			}
	
	};


int main(){
	double radius;
	cout<<"Enter the radius of the circle: "<<endl;
	cin>> radius;
	
	Circle circle(radius);
	
	cout<<"Area = "<<circle.calcAres()<<endl;
	cout<<"Circumference = "<<circle.calcCircumference()<<endl;
	
}
