#include <iostream>

class Car {
   public:
   /**
    * The attributes of class Car.
   */
   int number;
   int year;
 
   /**
    * An empty constructor of the class Car
    */
    Car() {
        std::cout << "Constructor-A is called\n";
    }
 
   /**
    * Another constructor of the class Car
    */
    Car(int number, int year) {
        std::cout << "Constructor-B is called\n";
        this->number = number;
        this->year = year;
    }
   
   /*
    * The methods of the class Car.
    */
 
   int getNumber() {
       return number;
   }
 
   int getYear() {
       return year;
   }
 
   void setNumber(int number) {
       this->number = number;
   }
 
   void setYear(int year) {
       this->year = year;
   }


};


int main() {
   /**
    * Creating object of the class Car and using its constructor
    */
   Car myCar(777, 2018);
 
   //Printing its attributes
   std::cout << "My car number and manufacturing year are: " << myCar.number << ", " << myCar.year << "\n";


   return 0;
}

