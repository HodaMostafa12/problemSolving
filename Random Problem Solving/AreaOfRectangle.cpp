#include <iostream>

using namespace std;

class Rectangle {
	private :
		double width;
		double height;
	public:
		Rectangle(double w,double h) : width(w) ,height(h) {}
		
		void setWidth(double w){
			width = w;
		}
		
		
		void setheight(double h){
			height = h;
		}
		
		double getwidth() const {
			return width;
		}
		double getheight() const {
			return height;
		}
		
		double rectangleArea(){
			return width * height;
		}
		double rectangleperimeter (){
			return 2 * (width * height);
		}
		
		
		
};
int main(){
	double width;
	double height;
	cout<<"Enter Width Of Rectangle:"<<endl;
	cin>>width;
	cout<<"Enter height Of Rectangle:"<<endl;
	cin>>height;
	Rectangle rectangle(width,height);
	
	cout<<"Area of Rectangle is: "<<rectangle.rectangleArea() <<endl;
	cout<<"perimeter of Rectangle is: "<<rectangle.rectangleperimeter() <<endl;
	
}
