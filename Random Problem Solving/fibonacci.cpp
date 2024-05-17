#include <iostream>

/**
* Returns the nth fibonacci number
*/

int fibonacci(int n){
  int fib;
  if (n <= 1){
    fib = n;
  } else {
    fib = fibonacci(n-1) + fibonacci(n-2);
  }
  return fib;
}
int main(){
  std::cout<<"The 6th fibonacci number is = "<<fibonacci(6)<<"\n";
  return 0;
}

