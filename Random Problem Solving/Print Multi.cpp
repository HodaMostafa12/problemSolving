#include <iostream>


void printMulti(int x, int y) {
   std::cout << x * y << std::endl;
}


void printMulti(double x, double y) {
   std::cout << x * y << std::endl;
}


int main() {
   printMulti(3, 5);  // Automatically calls the first function
   printMulti(3.1, 5.2);  // Selects to calls the second function
   return 0;
}

