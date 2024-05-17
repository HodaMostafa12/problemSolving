#include <iostream>


/**
* Returns the minimum element of the input array.
*/
int findMin(int array[], int size) {
   int min = array[0];
   for (int curIndex=0; curIndex<size; curIndex++) {
       if (array[curIndex] < min) {
           min = array[curIndex];
       }
   }
   return min;
}


int main() {
   int array[9] = {5, 6, 7, -2, 0, -3, -1, -5, 1};
   std::cout<<"Minimum element of the array is  = "<<findMin(array, 9)<<"\n";
   return 0;
}

