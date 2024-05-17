#include <cmath>
#include <iostream>
using namespace std;
  
int main()
{
	cout<<"*Our Program to calcuate Volum of cylinder*"<<endl;
   double redias;
   double height;
   cout<<"Enter the redias of cylinder : "<<endl;
   cin>>redias;
   cout<<endl<<"Enter height of cylinder : "<<endl;
   cin>>height;
   
   double volum =  3.14 * pow(redias,2) * height ;
   cout<<"the volum of cylinder is : "<<volum;
   return 0;
}
