#include <iostream>

class Car {
   public:
   /**
    * The attributes of class Car.
   */
   int number;
   int year;
 
   /*
    * The methods of class Car.
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
    * Creating object of the class Car
    */
   Car myCar;
 
   // Using the car object
   myCar.setNumber(777);
   myCar.setYear(2018);
 
   //Printing its attributes
   std::cout << "My car number and manufacturing year are: " << myCar.number << ", " << myCar.year << "\n";


   return 0;
}

